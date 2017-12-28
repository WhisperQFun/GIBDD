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

	String^ Table_name = "GIBDD";
	String^ DB_name_2 = "USERS";
	String^ DB_name_3 = "OWNERS";
	String^ Selected_Values = "*";

	int i = 0;
	Database ^DB = gcnew Database();
	DB->Open_DB();
	SQLiteDataReader ^reader = DB->Select_Table_DB(Selected_Values, Table_name);
	SQLiteDataReader ^reader2 = DB->Select_Table_DB(Selected_Values, DB_name_2);
	SQLiteDataReader ^reader3 = DB->Select_Table_DB(Selected_Values, DB_name_3);

	DataTable^ Table = gcnew DataTable();
	

	/*-for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
	{
	Table->Columns->Add(reader->GetName(colCtr));
	}*/
	Table->Columns->Add("№");
	Table->Columns->Add("Тип машины");
	Table->Columns->Add("Модель");
	Table->Columns->Add("VIN");
	Table->Columns->Add("№Владельца");
	Table->Columns->Add("Имя и фамилия");
	Table->Columns->Add("Серия паспорта");
	Table->Columns->Add("Номер паспорта");
	Table->Columns->Add("Дата");
	Table->Columns->Add("В розыске ?");
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

DataTable^ load(String^ value_search,int parametr_number)
{
	using namespace System::Collections::Generic;
	List<Data_gibdd^>^ Data1 = gcnew List<Data_gibdd^>;
	List<Data_users^>^ Data2 = gcnew List<Data_users^>;
	List<Data_owners^>^ Data3 = gcnew List<Data_owners^>;

	String^ Table_name = "GIBDD";
	String^ DB_name_2 = "USERS";
	String^ DB_name_3 = "OWNERS";
	String^ Selected_Values = "*";

	int i = 0;
	Database ^DB = gcnew Database();
	DB->Open_DB();
	SQLiteDataReader ^reader = DB->Select_Table_DB(Selected_Values, Table_name);
	SQLiteDataReader ^reader2 = DB->Select_Table_DB(Selected_Values, DB_name_2);
	SQLiteDataReader ^reader3 = DB->Select_Table_DB(Selected_Values, DB_name_3);

	DataTable^ Table = gcnew DataTable();


	/*-for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
	{
	Table->Columns->Add(reader->GetName(colCtr));
	}*/
	Table->Columns->Add("№");
	Table->Columns->Add("Тип машины");
	Table->Columns->Add("Модель");
	Table->Columns->Add("VIN");
	Table->Columns->Add("№Владельца");
	Table->Columns->Add("Имя и фамилия");
	Table->Columns->Add("Серия паспорта");
	Table->Columns->Add("Номер паспорта");
	Table->Columns->Add("Дата");
	Table->Columns->Add("В розыске ?");
	array<String^>^ strarray = gcnew array<String^>(reader->FieldCount + reader3->FieldCount - 1);
	while (reader->Read() && reader3->Read())
	{
		try {
			if(reader->GetValue(parametr_number)->ToString()== value_search)
			{
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
	if(is_adm=="False")
	{
		delete_bttn->Visible = false;
		red_btn->Visible = false;
	}
	else
	{
		delete_bttn->Visible = true;
		red_btn->Visible = true;
	}
	this->Text = "С подключением "+user_id;
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
	ManipulateForm^ mp = gcnew ManipulateForm(true, Convert::ToInt32(this->dataGridView1->SelectedCells[0]->Value));
	mp->ShowDialog();
	dataGridView1->DataSource = load();
}

System::Void GIBDD::MainForm::delete_bttn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	String^ DB_name = "GIBDD";
	String^ DB_name_3 = "OWNERS";
	Database ^DB = gcnew Database();
	DB->Open_DB();
	DB->Delete_row_db(DB_name_3, "owners_id=" + (this->dataGridView1->SelectedCells[0]->RowIndex + 1));
	DB->Delete_row_db(DB_name, "id=" + (this->dataGridView1->SelectedCells[0]->RowIndex + 1));
	DB->Close();
	dataGridView1->DataSource = load();
}

System::Void GIBDD::MainForm::search_bttn_1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	dataGridView1->DataSource = load(textBox1->Text,0);
}
