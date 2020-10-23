#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "Cut.hpp"

// ------------------------------------

bool isMouseDown = false;
int xOffset, yOffset;
Point mouseOffset;

using Drawing::Color;

enum Code{
	eNone,
	eOK,
	eInput,
	eStep,
	eConvert,
};

int countSymbols = 8;

// ------------------------------------


public ref class MyForm : public Forms::Form
{
public:
	MyForm(void)
	{
		InitializeComponent();
		set_bg();
	}

	~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}

private:
	System::Windows::Forms::Button^  button1;
	System::Windows::Forms::Label^  label2;
	System::Windows::Forms::Label^  label3;
	System::Windows::Forms::TextBox^  textBox1;
	System::Windows::Forms::TextBox^  textBox2;
	System::Windows::Forms::Panel^  panel1;
	System::Windows::Forms::Label^  NAME;
	System::Windows::Forms::Label^  exit;
	System::Windows::Forms::Label^  task;
	System::Windows::Forms::Label^  descr;
	System::Windows::Forms::Label^  about;
	System::Windows::Forms::Label^  label1;
	System::Windows::Forms::Label^  label4;
	System::Windows::Forms::Label^  label6;
	System::Windows::Forms::ListBox^  listBox1;
	System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBox5;


	System::Windows::Forms::Label^  label7;
	System::Windows::Forms::NumericUpDown^  numericUpDown1;
	System::Windows::Forms::Label^  label8;
	System::Windows::Forms::Label^  label9;
	System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  textBox3;


private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;



		 System::ComponentModel::IContainer^  components;

