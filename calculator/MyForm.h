#pragma once



namespace calculator {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;

	protected:













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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(63, 65);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(114, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 94);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(61, 94);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(114, 94);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 123);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(61, 123);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(47, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(114, 123);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(45, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(12, 152);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(96, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// plus
			// 
			this->plus->Location = System::Drawing::Point(165, 36);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(51, 23);
			this->plus->TabIndex = 11;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(165, 152);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(51, 23);
			this->button11->TabIndex = 12;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(114, 152);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(45, 23);
			this->button12->TabIndex = 13;
			this->button12->Text = L",";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(164, 65);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(51, 23);
			this->button13->TabIndex = 14;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(164, 94);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(51, 23);
			this->button14->TabIndex = 15;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(165, 123);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(51, 23);
			this->button15->TabIndex = 16;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(12, 7);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 17;
			this->button16->Text = L"Clear";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(227, 183);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
		
	double num1 = 0, num2 = 0, result;
	int deistvie = 0;
	bool dot = false;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"1";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"1";
			deistvie = 0;
		}
		else
		{
			textBox1->Text += L"1";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"2";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"2";
			deistvie = 0;
		}
		else
		{
			textBox1->Text += L"2";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"3";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"3";
			deistvie = 0;
		}
		else
		{
			textBox1->Text += L"3";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"4";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"4";
			deistvie = 0;
		}
		else
		{
			textBox1->Text += L"4";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"5";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"5";
			deistvie = 0;
		}
		else
		{
			textBox1->Text += L"5";
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"6";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"6";
			deistvie = 0;
		}
		else
		{
			textBox1->Text += L"6";
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"7";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"7";
			deistvie = 0;
		}
		else
		{
			textBox1->Text += L"7";
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"8";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"8";
			
		}
		else
		{
			textBox1->Text += L"8";
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"9";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"9";
			
		}
		else
		{
			textBox1->Text += L"9";
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"0")
		{
			textBox1->Text = L"0";
		}
		else if (textBox1->Text == L"Делить на 0 нельзя" && num2 == 0)
		{
			textBox1->Text = L"0";
			
		}
		else
		{
			textBox1->Text += L"0";
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text != "" && textBox1->Text != L"Делить на 0 нельзя")
		{
			num1 = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = "";
			deistvie = 1;
		}
		
	}
	private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (num1 != 0)
		{
			num2 = System::Convert::ToDouble(textBox1->Text);
			switch (deistvie)
			{
			case 1:
			{
				result = num1 + num2;
				textBox1->Text = System::Convert::ToString(result);
				break;
			}
			case 2:
			{
				result = num1 - num2;
				textBox1->Text = System::Convert::ToString(result);
				break;
			}
			case 3:
			{
				result = num1 * num2;
				textBox1->Text = System::Convert::ToString(result);
				break;
			}
			case 4:
			{
				if (num2 == 0)
				{
					textBox1->Text = L"Делить на 0 нельзя";
					result = 0;
					
				}
				else
				{
					result = num1 / num2;
					textBox1->Text = System::Convert::ToString(result);
				}
				break;
			}
			default:
				break;
			}
			deistvie = 0;
			num1 = result;
			num2 = 0;
			
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (textBox1->Text != L"" && textBox1->Text != L"." && dot == false)
		{
			textBox1->Text += L",";
			dot = true;
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox1->Text != L"Делить на 0 нельзя")
		{
			num1 = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = "";
			deistvie = 2;
		}
		
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox1->Text != L"Делить на 0 нельзя")
		{
			num1 = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = "";
			deistvie = 3;
		}
		
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (textBox1->Text != "" && textBox1->Text != L"Делить на 0 нельзя")
		{
			num1 = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = "";
			deistvie = 4;
		}
		
		
	}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	num1 = 0;
	textBox1->Text = "";
	deistvie = 0;
}
};
}
