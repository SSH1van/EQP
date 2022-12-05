#pragma once
#include <wchar.h>
#include "iostream"

namespace EQP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Chiller", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->Location = System::Drawing::Point(798, 596);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(256, 53);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Chiller", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(60, 607);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Количество размещений: ";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->IntegralHeight = false;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(633, 25);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(542, 542);
			this->listBox1->TabIndex = 5;
			this->listBox1->Click += gcnew System::EventHandler(this, &MyForm1::listBox1_Click);
			this->listBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::KeyUp1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 60;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(43, 25);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 60;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->dataGridView1->RowTemplate->Height = 60;
			this->dataGridView1->Size = System::Drawing::Size(542, 542);
			this->dataGridView1->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1181, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(36, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1222, 708);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Задача о восьми ферзях";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ ABC = { "ABCDEFGH" };
	void Create()
	{
		
		int i, j;
		dataGridView1->Columns->Clear();
		for (i = 1; i <= 8; i++)
		{
			dataGridView1->Columns->Add("i" + i.ToString(), ABC[i - 1].ToString());
			dataGridView1->Columns[i - 1]->Width = 60;
		}

		dataGridView1->Rows->Add(8);
		for (i = 1; i <= 8; i++)
			dataGridView1->Rows[i - 1]->HeaderCell->Value = i.ToString();

		dataGridView1->AllowUserToAddRows = false;

		for (i = 0; i < 8; i++)
			if (i % 2 == 0)
				for (j = 0; j < 8; j += 2)
				{
					dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Moccasin;
					dataGridView1->Rows[i]->Cells[j + 1]->Style->BackColor = Color::Sienna;
				}
			else for (j = 1; j < 8; j += 2)
			{
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Moccasin;
				dataGridView1->Rows[i]->Cells[j - 1]->Style->BackColor = Color::Sienna;
			}

	}

	bool Prov1(int x1, int y1, int x2, int y2)
	{
		if ((x1 == x2) || (y1 == y2)) return true;

		int tx, ty;

		tx = x1 - 1; ty = y1 - 1;
		while ((tx >= 1) && (ty >= 1))
		{
			if ((tx == x2) && (ty == y2)) return true;
			tx--; ty--;
		}

		tx = x1 + 1; ty = y1 + 1;
		while ((tx <= 8) && (ty <= 8))
		{
			if ((tx == x2) && (ty == y2)) return true;
			tx++; ty++;
		}

		tx = x1 + 1; ty = y1 - 1;
		while ((tx <= 8) && (ty >= 1))
		{
			if ((tx == x2) && (ty == y2)) return true;
			tx++; ty--;
		}

		tx = x1 - 1; ty = y1 + 1;
		while ((tx >= 1) && (ty <= 8))
		{
			if ((tx == x2) && (ty == y2)) return true;
			tx--; ty++;
		}
		return false;
	}

	bool Prov2(int M[], int p)
	{
		int px, py, x, y;
		int i;
		px = M[p];
		py = p;

		for (i = 1; i <= p - 1; i++)
		{
			x = M[i];
			y = i;
			if (Prov1(x, y, px, py))
				return true;
		}
		return false;
	}

	void Show(String^ s)
	{
		int i;
		int j;
		int k;
		String^ xs, ^ ys;
		int x, y;

		for (i = 0; i < 8; i++)
			for (j = 0; j < 8; j++)
				dataGridView1->Rows[i]->Cells[j]->Value = "";

		j = 0;

		for (i = 0; i < 8; i++)
		{
			++j;
			xs = "";
			while (s[j] != ';')
			{
				xs = xs + s[j].ToString();
				++j;
			}

			j += 2;

			ys = "";
			while (s[j] != ')')
			{
				ys = ys + s[j].ToString();
				++j;
			}

			j += 2;

			for (k = 0; k < 8; k++)
				if (xs == ABC[k].ToString())
				{
					x = k + 1;
					break;
				}

			
			
			//x = int::Parse(xs);
			y = int::Parse(ys);

			wchar_t f = L'\x2655';

			dataGridView1->Rows[y - 1]->Cells[x - 1]->Value = f;
		}
	}

	void Add(int M[])
	{
		String^ s = "";
		for (int i = 1; i <= 8; i++)
			s = s + "(" + ABC[M[i] - 1].ToString() + "; " + i.ToString() + ") ";
		listBox1->Items->Add(s);
	}


	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SetStyle(ControlStyles::SupportsTransparentBackColor, true);
		this->label1->BackColor = Color::Transparent;
		pictureBox1->BackColor = Color::Transparent;
		Create();
		dataGridView1->ClearSelection();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int M[9]{};
		int p;
		int k;

		listBox1->Items->Clear();

		p = 1;
		M[p] = 0;
		M[0] = 0;
		k = 0;


		while (p > 0)
		{
			M[p] = M[p] + 1;
			if (p == 8)
			{
				if (M[p] > 8)
				{
					while (M[p] > 8) p--;
				}
				else
				{
					if (!Prov2(M, p))
					{
						Add(M);
						k++;
						p--;
					}
				}
			}
			else
			{
				if (M[p] > 8)
				{
					while (M[p] > 8) p--;
				}
				else
				{
					if (!Prov2(M, p))
					{
						p++;
						M[p] = 0;
					}
				}
			}
		}

		if (k > 0)
		{
			listBox1->SelectedIndex = 0;
			listBox1_Click(sender, e);
			label1->Text = "Количество размещений: " + k.ToString();
		}
	}

	private: System::Void listBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Items->Count <= 0) return;

		int num;
		String^ s;
		num = listBox1->SelectedIndex;
		s = listBox1->Items[num]->ToString();
		Show(s);
	}
private: System::Void KeyUp1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (listBox1->Items->Count <= 0) return;

	int num;
	String^ s;
	num = listBox1->SelectedIndex;
	s = listBox1->Items[num]->ToString();
	Show(s);
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = "   Решение задачи о восьми ферзях\n\n   При нажатии на кнопку 'Рассчитать' программа определяет и выводит все возможные варианты решения\n   Перелючение между вариантами возможно при помощи нажатия на их значения или при помощи клавиатуры\n   Задача подразумевает под собой расстановку восьми ферзей при условии, что ни один из них не будет 'бить' других";
	String^ caption = "Справка";
	MessageBoxButtons buttons = MessageBoxButtons::OK;
	MessageBoxIcon icon = MessageBoxIcon::Question;
	System::Windows::Forms::DialogResult result;
	result = MessageBox::Show(text, caption, buttons, icon);
	}
};
}
