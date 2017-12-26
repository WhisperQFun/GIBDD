#include "Login.h"
#include "Database.h"
#include "MainForm.h"
#include "RegForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GIBDD::Login form;
	Application::Run(%form);
}

System::Void GIBDD::Login::enter_bttn_Click(System::Object ^ sender, System::EventArgs ^ e)
{	
	SQLiteDataReader ^reader1;
	if (Login_txb->Text != ""&&password_txb->Text != "")
	{
		String^ Selected_Values = "*";
		String^ DB_name_2 = "USERS";
		Database ^DB = gcnew Database();
		DB->Open_DB();
		reader1 = DB->Select_Table_DB(Selected_Values, DB_name_2);
		int i = 0;
		while (reader1->Read())
		{
			if ((reader1->GetValue(1)->ToString() == password_txb->Text) && (reader1->GetValue(2)->ToString() == Login_txb->Text))
			{
				MainForm^ f1 = gcnew MainForm(reader1->GetValue(2)->ToString(), reader1->GetValue(3)->ToString());
				MessageBox::Show("Успешно");
				this->Visible = false;
				f1->Show();
				i = 1;
			}

		}
		if (i == 0)
		{
			MessageBox::Show("Неверный логин или пароль");
		}
		reader1->Close();
		DB->Close();
	}
	else
	{
		MessageBox::Show("Не все поля Заполнены");
	}

}

System::Void GIBDD::Login::reg_bttn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	RegForm^ rg = gcnew RegForm();
	rg->ShowDialog();
}

System::Void GIBDD::Login::Login_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	Database ^DB = gcnew Database();
	DB->Open_DB();
	try
	{
		String^ Table_Colums_Name = "id INTEGER PRIMARY KEY, type STRING, model STRING, vin STRING, owners_id INTEGER, date STRING, insearch BOOLEAN";
		String^ Table_name = "GIBDD";
		String^ Colums_Name_2 = "users_id INTEGER PRIMARY KEY, password STRING, login STRING, is_admin BOOLEAN";
		String^ DB_name_2 = "USERS";
		String^ DB_name_3 = "OWNERS";
		String^ Colums_Name_3 = "owners_id INTEGER PRIMARY KEY, owner STRING, passport_series STRING, passport_number STRING";
		
		DB->Create_Table_DB(Table_name, Table_Colums_Name);
		DB->Create_Table_DB(DB_name_2, Colums_Name_2);
		DB->Create_Table_DB(DB_name_3, Colums_Name_3);
	}
	catch(Exception ^e)
	{
	
	}
	finally
	{
		DB->Close();
	}
	

}
