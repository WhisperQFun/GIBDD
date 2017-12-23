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
