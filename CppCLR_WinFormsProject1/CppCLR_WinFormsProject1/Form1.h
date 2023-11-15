#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 159);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 26);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 211);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(310, 26);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Первое число";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Второе число";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Результат:";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(310, 50);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 323);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(310, 28);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Сбросить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Сложение";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Сложение", L"Вычитание", L"Умножение", L"Деление" });
			this->comboBox1->Location = System::Drawing::Point(201, 13);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->Text = L"Сложение";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 412);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	} 
		   bool Protect() {
			   if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0)) { return false; }
			   for (int i = 0; i < textBox1->Text->Length; i++) {
				   if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == ',')) {}
				   else { return false; }
			   }
			   for (int i = 0; i < textBox2->Text->Length; i++) {
				   if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',')) {}
				   else { return false; }
			   }
			   return true;

		   }



	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Protect()) {

			double Num1, Num2, Result;

			Num1 = System::Convert::ToDouble(textBox1->Text);
			Num2 = System::Convert::ToDouble(textBox2->Text);

			if (comboBox1->SelectedItem == "Сложение") {
				Result = Num1 + Num2;
				label4->Text = L"Сложение";
			}
			else
				if (comboBox1->SelectedItem == "Вычитание") {
					Result = Num1 - Num2;
					label4->Text = L"Вычитание";
				}
				else

					if (comboBox1->SelectedItem == "Умножение") {
						Result = Num1 * Num2;
						label4->Text = L"Умножение";
					}
					else

						if (comboBox1->SelectedItem == "Деление") {
							if (Num2 != 0) {
								Result = Num1 / Num2;
								label4->Text = L"Деление";
							}
							else { MessageBox::Show("Попытка деления на 0", "Ошибка"); }

						}
			textBox3->Text = System::Convert::ToString(Result);
		}
	
		   else {
			   MessageBox::Show("Ошибка ввода", "Ошибка");
			   }

}
};
}
