#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "Math.hpp"
#include "CPoint.hpp"

bool isMouseDown = false;
int xOffset, yOffset;
Point mouseOffset;

public ref class MyForm : public System::Windows::Forms::Form
{
public:
	MyForm(void)
	{
		InitializeComponent();
		set_bg();
	}

protected:
	~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}

private: 
	System::Windows::Forms::Button^  button1;

	System::Windows::Forms::Label^  x1;
	System::Windows::Forms::Label^  x2;
	System::Windows::Forms::Label^  x3;
	System::Windows::Forms::Label^  y3;
	System::Windows::Forms::Label^  y2;
	System::Windows::Forms::Label^  y1;

	System::Windows::Forms::TextBox^  textBox1;
	System::Windows::Forms::TextBox^  textBox2;
	System::Windows::Forms::TextBox^  textBox3;
	System::Windows::Forms::TextBox^  textBox4;
	System::Windows::Forms::TextBox^  textBox5;
	System::Windows::Forms::TextBox^  textBox6;
	System::Windows::Forms::TextBox^  textBox7;
	System::Windows::Forms::TextBox^  textBox8;

	System::Windows::Forms::Panel^  panel1;
	System::Windows::Forms::Label^  label1;
	System::Windows::Forms::Label^  label2;
	System::Windows::Forms::Label^  task;

	System::Windows::Forms::Label^  label4;
	System::Windows::Forms::Label^  label5;
	System::Windows::Forms::Label^  descr;
	System::Windows::Forms::Label^  about;
	System::ComponentModel::IContainer^  components;

