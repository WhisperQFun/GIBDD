#pragma once

namespace GIBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// —водка дл€ Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:

		Login(void)
		{
			InitializeComponent();
			//
			
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  Login_txb;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  password_txb;
	private: System::Windows::Forms::Button^  enter_bttn;
	private: System::Windows::Forms::Button^  reg_bttn;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Login_txb = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->password_txb = (gcnew System::Windows::Forms::TextBox());
			this->enter_bttn = (gcnew System::Windows::Forms::Button());
			this->reg_bttn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"јвторизаци€";
			// 
			// Login_txb
			// 
			this->Login_txb->Location = System::Drawing::Point(62, 81);
			this->Login_txb->Name = L"Login_txb";
			this->Login_txb->Size = System::Drawing::Size(100, 20);
			this->Login_txb->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(58, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ћогин";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(58, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ѕароль";
			// 
			// password_txb
			// 
			this->password_txb->Location = System::Drawing::Point(62, 127);
			this->password_txb->Name = L"password_txb";
			this->password_txb->Size = System::Drawing::Size(100, 20);
			this->password_txb->TabIndex = 4;
			// 
			// enter_bttn
			// 
			this->enter_bttn->Location = System::Drawing::Point(26, 171);
			this->enter_bttn->Name = L"enter_bttn";
			this->enter_bttn->Size = System::Drawing::Size(87, 23);
			this->enter_bttn->TabIndex = 5;
			this->enter_bttn->Text = L"¬ход";
			this->enter_bttn->UseVisualStyleBackColor = true;
			this->enter_bttn->Click += gcnew System::EventHandler(this, &Login::enter_bttn_Click);
			// 
			// reg_bttn
			// 
			this->reg_bttn->Location = System::Drawing::Point(119, 171);
			this->reg_bttn->Name = L"reg_bttn";
			this->reg_bttn->Size = System::Drawing::Size(84, 23);
			this->reg_bttn->TabIndex = 6;
			this->reg_bttn->Text = L"–егистраци€";
			this->reg_bttn->UseVisualStyleBackColor = true;
			this->reg_bttn->Click += gcnew System::EventHandler(this, &Login::reg_bttn_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(236, 217);
			this->Controls->Add(this->reg_bttn);
			this->Controls->Add(this->enter_bttn);
			this->Controls->Add(this->password_txb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Login_txb);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->Text = L"¬ход";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void enter_bttn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void reg_bttn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
