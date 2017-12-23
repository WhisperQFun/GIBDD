#include "Login.h"
#include "Database.h"
#include "MainForm.h"

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
	MainForm^ f1 = gcnew MainForm(0);
	this->Visible = false;
	f1->Show();
	
	/*
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
				MainForm^ f1 = gcnew MainForm(Convert::ToInt32(reader1->GetValue(0)->ToString()));
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
	}*/
}
