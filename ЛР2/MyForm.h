#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "MyUserControl.h"

bool isMouseDown = false;
int xOffset, yOffset;
Point mouseOffset;

using Drawing::Color;

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
	System::Windows::Forms::TextBox^  textBox3;
	System::Windows::Forms::Label^  label6;
	System::Windows::Forms::Label^  label1;
	System::Windows::Forms::Label^  label4;
	System::Windows::Forms::Label^  label7;
	System::Windows::Forms::Label^  label8;
	System::Windows::Forms::ListBox^  listBox1;
	System::Windows::Forms::TextBox^  textBox5;
	System::Windows::Forms::Label^  label5;
	System::Windows::Forms::Label^  label9;
	System::Windows::Forms::TextBox^  textBox4;
	System::ComponentModel::IContainer^  components;
	MyUI::MyUserControl^ c;

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
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->listBox1 = (gcnew System::Windows::Forms::ListBox());
		this->textBox5 = (gcnew System::Windows::Forms::TextBox());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->textBox4 = (gcnew System::Windows::Forms::TextBox());
		this->panel1->SuspendLayout();
		this->SuspendLayout();
		// 
		// button1
		// 
		this->button1->BackColor = System::Drawing::Color::White;
		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->button1->Location = System::Drawing::Point(607, 331);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(188, 38);
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
		this->label2->Location = System::Drawing::Point(12, 204);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(188, 20);
		this->label2->TabIndex = 2;
		this->label2->Text = L"Начальное приближение";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->BackColor = System::Drawing::Color::Transparent;
		this->label3->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label3->Location = System::Drawing::Point(12, 237);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(151, 20);
		this->label3->TabIndex = 3;
		this->label3->Text = L"Требуемая точность";
		// 
		// textBox1
		// 
		this->textBox1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox1->Location = System::Drawing::Point(206, 201);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(188, 27);
		this->textBox1->TabIndex = 8;
		// 
		// textBox2
		// 
		this->textBox2->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox2->Location = System::Drawing::Point(206, 237);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(188, 27);
		this->textBox2->TabIndex = 9;
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
		this->NAME->Text = L"Лабораторная работа #2";
		// 
		// task
		// 
		this->task->AutoSize = true;
		this->task->ForeColor = System::Drawing::Color::DodgerBlue;
		this->task->Location = System::Drawing::Point(143, 69);
		this->task->Name = L"task";
		this->task->Size = System::Drawing::Size(362, 100);
		this->task->TabIndex = 17;
		this->task->Text = L"Задание:\r\nВычислить с заданной точностью приближенное \r\nзначение корня заданного "
			L"уравнения с помощью\r\nитерационной формулы\r\n\r\n";
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
		// textBox3
		// 
		this->textBox3->Enabled = false;
		this->textBox3->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox3->Location = System::Drawing::Point(938, 201);
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(170, 27);
		this->textBox3->TabIndex = 100;
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->BackColor = System::Drawing::Color::Transparent;
		this->label6->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label6->Location = System::Drawing::Point(789, 204);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(143, 20);
		this->label6->TabIndex = 21;
		this->label6->Text = L"Значение X конечн";
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->ForeColor = System::Drawing::Color::Gray;
		this->label1->Location = System::Drawing::Point(12, 172);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(148, 20);
		this->label1->TabIndex = 25;
		this->label1->Text = L"Начальные условия";
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->ForeColor = System::Drawing::Color::Gray;
		this->label4->Location = System::Drawing::Point(401, 172);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(75, 20);
		this->label4->TabIndex = 26;
		this->label4->Text = L"Результат";
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->ForeColor = System::Drawing::Color::Gray;
		this->label7->Location = System::Drawing::Point(123, 288);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(85, 20);
		this->label7->TabIndex = 28;
		this->label7->Text = L"Итерация i";
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->ForeColor = System::Drawing::Color::Gray;
		this->label8->Location = System::Drawing::Point(374, 288);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(148, 20);
		this->label8->TabIndex = 29;
		this->label8->Text = L"Текущее значение y";
		// 
		// listBox1
		// 
		this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->listBox1->BackColor = System::Drawing::SystemColors::Window;
		this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->listBox1->FormattingEnabled = true;
		this->listBox1->ItemHeight = 20;
		this->listBox1->Location = System::Drawing::Point(127, 331);
		this->listBox1->Name = L"listBox1";
		this->listBox1->Size = System::Drawing::Size(395, 240);
		this->listBox1->TabIndex = 31;
		// 
		// textBox5
		// 
		this->textBox5->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox5->Location = System::Drawing::Point(613, 201);
		this->textBox5->Name = L"textBox5";
		this->textBox5->Size = System::Drawing::Size(170, 27);
		this->textBox5->TabIndex = 10;
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->BackColor = System::Drawing::Color::Transparent;
		this->label5->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label5->Location = System::Drawing::Point(400, 204);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(207, 20);
		this->label5->TabIndex = 32;
		this->label5->Text = L"Точность вычислений [4-16]";
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->BackColor = System::Drawing::Color::Transparent;
		this->label9->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label9->Location = System::Drawing::Point(401, 240);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(161, 20);
		this->label9->TabIndex = 34;
		this->label9->Text = L"Количество итераций";
		// 
		// textBox4
		// 
		this->textBox4->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox4->Location = System::Drawing::Point(614, 237);
		this->textBox4->Name = L"textBox4";
		this->textBox4->Size = System::Drawing::Size(170, 27);
		this->textBox4->TabIndex = 11;
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::White;
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
		this->ClientSize = System::Drawing::Size(1157, 598);
		this->Controls->Add(this->label9);
		this->Controls->Add(this->textBox4);
		this->Controls->Add(this->textBox5);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->listBox1);
		this->Controls->Add(this->label8);
		this->Controls->Add(this->label7);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->textBox3);
		this->Controls->Add(this->label6);
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
		this->ResumeLayout(false);
		this->PerformLayout();

	}

	void set_bg()
	{
		this->BackgroundImage = Image::FromFile("C:\\Users\\B4D1K\\Desktop\\KWORK\\bg.bmp");
		this->SetStyle(System::Windows::Forms::ControlStyles::SupportsTransparentBackColor, true);
		this->button1->UseVisualStyleBackColor = true;
		this->button1->BackColor = Color::White;
		this->task->BackColor = Color::Transparent;
		this->descr->BackColor = Color::Transparent;
		this->about->BackColor = Color::Transparent;
		this->label1->BackColor = Color::Transparent;
		this->label2->BackColor = Color::Transparent;
		this->label3->BackColor = Color::Transparent;
		this->label4->BackColor = Color::Transparent;
		this->label5->BackColor = Color::Transparent;
		this->label6->BackColor = Color::Transparent;
		this->label7->BackColor = Color::Transparent;
		this->label8->BackColor = Color::Transparent;

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

	int check = 0;

	double ToDouble(Forms::TextBox^ obj)
	{
		double res = 0.f;

		if (!System::Double::TryParse(obj->Text, res))
		{
			obj->Text = "0"; res = 0.f;
			MessageBox::Show("Неверные значения. Введите число с плавающей точкой!", "Ошибка в поле [" + obj->Name + "]");
		}

		return res;
	}

	int ToInt(Forms::TextBox^ obj)
	{
		int res = 1;

		if (!System::Int32::TryParse(obj->Text, res))
		{
			obj->Text = "1";
			MessageBox::Show("Неверные значения. Введите число с плавающей точкой!", "Ошибка в поле [" + obj->Name + "]");
		}

		return res;
	}

	void clamp(int* ptr, const int min, const int max)
	{
		if (*ptr > max) 
			*ptr = max;

		if (*ptr < min) 
			*ptr = min;
	}

	// param1 - число
	// param2 - степень
	double F(double x, double n)
	{
		return (pow(-1, n + 1) * (pow(x, (2 * n + 1)) / (4 * pow(n, 2) - 1)));
	}

	double Fx(double x, double n)
	{
		return (pow(-1, n + 1) * pow(x, 2 * n + 1) * (2 * n + 1)) / (x*(4 * pow(n,2) - 1));
	}

	System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();

		int i = 1;

		double x0 = ToDouble(textBox1);
		double EPS = ToDouble(textBox2);
		int iter = ToInt(textBox4);
		int accuracy = ToInt(textBox5);
		double y = x0;

		clamp(&accuracy, 4, 16);
		clamp(&iter, 1, 10000);

		do
		{
			y = F(x0, i);
			auto fs = String::Format("{0,2:D2}\t\t\t{1,15:F" + accuracy.ToString() + "}\t", i, y);
			listBox1->Items->Add(fs);
			i++;
		} while (abs(y) >= EPS && i < iter);

		textBox3->Text = y.ToString();
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
};