public:
	void InitializeComponent(void)
	{
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->exit = (gcnew System::Windows::Forms::Label());
		this->NAME = (gcnew System::Windows::Forms::Label());
		this->task = (gcnew System::Windows::Forms::Label());
		this->descr = (gcnew System::Windows::Forms::Label());
		this->about = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->listBox1 = (gcnew System::Windows::Forms::ListBox());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->textBox5 = (gcnew System::Windows::Forms::TextBox());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
		this->textBox4 = (gcnew System::Windows::Forms::TextBox());
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->label11 = (gcnew System::Windows::Forms::Label());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->panel1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
		this->SuspendLayout();
		// 
		// button1
		// 
		this->button1->BackColor = System::Drawing::Color::White;
		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->button1->Location = System::Drawing::Point(547, 244);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(188, 27);
		this->button1->TabIndex = 20;
		this->button1->Text = L"Вычислить";
		this->button1->UseVisualStyleBackColor = false;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->BackColor = System::Drawing::Color::Transparent;
		this->label2->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label2->Location = System::Drawing::Point(76, 207);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(68, 20);
		this->label2->TabIndex = 2;
		this->label2->Text = L"X = [A;B]";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->BackColor = System::Drawing::Color::Transparent;
		this->label3->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label3->Location = System::Drawing::Point(76, 247);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(57, 20);
		this->label3->TabIndex = 3;
		this->label3->Text = L"Шаг h1";
		// 
		// textBox1
		// 
		this->textBox1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox1->Location = System::Drawing::Point(191, 204);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(188, 27);
		this->textBox1->TabIndex = 1;
		// 
		// textBox2
		// 
		this->textBox2->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox2->Location = System::Drawing::Point(191, 244);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(188, 27);
		this->textBox2->TabIndex = 2;
		// 
		// panel1
		// 
		this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->panel1->Controls->Add(this->exit);
		this->panel1->Controls->Add(this->NAME);
		this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
		this->panel1->Location = System::Drawing::Point(0, 0);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(1158, 37);
		this->panel1->TabIndex = 16;
		this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
		this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
		this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
		// 
		// exit
		// 
		this->exit->AutoSize = true;
		this->exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->exit->ForeColor = System::Drawing::Color::Black;
		this->exit->Location = System::Drawing::Point(1131, 2);
		this->exit->Name = L"exit";
		this->exit->Size = System::Drawing::Size(25, 30);
		this->exit->TabIndex = 17;
		this->exit->Text = L"X";
		this->exit->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
		this->exit->MouseEnter += gcnew System::EventHandler(this, &MyForm::label2_MouseEnter);
		this->exit->MouseLeave += gcnew System::EventHandler(this, &MyForm::label2_MouseLeave);
		// 
		// NAME
		// 
		this->NAME->AutoSize = true;
		this->NAME->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->NAME->ForeColor = System::Drawing::Color::DodgerBlue;
		this->NAME->Location = System::Drawing::Point(3, 4);
		this->NAME->Name = L"NAME";
		this->NAME->Size = System::Drawing::Size(231, 25);
		this->NAME->TabIndex = 17;
		this->NAME->Text = L"Лабораторная работа #4";
		// 
		// task
		// 
		this->task->AutoSize = true;
		this->task->ForeColor = System::Drawing::Color::DodgerBlue;
		this->task->Location = System::Drawing::Point(140, 63);
		this->task->Name = L"task";
		this->task->Size = System::Drawing::Size(315, 100);
		this->task->TabIndex = 17;
		this->task->Text = L"Задание:\r\nПостройте таблицу и найдите наименьшее \r\nзначение функции y=f(x) при из"
			L"менении x \r\nна отрезке [a; b]c шагом h.\r\n\r\n";
		// 
		// descr
		// 
		this->descr->AutoSize = true;
		this->descr->ForeColor = System::Drawing::Color::DodgerBlue;
		this->descr->Location = System::Drawing::Point(603, 94);
		this->descr->Name = L"descr";
		this->descr->Size = System::Drawing::Size(0, 20);
		this->descr->TabIndex = 20;
		// 
		// about
		// 
		this->about->AutoSize = true;
		this->about->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->about->ForeColor = System::Drawing::Color::DodgerBlue;
		this->about->Location = System::Drawing::Point(1017, 564);
		this->about->Name = L"about";
		this->about->Size = System::Drawing::Size(128, 25);
		this->about->TabIndex = 18;
		this->about->Text = L"О программе";
		this->about->Click += gcnew System::EventHandler(this, &MyForm::about_Click);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->ForeColor = System::Drawing::Color::Gray;
		this->label1->Location = System::Drawing::Point(76, 172);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(148, 20);
		this->label1->TabIndex = 25;
		this->label1->Text = L"Начальные условия";
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->ForeColor = System::Drawing::Color::Gray;
		this->label4->Location = System::Drawing::Point(465, 172);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(75, 20);
		this->label4->TabIndex = 26;
		this->label4->Text = L"Результат";
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->ForeColor = System::Drawing::Color::Gray;
		this->label6->Location = System::Drawing::Point(187, 368);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(90, 20);
		this->label6->TabIndex = 28;
		this->label6->Text = L"Format X | Z";
		// 
		// listBox1
		// 
		this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->listBox1->BackColor = System::Drawing::SystemColors::Window;
		this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->listBox1->FormattingEnabled = true;
		this->listBox1->ItemHeight = 20;
		this->listBox1->Location = System::Drawing::Point(191, 391);
		this->listBox1->Name = L"listBox1";
		this->listBox1->Size = System::Drawing::Size(544, 160);
		this->listBox1->TabIndex = 31;
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->BackColor = System::Drawing::Color::Transparent;
		this->label5->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label5->Location = System::Drawing::Point(465, 207);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(46, 20);
		this->label5->TabIndex = 32;
		this->label5->Text = L"Y min";
		// 
		// textBox5
		// 
		this->textBox5->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox5->Location = System::Drawing::Point(547, 204);
		this->textBox5->Name = L"textBox5";
		this->textBox5->Size = System::Drawing::Size(188, 27);
		this->textBox5->TabIndex = 10;
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->ForeColor = System::Drawing::Color::Gray;
		this->label7->Location = System::Drawing::Point(802, 172);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(139, 20);
		this->label7->TabIndex = 33;
		this->label7->Text = L"Настройка вывода";
		// 
		// numericUpDown1
		// 
		this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->numericUpDown1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->numericUpDown1->Location = System::Drawing::Point(928, 198);
		this->numericUpDown1->Name = L"numericUpDown1";
		this->numericUpDown1->Size = System::Drawing::Size(51, 29);
		this->numericUpDown1->TabIndex = 34;
		this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->BackColor = System::Drawing::Color::Transparent;
		this->label8->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label8->Location = System::Drawing::Point(802, 192);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(110, 40);
		this->label8->TabIndex = 35;
		this->label8->Text = L"Число знаков \r\nпосле запятой";
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->BackColor = System::Drawing::Color::Transparent;
		this->label9->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label9->Location = System::Drawing::Point(802, 244);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(95, 20);
		this->label9->TabIndex = 36;
		this->label9->Text = L"Разделитель";
		// 
		// comboBox1
		// 
		this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->comboBox1->FormattingEnabled = true;
		this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L";", L" ", L"|" });
		this->comboBox1->Location = System::Drawing::Point(928, 239);
		this->comboBox1->Name = L"comboBox1";
		this->comboBox1->Size = System::Drawing::Size(51, 29);
		this->comboBox1->TabIndex = 37;
		this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
		// 
		// textBox4
		// 
		this->textBox4->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox4->Location = System::Drawing::Point(191, 327);
		this->textBox4->Name = L"textBox4";
		this->textBox4->Size = System::Drawing::Size(188, 27);
		this->textBox4->TabIndex = 4;
		// 
		// textBox3
		// 
		this->textBox3->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox3->Location = System::Drawing::Point(191, 287);
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(188, 27);
		this->textBox3->TabIndex = 3;
		// 
		// label11
		// 
		this->label11->AutoSize = true;
		this->label11->BackColor = System::Drawing::Color::Transparent;
		this->label11->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label11->Location = System::Drawing::Point(76, 330);
		this->label11->Name = L"label11";
		this->label11->Size = System::Drawing::Size(57, 20);
		this->label11->TabIndex = 39;
		this->label11->Text = L"Шаг h2";
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->BackColor = System::Drawing::Color::Transparent;
		this->label10->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label10->Location = System::Drawing::Point(76, 290);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(68, 20);
		this->label10->TabIndex = 38;
		this->label10->Text = L"Y = [C;D]";
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::White;
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
		this->ClientSize = System::Drawing::Size(1157, 598);
		this->Controls->Add(this->textBox4);
		this->Controls->Add(this->textBox3);
		this->Controls->Add(this->label11);
		this->Controls->Add(this->label10);
		this->Controls->Add(this->comboBox1);
		this->Controls->Add(this->label9);
		this->Controls->Add(this->label8);
		this->Controls->Add(this->numericUpDown1);
		this->Controls->Add(this->label7);
		this->Controls->Add(this->textBox5);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->listBox1);
		this->Controls->Add(this->label6);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->about);
		this->Controls->Add(this->descr);
		this->Controls->Add(this->task);
		this->Controls->Add(this->panel1);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->button1);
		this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->MaximizeBox = false;
		this->MinimizeBox = false;
		this->Name = L"MyForm";
		this->ShowIcon = false;
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"Лабораторная работа #2";
		this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
		this->panel1->ResumeLayout(false);
		this->panel1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}

	void SetBackColor(Control^ ctrl)
	{
		ctrl->BackColor = Color::Transparent;
	}

	void set_bg()
	{
		this->BackgroundImage = Image::FromFile("C:\\Users\\B4D1K\\Desktop\\KWORK\\bg.bmp");
		this->SetStyle(System::Windows::Forms::ControlStyles::SupportsTransparentBackColor, true);
		this->button1->UseVisualStyleBackColor = true;
		this->button1->BackColor = Color::White;

		// ------------------------------------

		SetBackColor(task);
		SetBackColor(descr);
		SetBackColor(about);
		SetBackColor(label1);
		SetBackColor(label2);
		SetBackColor(label3);
		SetBackColor(label4);
		SetBackColor(label5);
		SetBackColor(label6);
		SetBackColor(label7);
		SetBackColor(label8);
		SetBackColor(label9);
		SetBackColor(label10);
		SetBackColor(label11);
		comboBox1->SelectedIndex = 0;

		// ------------------------------------

		this->numericUpDown1->Minimum = 0;
		this->numericUpDown1->Maximum = 16;
		this->numericUpDown1->Value = 4;

		// ------------------------------------

		this->panel1->SuspendLayout();
		this->SuspendLayout();
		this->panel1->ResumeLayout(false);
		this->panel1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();
	}

	System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}


	System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	// param1 - pointer to value
	// param2 - min
	// param3 - max
	void clamp(int* ptr, const int min, const int max)
	{
		if (*ptr > max)
			*ptr = max;

		if (*ptr < min)
			*ptr = min;
	}

	// param1 - X
	double F(const double x, const double y)
	{
		return x + y;
	}

	// return code (int)
	int CheckValues()
	{
		// ------------------------------------
		if (textBox1->Text->IndexOf(comboBox1->SelectedItem->ToString()) <= 0)
			return Code::eInput;

		if (textBox3->Text->IndexOf(comboBox1->SelectedItem->ToString()) <= 0)
			return Code::eInput;

		double h = 0.f;

		// ------------------------------------
		if (textBox1->Text->IndexOf(".") > 0 && textBox2->Text->IndexOf(".") > 0)
		{
			textBox1->Text = textBox1->Text->Replace(".", ",");
			textBox2->Text = textBox2->Text->Replace(".", ",");

			if (double::TryParse(textBox1->Text, h) ||
				double::TryParse(textBox2->Text, h))
				return Code::eConvert;
		}

		if (textBox3->Text->IndexOf(".") > 0 && textBox4->Text->IndexOf(".") > 0)
		{
			textBox3->Text = textBox3->Text->Replace(".", ",");
			textBox4->Text = textBox4->Text->Replace(".", ",");

			if (double::TryParse(textBox3->Text, h) ||
				double::TryParse(textBox4->Text, h))
				return Code::eConvert;
		}

		// ------------------------------------
		if (textBox1->Text->IndexOf(".") > 0)
		{
			textBox1->Text = textBox1->Text->Replace(".", ",");

			if (double::TryParse(textBox1->Text, h))
				return Code::eConvert;
		}

		if (textBox3->Text->IndexOf(".") > 0)
		{
			textBox3->Text = textBox3->Text->Replace(".", ",");

			if (double::TryParse(textBox3->Text, h))
				return Code::eConvert;
		}

		// ------------------------------------
		if (textBox2->Text->IndexOf(".") > 0)
		{
			textBox2->Text = textBox2->Text->Replace(".", ",");

			if (double::TryParse(textBox2->Text, h))
				return Code::eConvert;
		}

		if (textBox4->Text->IndexOf(".") > 0)
		{
			textBox4->Text = textBox4->Text->Replace(".", ",");

			if (double::TryParse(textBox4->Text, h))
				return Code::eConvert;
		}

		// ------------------------------------
		if (!double::TryParse(textBox2->Text, h))
			return Code::eStep;

		if (!double::TryParse(textBox4->Text, h))
			return Code::eStep;

		return eOK;
	}

	System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();

		// ------------------------------------
		switch (CheckValues())
		{
		case Code::eInput:
		{
			MessageBox::Show(
				"Ошибка ввода отрезка [X;Y].\nДанные нужно вводить согласно выбранному разделителю!",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}break;

		case Code::eStep:
		{
			MessageBox::Show(
				"Ошибка ввода шага H.\nДопускатся использование только чисел.",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}break;

		case Code::eConvert:
		{
			MessageBox::Show(
				"Число с плавающей точкой отделяется запятой, а не точкой.\nАвтоматическая замена точки на запятую.\nПрограмма продолжает работу.",
				"Предупреждение",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}break;

		default: {}
		}
		// ------------------------------------

		array<String^>^ split = gcnew array<String^> {comboBox1->SelectedItem->ToString()};
		array<String^>^ DATA_X = gcnew array<String^>{};
		array<String^>^ DATA_Y = gcnew array<String^>{};
		DATA_X = textBox1->Text->Split(split, StringSplitOptions::None);
		DATA_Y = textBox3->Text->Split(split, StringSplitOptions::None);

		String^ A = DATA_X[0];
		String^ B = DATA_X[1];

		String^ C = DATA_Y[0];
		String^ D = DATA_Y[1];

		double x1 = 0.f, x2 = 0.f;
		double y1 = 0.f, y2 = 0.f;

		double::TryParse(A, x1);
		double::TryParse(B, x2);

		double::TryParse(C, y1);
		double::TryParse(D, y2);

		double h1 = 2 * x2 + 1;
		double h2 = 2 * y2 + 1;

		CCut cut_1(x1, x2);
		CCut cut_2(y1, y2);

		double::TryParse(textBox2->Text, h1);
		double::TryParse(textBox4->Text, h2);

		String^ fs;
		String^ probel;

		while (cut_1.GetX() <= cut_1.GetY())
		{
			bool cout = true;
			probel = String(' ', 0).ToString();
			while (cut_2.GetX() <= cut_2.GetY())
			{
				if (cout)
				{
					fs = String::Format("x = {0:F" + countSymbols + "}", cut_1.GetX());
					listBox1->Items->Add(fs);
					probel = String('\t', fs->Length / 9).ToString();
				}

				fs = String::Format(probel + "\tY = {0:F" + countSymbols + "} \t Z = {1:F" + countSymbols + "}", cut_2.GetX(), F(cut_1.GetX(), cut_2.GetX()));
				
				cout = false;

				listBox1->Items->Add(fs);

				cut_2.AddX(h2);
			}
			cut_2.SetX(y1);

			cut_1.AddX(h1);
		}
	}

	System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		if (e->Button == Windows::Forms::MouseButtons::Left)
		{
			xOffset = -e->X - SystemInformation::FrameBorderSize.Width;
			yOffset = -e->Y - SystemInformation::FrameBorderSize.Height;
			mouseOffset = System::Drawing::Point(xOffset, yOffset);
			isMouseDown = true;
		}

	}

	System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		if (isMouseDown)
		{
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseOffset.X, mouseOffset.Y);
			Location = mousePos;
		}

	}

	System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		if (e->Button == Windows::Forms::MouseButtons::Left)
		{
			isMouseDown = false;
		}

	}

	System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	System::Void label2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		exit->ForeColor = Color::Black;
	}

	System::Void label2_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		exit->ForeColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(30)),
			static_cast<System::Int32>(static_cast<System::Byte>(144)),
			static_cast<System::Int32>(static_cast<System::Byte>(255))
			);
	}

	System::Void about_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Задание выполнил : \nb4d1k", "Подробнее о работе");
	}

	System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		countSymbols = Convert::ToInt32(numericUpDown1->Value);

		if (countSymbols > 14)
			this->listBox1->Size = System::Drawing::Size(666, 180);
		else if (countSymbols > 12)
			this->listBox1->Size = System::Drawing::Size(620, 180);
		else
			this->listBox1->Size = System::Drawing::Size(544, 180);

	}
	System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
};