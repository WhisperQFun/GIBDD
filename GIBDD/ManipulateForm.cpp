#include "ManipulateForm.h"
#include "Database.h"


using namespace System;
using namespace System::Windows::Forms;

int i;
int owner_id;


System::Void GIBDD::ManipulateForm::add_bttn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Database ^DB = gcnew Database();
	DB->Open_DB();
	String^ DB_name_3 = "OWNERS";
	String^ Inserted_Values_3 = "NULL, '" + textBox4->Text + "', '" + textBox5->Text + "', '" + textBox6->Text + "'";
	String^ DB_name = "GIBDD";
	if (checkBox1->Checked == true)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	owner_id = DB->Insert_Table_DB(Inserted_Values_3, DB_name_3);
	String^ Inserted_Values = "NULL, '" + textBox1->Text + "', '" + textBox2->Text + "', '" + textBox3->Text + "', " + owner_id + ", '" + DateTime::Now.ToString() + "', " + i + "";
	MessageBox::Show(Inserted_Values);




	DB->Insert_Table_DB(Inserted_Values, DB_name);

	DB->Close();
	MessageBox::Show("Sucess!!!!");
	this->Close();
}

System::Void GIBDD::ManipulateForm::edit_bttn_Click(System::Object ^ sender, System::EventArgs ^ e)
{

}

System::Void GIBDD::ManipulateForm::ManipulateForm_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	if (is_update == true)
	{
		this->add_bttn->Enabled = false;
		int i = 0;
		Database ^DB = gcnew Database();
		DB->Open_DB();
		String^ Selected_Values = "*";
		String^ DB_name = "GIBDD";
		SQLiteDataReader ^reader = DB->Select_Table_DB(Selected_Values, DB_name);

		while (reader->Read())
		{
			if (reader->GetValue(0)->ToString() == selected_row.ToString())
			{
				gibdd_db_id->Text = reader->GetValue(0)->ToString();
				textBox1->Text = reader->GetValue(1)->ToString();
				textBox2->Text = reader->GetValue(2)->ToString();
				owner_db_id->Text = reader->GetValue(3)->ToString();
				textBox3->Text = reader->GetValue(4)->ToString();
				if (reader->GetValue(6)->ToString() == "0")
				{
					checkBox1->Checked = false;
				}
				else
				{
					checkBox1->Checked = true;
				}
				break;
			}
		}
		reader->Close();
		DB->Close();
		Database ^DB1 = gcnew Database();
		DB1->Open_DB();
		DB_name = "OWNERS";
		SQLiteDataReader ^reader1 = DB1->Select_Table_DB(Selected_Values, DB_name);
		while (reader1->Read())
		{
			if (reader1->GetValue(0)->ToString() == owner_db_id->Text)
			{

				textBox4->Text = reader1->GetValue(1)->ToString();
				textBox5->Text = reader1->GetValue(2)->ToString();
				textBox6->Text = reader1->GetValue(3)->ToString();
				break;
			}
		}
		reader1->Close();
		DB1->Close();

	}
	else
	{
		this->edit_bttn->Enabled = false;
		this->add_bttn->Enabled = true;
	}
	is_update = false;
}

