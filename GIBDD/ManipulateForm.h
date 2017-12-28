#pragma once

namespace GIBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ManipulateForm
	/// </summary>
	public ref class ManipulateForm : public System::Windows::Forms::Form
	{
	public:
		static bool is_update;
	private: System::Windows::Forms::Label^  gibdd_db_id;
	private: System::Windows::Forms::Label^  owner_db_id;
	public:

	public:

			 static int selected_row;
		ManipulateForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		ManipulateForm(bool is_upd, int select_row)
		{
			InitializeComponent();
			//
			this->is_update = is_upd;
			this->selected_row = select_row;
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ManipulateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  add_bttn;
	private: System::Windows::Forms::Button^  edit_bttn;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManipulateForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->add_bttn = (gcnew System::Windows::Forms::Button());
			this->edit_bttn = (gcnew System::Windows::Forms::Button());
			this->gibdd_db_id = (gcnew System::Windows::Forms::Label());
			this->owner_db_id = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Тип машины";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 78);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Модель";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"VIN";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(16, 170);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Имя и Фамилия";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(16, 216);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Серия паспорта";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(16, 262);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Номер паспорта";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(16, 288);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(89, 17);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"В розыске \?";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// add_bttn
			// 
			this->add_bttn->Location = System::Drawing::Point(7, 332);
			this->add_bttn->Name = L"add_bttn";
			this->add_bttn->Size = System::Drawing::Size(75, 23);
			this->add_bttn->TabIndex = 13;
			this->add_bttn->Text = L"Добавить";
			this->add_bttn->UseVisualStyleBackColor = true;
			this->add_bttn->Click += gcnew System::EventHandler(this, &ManipulateForm::add_bttn_Click);
			// 
			// edit_bttn
			// 
			this->edit_bttn->Location = System::Drawing::Point(88, 332);
			this->edit_bttn->Name = L"edit_bttn";
			this->edit_bttn->Size = System::Drawing::Size(75, 23);
			this->edit_bttn->TabIndex = 14;
			this->edit_bttn->Text = L"Изменить";
			this->edit_bttn->UseVisualStyleBackColor = true;
			this->edit_bttn->Click += gcnew System::EventHandler(this, &ManipulateForm::edit_bttn_Click);
			// 
			// gibdd_db_id
			// 
			this->gibdd_db_id->AutoSize = true;
			this->gibdd_db_id->Location = System::Drawing::Point(331, 146);
			this->gibdd_db_id->Name = L"gibdd_db_id";
			this->gibdd_db_id->Size = System::Drawing::Size(0, 13);
			this->gibdd_db_id->TabIndex = 15;
			this->gibdd_db_id->Visible = false;
			// 
			// owner_db_id
			// 
			this->owner_db_id->AutoSize = true;
			this->owner_db_id->Location = System::Drawing::Point(331, 177);
			this->owner_db_id->Name = L"owner_db_id";
			this->owner_db_id->Size = System::Drawing::Size(0, 13);
			this->owner_db_id->TabIndex = 16;
			this->owner_db_id->Visible = false;
			// 
			// ManipulateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(215, 366);
			this->Controls->Add(this->owner_db_id);
			this->Controls->Add(this->gibdd_db_id);
			this->Controls->Add(this->edit_bttn);
			this->Controls->Add(this->add_bttn);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ManipulateForm";
			this->Text = L"Редактирование";
			this->Load += gcnew System::EventHandler(this, &ManipulateForm::ManipulateForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void add_bttn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void edit_bttn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ManipulateForm_Load(System::Object^  sender, System::EventArgs^  e);
};
}
