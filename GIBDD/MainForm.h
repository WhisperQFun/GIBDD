#pragma once
#include "Login.h"
namespace GIBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		String ^ is_adm;		
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  report_bttn;
	public:
		String ^ user_id;
		MainForm(String^ usr_id, String^ is_admin1)
		{
			this->is_adm = is_admin1;
			this->user_id = usr_id;
			InitializeComponent();
			//

			//
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  search_bttn_1;
		
	
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  red_btn;
	private: System::Windows::Forms::Button^  delete_bttn;



	
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->red_btn = (gcnew System::Windows::Forms::Button());
			this->delete_bttn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->search_bttn_1 = (gcnew System::Windows::Forms::Button());
			this->report_bttn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(470, 297);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 335);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить запись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// red_btn
			// 
			this->red_btn->Location = System::Drawing::Point(243, 335);
			this->red_btn->Name = L"red_btn";
			this->red_btn->Size = System::Drawing::Size(239, 23);
			this->red_btn->TabIndex = 2;
			this->red_btn->Text = L"Редактировать запись";
			this->red_btn->UseVisualStyleBackColor = true;
			this->red_btn->Click += gcnew System::EventHandler(this, &MainForm::red_btn_Click);
			// 
			// delete_bttn
			// 
			this->delete_bttn->Location = System::Drawing::Point(12, 364);
			this->delete_bttn->Name = L"delete_bttn";
			this->delete_bttn->Size = System::Drawing::Size(470, 21);
			this->delete_bttn->TabIndex = 3;
			this->delete_bttn->Text = L"Удалить запись";
			this->delete_bttn->UseVisualStyleBackColor = true;
			this->delete_bttn->Click += gcnew System::EventHandler(this, &MainForm::delete_bttn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(509, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Поиск по №";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(513, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(92, 20);
			this->textBox1->TabIndex = 5;
			// 
			// search_bttn_1
			// 
			this->search_bttn_1->Location = System::Drawing::Point(513, 61);
			this->search_bttn_1->Name = L"search_bttn_1";
			this->search_bttn_1->Size = System::Drawing::Size(92, 23);
			this->search_bttn_1->TabIndex = 6;
			this->search_bttn_1->Text = L"Поиск";
			this->search_bttn_1->UseVisualStyleBackColor = true;
			this->search_bttn_1->Click += gcnew System::EventHandler(this, &MainForm::search_bttn_1_Click);
			// 
			// report_bttn
			// 
			this->report_bttn->Location = System::Drawing::Point(488, 335);
			this->report_bttn->Name = L"report_bttn";
			this->report_bttn->Size = System::Drawing::Size(157, 23);
			this->report_bttn->TabIndex = 7;
			this->report_bttn->Text = L"Сделать отчет";
			this->report_bttn->UseVisualStyleBackColor = true;
			this->report_bttn->Click += gcnew System::EventHandler(this, &MainForm::report_bttn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(683, 393);
			this->Controls->Add(this->report_bttn);
			this->Controls->Add(this->search_bttn_1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->delete_bttn);
			this->Controls->Add(this->red_btn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void red_btn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void delete_bttn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void search_bttn_1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void report_bttn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
