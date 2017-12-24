#include "MainForm.h"
#include "Data_conteiner.h"
#include "Database.h"
#include "ManipulateForm.h"


using namespace System;
using namespace GIBDD;




DataTable^ load()
{
	using namespace System::Collections::Generic;
	List<Data_gibdd^>^ Data1 = gcnew List<Data_gibdd^>;
	List<Data_users^>^ Data2 = gcnew List<Data_users^>;
	List<Data_owners^>^ Data3 = gcnew List<Data_owners^>;

	String^ Table_Colums_Name = "id INTEGER PRIMARY KEY, type STRING, model STRING, vin STRING, owners_id INTEGER, date STRING, insearch BOOLEAN";
	String^ Table_name = "GIBDD";
	String^ Colums_Name_2 = "users_id INTEGER PRIMARY KEY, password STRING, login STRING, is_admin BOOLEAN";
	String^ DB_name_2 = "USERS";
	String^ DB_name_3 = "OWNERS";
	String^ Colums_Name_3 = "owners_id INTEGER PRIMARY KEY, owner STRING, passport_series STRING, passport_number STRING";
	String^ Selected_Values = "*";

	int i = 0;
	Database ^DB = gcnew Database();
	DB->Open_DB();
	DB->Create_Table_DB(Table_name, Table_Colums_Name);
	DB->Create_Table_DB(DB_name_2, Colums_Name_2);
	DB->Create_Table_DB(DB_name_3, Colums_Name_3);
	SQLiteDataReader ^reader = DB->Select_Table_DB(Selected_Values, Table_name);
	SQLiteDataReader ^reader2 = DB->Select_Table_DB(Selected_Values, DB_name_2);
	SQLiteDataReader ^reader3 = DB->Select_Table_DB(Selected_Values, DB_name_3);

	DataTable^ Table = gcnew DataTable();
	

	/*-for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
	{
	Table->Columns->Add(reader->GetName(colCtr));
	}*/
	Table->Columns->Add("�");
	Table->Columns->Add("��� ������");
	Table->Columns->Add("������");
	Table->Columns->Add("VIN");
	Table->Columns->Add("����������");
	Table->Columns->Add("��� � �������");
	Table->Columns->Add("����� ��������");
	Table->Columns->Add("����� ��������");
	Table->Columns->Add("����");
	Table->Columns->Add("� ������� ?");
	array<String^>^ strarray = gcnew array<String^>(reader->FieldCount+reader3->FieldCount-1);
	while (reader->Read() && reader3->Read())
	{
		try {
			Data1->Insert(i, gcnew Data_gibdd());
			Data1[i]->id = reader->GetValue(0)->ToString();
			Data1[i]->type = reader->GetValue(1)->ToString();
			Data1[i]->model = reader->GetValue(2)->ToString();
			Data1[i]->vin = reader->GetValue(3)->ToString();
			Data1[i]->owners_id = reader->GetValue(4)->ToString();
			Data1[i]->date = reader->GetValue(5)->ToString();
			Data1[i]->insearch = reader->GetValue(6)->ToString();
			Data3->Insert(i, gcnew Data_owners());
			Data3[i]->owners_id = reader3->GetValue(0)->ToString();
			Data3[i]->owner = reader3->GetValue(1)->ToString();
			Data3[i]->passport_series = reader3->GetValue(2)->ToString();
			Data3[i]->passport_number = reader3->GetValue(3)->ToString();

			i++;
		}
		catch (Exception ^e)
		{
			MessageBox::Show(e->ToString());
		}

	}
	try {
		for (int colCtr = 0; colCtr < Data1->Count; ++colCtr)
		{
			strarray[0] = Data1[colCtr]->id;
			strarray[1] = Data1[colCtr]->type;
			strarray[2] = Data1[colCtr]->model;
			strarray[3] = Data1[colCtr]->vin;
			strarray[4] = Data1[colCtr]->owners_id;
			strarray[5] = Data3[colCtr]->owner;
			strarray[6] = Data3[colCtr]->passport_series;
			strarray[7] = Data3[colCtr]->passport_number;
			strarray[8] = Data1[colCtr]->date;
			strarray[9] = Data1[colCtr]->insearch;
			Table->Rows->Add(strarray);
		}
	}
	catch (Exception ^e)
	{
		MessageBox::Show(e->ToString());
	}



	reader3->Close();
	reader2->Close();
	reader->Close();
	DB->Close();
	return Table;


}


System::Void GIBDD::MainForm::MainForm_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	this->Text = "� ������������ "+user_id;
	dataGridView1->DataSource = load();
	
}

System::Void GIBDD::MainForm::MainForm_FormClosing(System::Object ^ sender, System::Windows::Forms::FormClosingEventArgs ^ e)
{
	Application::Exit();
}

System::Void GIBDD::MainForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	ManipulateForm^ mp = gcnew ManipulateForm();
	mp->ShowDialog();
	dataGridView1->DataSource = load();
}

System::Void GIBDD::MainForm::red_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	ManipulateForm^ mp = gcnew ManipulateForm(true, this->dataGridView1->SelectedCells[0]->RowIndex + 1);
	mp->ShowDialog();
	dataGridView1->DataSource = load();
}
