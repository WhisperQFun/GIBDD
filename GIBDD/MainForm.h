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

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		
		String ^ user_id;
		MainForm(String^ usr_id)
		{
			this->user_id = usr_id;
			InitializeComponent();
			//
			
			//
		}
	
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
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 479);
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

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void red_btn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void delete_bttn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