public:
	void InitializeComponent(void)
	{
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->x1 = (gcnew System::Windows::Forms::Label());
		this->x2 = (gcnew System::Windows::Forms::Label());
		this->x3 = (gcnew System::Windows::Forms::Label());
		this->y3 = (gcnew System::Windows::Forms::Label());
		this->y2 = (gcnew System::Windows::Forms::Label());
		this->y1 = (gcnew System::Windows::Forms::Label());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->textBox4 = (gcnew System::Windows::Forms::TextBox());
		this->textBox5 = (gcnew System::Windows::Forms::TextBox());
		this->textBox6 = (gcnew System::Windows::Forms::TextBox());
		this->textBox7 = (gcnew System::Windows::Forms::TextBox());
		this->textBox8 = (gcnew System::Windows::Forms::TextBox());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->task = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->descr = (gcnew System::Windows::Forms::Label());
		this->about = (gcnew System::Windows::Forms::Label());
		this->panel1->SuspendLayout();
		this->SuspendLayout();
		// 
		// button1
		// 
		this->button1->BackColor = System::Drawing::Color::White;
		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->button1->Location = System::Drawing::Point(453, 361);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(150, 38);
		this->button1->TabIndex = 0;
		this->button1->Text = L"Вычислить";
		this->button1->UseVisualStyleBackColor = false;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		// 
		// x1
		// 
		this->x1->AutoSize = true;
		this->x1->BackColor = System::Drawing::Color::Transparent;
		this->x1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->x1->Location = System::Drawing::Point(134, 169);
		this->x1->Name = L"x1";
		this->x1->Size = System::Drawing::Size(24, 20);
		this->x1->TabIndex = 2;
		this->x1->Text = L"x1";
		// 
		// x2
		// 
		this->x2->AutoSize = true;
		this->x2->BackColor = System::Drawing::Color::Transparent;
		this->x2->ForeColor = System::Drawing::Color::DodgerBlue;
		this->x2->Location = System::Drawing::Point(274, 169);
		this->x2->Name = L"x2";
		this->x2->Size = System::Drawing::Size(24, 20);
		this->x2->TabIndex = 3;
		this->x2->Text = L"x2";
		// 
		// x3
		// 
		this->x3->AutoSize = true;
		this->x3->BackColor = System::Drawing::Color::Transparent;
		this->x3->ForeColor = System::Drawing::Color::DodgerBlue;
		this->x3->Location = System::Drawing::Point(415, 169);
		this->x3->Name = L"x3";
		this->x3->Size = System::Drawing::Size(24, 20);
		this->x3->TabIndex = 4;
		this->x3->Text = L"x3";
		// 
		// y3
		// 
		this->y3->AutoSize = true;
		this->y3->BackColor = System::Drawing::Color::Transparent;
		this->y3->ForeColor = System::Drawing::Color::DodgerBlue;
		this->y3->Location = System::Drawing::Point(415, 241);
		this->y3->Name = L"y3";
		this->y3->Size = System::Drawing::Size(24, 20);
		this->y3->TabIndex = 7;
		this->y3->Text = L"y3";
		// 
		// y2
		// 
		this->y2->AutoSize = true;
		this->y2->BackColor = System::Drawing::Color::Transparent;
		this->y2->ForeColor = System::Drawing::Color::DodgerBlue;
		this->y2->Location = System::Drawing::Point(274, 241);
		this->y2->Name = L"y2";
		this->y2->Size = System::Drawing::Size(24, 20);
		this->y2->TabIndex = 6;
		this->y2->Text = L"y2";
		// 
		// y1
		// 
		this->y1->AutoSize = true;
		this->y1->BackColor = System::Drawing::Color::Transparent;
		this->y1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->y1->Location = System::Drawing::Point(134, 241);
		this->y1->Name = L"y1";
		this->y1->Size = System::Drawing::Size(24, 20);
		this->y1->TabIndex = 5;
		this->y1->Text = L"y1";
		// 
		// textBox1
		// 
		this->textBox1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox1->Location = System::Drawing::Point(134, 192);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(109, 27);
		this->textBox1->TabIndex = 8;
		// 
		// textBox2
		// 
		this->textBox2->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox2->Location = System::Drawing::Point(274, 192);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(109, 27);
		this->textBox2->TabIndex = 9;
		// 
		// textBox3
		// 
		this->textBox3->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox3->Location = System::Drawing::Point(415, 192);
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(109, 27);
		this->textBox3->TabIndex = 10;
		// 
		// textBox4
		// 
		this->textBox4->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox4->Location = System::Drawing::Point(415, 264);
		this->textBox4->Name = L"textBox4";
		this->textBox4->Size = System::Drawing::Size(109, 27);
		this->textBox4->TabIndex = 13;
		// 
		// textBox5
		// 
		this->textBox5->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox5->Location = System::Drawing::Point(274, 264);
		this->textBox5->Name = L"textBox5";
		this->textBox5->Size = System::Drawing::Size(109, 27);
		this->textBox5->TabIndex = 12;
		// 
		// textBox6
		// 
		this->textBox6->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox6->Location = System::Drawing::Point(134, 264);
		this->textBox6->Name = L"textBox6";
		this->textBox6->Size = System::Drawing::Size(109, 27);
		this->textBox6->TabIndex = 11;
		// 
		// textBox7
		// 
		this->textBox7->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox7->Location = System::Drawing::Point(626, 192);
		this->textBox7->Name = L"textBox7";
		this->textBox7->Size = System::Drawing::Size(190, 27);
		this->textBox7->TabIndex = 14;
		// 
		// textBox8
		// 
		this->textBox8->ForeColor = System::Drawing::Color::DodgerBlue;
		this->textBox8->Location = System::Drawing::Point(626, 264);
		this->textBox8->Name = L"textBox8";
		this->textBox8->Size = System::Drawing::Size(190, 27);
		this->textBox8->TabIndex = 15;
		// 
		// panel1
		// 
		this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->panel1->Controls->Add(this->label2);
		this->panel1->Controls->Add(this->label1);
		this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
		this->panel1->Location = System::Drawing::Point(0, 0);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(1158, 37);
		this->panel1->TabIndex = 16;
		this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
		this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
		this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label2->ForeColor = System::Drawing::Color::Black;
		this->label2->Location = System::Drawing::Point(1131, 2);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(25, 30);
		this->label2->TabIndex = 17;
		this->label2->Text = L"X";
		this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
		this->label2->MouseEnter += gcnew System::EventHandler(this, &MyForm::label2_MouseEnter);
		this->label2->MouseLeave += gcnew System::EventHandler(this, &MyForm::label2_MouseLeave);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label1->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label1->Location = System::Drawing::Point(3, 4);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(231, 25);
		this->label1->TabIndex = 17;
		this->label1->Text = L"Лабораторная работа #1";
		// 
		// task
		// 
		this->task->AutoSize = true;
		this->task->ForeColor = System::Drawing::Color::DodgerBlue;
		this->task->Location = System::Drawing::Point(130, 94);
		this->task->Name = L"task";
		this->task->Size = System::Drawing::Size(400, 60);
		this->task->TabIndex = 17;
		this->task->Text = L"Задание:\r\nСоздать проект, вычисляющий P и S по трём заданным \r\nкоординатам треуго"
			L"льника.\r\n";
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->BackColor = System::Drawing::Color::Transparent;
		this->label4->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label4->Location = System::Drawing::Point(589, 195);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(31, 20);
		this->label4->TabIndex = 18;
		this->label4->Text = L"P =";
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->BackColor = System::Drawing::Color::Transparent;
		this->label5->ForeColor = System::Drawing::Color::DodgerBlue;
		this->label5->Location = System::Drawing::Point(589, 267);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(31, 20);
		this->label5->TabIndex = 19;
		this->label5->Text = L"S =";
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
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::White;
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
		this->ClientSize = System::Drawing::Size(1157, 598);
		this->Controls->Add(this->about);
		this->Controls->Add(this->descr);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->task);
		this->Controls->Add(this->panel1);
		this->Controls->Add(this->textBox8);
		this->Controls->Add(this->textBox7);
		this->Controls->Add(this->textBox4);
		this->Controls->Add(this->textBox5);
		this->Controls->Add(this->textBox6);
		this->Controls->Add(this->textBox3);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->y3);
		this->Controls->Add(this->y2);
		this->Controls->Add(this->y1);
		this->Controls->Add(this->x3);
		this->Controls->Add(this->x2);
		this->Controls->Add(this->x1);
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
		this->Text = L"Лабораторная работа #1";
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
		this->button1->BackColor = Drawing::Color::White;
		this->task->BackColor = Drawing::Color::Transparent;
		this->descr->BackColor = Drawing::Color::Transparent;
		this->about->BackColor = Drawing::Color::Transparent;
	}

	System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}


	System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	int check = 0;

	void check_TB(TextBox^ tb)
	{
		if (tb->Text->Length == 0)
		{
			tb->Text = "0";
			check++;
		}

		return; 
	}

	System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		check = 0;

		// Проверка всех полей на заполненность
		check_TB(textBox1);
		check_TB(textBox2);
		check_TB(textBox3);
		check_TB(textBox4);
		check_TB(textBox5);
		check_TB(textBox6);

		if (check > 0)
			MessageBox::Show("Обнаружена ошибка в вводимых данных. \nОшибочные поля будут заполнены нулями");

		// получение всех координат
		double X1, X2, X3, Y1, Y2, Y3;
		double number = 0.f;

		int error = 0;

		if (System::Double::TryParse(textBox1->Text, number)) { X1 = number; number = 0.f; error++; }
		if (System::Double::TryParse(textBox2->Text, number)) { X2 = number; number = 0.f; error++; }
		if (System::Double::TryParse(textBox3->Text, number)) { X3 = number; number = 0.f; error++; }

		if (System::Double::TryParse(textBox4->Text, number)) { Y1 = number; number = 0.f; error++; }
		if (System::Double::TryParse(textBox5->Text, number)) { Y2 = number; number = 0.f; error++; }
		if (System::Double::TryParse(textBox6->Text, number)) { Y3 = number; number = 0.f; error++; }

		if (error != 6)
			MessageBox::Show("Обнаружена ошибка в вводимых данных. \nОшибочные поля будут заполнены нулями");
				
		CPoint A(X1, Y1), B(X2, Y2), C(X3, Y3);
		
		double lA = LenghtSegment(A, B);
		double lB = LenghtSegment(B, C);
		double lC = LenghtSegment(C, A);

		double P = TriangleP(lA, lB, lC, false);
		textBox7->Text = P.ToString();

		double S = Geron(lA, lB, lC);
		textBox8->Text = S.ToString();
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
		label2->ForeColor = Color::Black;
	}

	System::Void label2_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		label2->ForeColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(30)),
			static_cast<System::Int32>(static_cast<System::Byte>(144)),
			static_cast<System::Int32>(static_cast<System::Byte>(255))
		);
	}

	System::Void about_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Задание выполнил : \nb4d1k", "Подробнее о работе");
	}
};