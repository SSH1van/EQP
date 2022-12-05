#pragma once
#include <wchar.h>
#include "iostream"
#include "MyForm1.h"

namespace EQP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(98, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Заполните поля";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 155);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 35);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"admin";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 217);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(201, 35);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"12345";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(137, 271);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(43, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(341, 87);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Добро пожаловать в\r\nпрограмму решения задачи\r\nо восьми ферзях";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 335);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(8, 6, 8, 6);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вход";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "admin" && textBox2->Text == "12345")
	{
		MyForm1^ form1 = gcnew MyForm1();
		this->Hide();
		form1->ShowDialog();
		this->Show();
	}
	else
	{
		String^ text = "Некорректные логин или пароль!";
		String^ caption = "Ошибка входа!";
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		MessageBoxIcon icon = MessageBoxIcon::Error;
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show(text, caption, buttons, icon);
	}
}
};
}
