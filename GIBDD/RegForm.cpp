#include "RegForm.h"
#include "Database.h"

System::Void GIBDD::RegForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if(textBox2->Text == textBox3->Text)
	{
		if ((textBox1->Text != "") && (textBox2->Text != ""))
		{
			Database ^DB = gcnew Database();
			DB->Open_DB();
			String^ Inserted_Values = "NULL, '" + textBox2->Text + "', '" + textBox1->Text + "', '" + "0" + "'";
			String^ DB_name = "USERS";
			DB->Insert_Table_DB(Inserted_Values, DB_name);
			DB->Close();
		}
		else
		{
			MessageBox::Show("Заполните поля !!!");
		}	
	}
	else
	{
		MessageBox::Show("Пароли не совпадают");
	}
	MessageBox::Show("Успешно !!!");
	this->Close();
}
