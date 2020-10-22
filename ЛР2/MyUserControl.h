#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Windows::Forms::Design;

namespace MyUI
{
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
		{
			InitializeComponent();
		}

		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::TextBox^  textBox1;
		System::Windows::Forms::Label^  inputText;
		System::Windows::Forms::Label^  inputText2;

		System::ComponentModel::Container ^components;

		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->inputText = (gcnew System::Windows::Forms::Label());
			this->inputText2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->textBox1->Location = System::Drawing::Point(3, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(325, 35);
			this->textBox1->TabIndex = 0;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyUserControl::textBox1_MouseClick);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyUserControl::textBox1_Leave);
			// 
			// inputText
			// 
			this->inputText->AutoSize = true;
			this->inputText->BackColor = System::Drawing::Color::Transparent;
			this->inputText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputText->ForeColor = System::Drawing::Color::DodgerBlue;
			this->inputText->Location = System::Drawing::Point(8, 22);
			this->inputText->Name = L"inputText";
			this->inputText->Size = System::Drawing::Size(72, 21);
			this->inputText->TabIndex = 1;
			this->inputText->Text = L"InputText";
			this->inputText->Visible = false;
			// 
			// inputText2
			// 
			this->inputText2->AutoSize = true;
			this->inputText2->BackColor = System::Drawing::Color::Transparent;
			this->inputText2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputText2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->inputText2->Location = System::Drawing::Point(7, 38);
			this->inputText2->Name = L"inputText2";
			this->inputText2->Size = System::Drawing::Size(99, 30);
			this->inputText2->TabIndex = 2;
			this->inputText2->Text = L"InputText";
			this->inputText2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyUserControl::inputText2_MouseClick);
			// 
			// MyUserControl
			// 
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->inputText2);
			this->Controls->Add(this->inputText);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(331, 77);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		System::Void textBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
			this->inputText->Visible = true;
			this->inputText2->Visible = false;
		}
		System::Void textBox1_Leave(System::Object^  sender, System::EventArgs^  e) {
			this->inputText->Visible = false;
			this->inputText2->Visible = true;
		}

		void SetText(System::String^ str)
		{
			this->inputText->Text = str;
			this->inputText2->Text = str;
		}

		System::Void inputText2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			this->inputText->Visible = true;
			this->inputText2->Visible = false;
			this->textBox1->Focus();
		}

		/*virtual void OnPaint(PaintEventArgs^ e) override
		{
			this->inputText->BackColor = Color::Transparent;
			this->inputText2->BackColor = Color::White;

			UserControl::OnPaint(e);
			this->BackColor = Color::Transparent;
		}*/
	};
}