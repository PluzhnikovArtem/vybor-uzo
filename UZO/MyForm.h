#pragma once
#include <string>
#include <iostream>

namespace UZO {

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
			//TODO: добавьте код конструктора                                                                                                                                                               pluzhnikov
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

	protected:



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ обПрограмеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сообщитьООшибкеToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ box_PowerGenerator;
	private: System::Windows::Forms::TextBox^ Box_longer;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ calculate;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;







	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обПрограмеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сообщитьООшибкеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->box_PowerGenerator = (gcnew System::Windows::Forms::TextBox());
			this->Box_longer = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->выходToolStripMenuItem1,
					this->обПрограмеToolStripMenuItem, this->сообщитьООшибкеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(872, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem1
			// 
			this->выходToolStripMenuItem1->Name = L"выходToolStripMenuItem1";
			this->выходToolStripMenuItem1->Size = System::Drawing::Size(67, 26);
			this->выходToolStripMenuItem1->Text = L"Выход";
			this->выходToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem1_Click);
			// 
			// обПрограмеToolStripMenuItem
			// 
			this->обПрограмеToolStripMenuItem->Name = L"обПрограмеToolStripMenuItem";
			this->обПрограмеToolStripMenuItem->Size = System::Drawing::Size(120, 26);
			this->обПрограмеToolStripMenuItem->Text = L"Об програме ";
			this->обПрограмеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обПрограмеToolStripMenuItem_Click);
			// 
			// сообщитьООшибкеToolStripMenuItem
			// 
			this->сообщитьООшибкеToolStripMenuItem->Name = L"сообщитьООшибкеToolStripMenuItem";
			this->сообщитьООшибкеToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->сообщитьООшибкеToolStripMenuItem->Text = L"Сообщить о ошибке";
			this->сообщитьООшибкеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сообщитьООшибкеToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Введите мощность генератора";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(329, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Диннну от энергопотребителя к УЗО";
			// 
			// box_PowerGenerator
			// 
			this->box_PowerGenerator->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->box_PowerGenerator->Location = System::Drawing::Point(669, 67);
			this->box_PowerGenerator->Name = L"box_PowerGenerator";
			this->box_PowerGenerator->Size = System::Drawing::Size(140, 22);
			this->box_PowerGenerator->TabIndex = 7;
			this->box_PowerGenerator->TextChanged += gcnew System::EventHandler(this, &MyForm::box_PowerGenerator_TextChanged);
			// 
			// Box_longer
			// 
			this->Box_longer->Location = System::Drawing::Point(669, 100);
			this->Box_longer->Name = L"Box_longer";
			this->Box_longer->ShortcutsEnabled = false;
			this->Box_longer->Size = System::Drawing::Size(140, 22);
			this->Box_longer->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(815, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 22);
			this->label3->TabIndex = 9;
			this->label3->Text = L"кВт";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(815, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"М";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// calculate
			// 
			this->calculate->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->calculate->Location = System::Drawing::Point(16, 176);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(793, 54);
			this->calculate->TabIndex = 11;
			this->calculate->Text = L"Вывести параметры";
			this->calculate->UseVisualStyleBackColor = true;
			this->calculate->Click += gcnew System::EventHandler(this, &MyForm::calculate_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(526, 22);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Выберите номинальный ток автоматического выключателя";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(815, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 22);
			this->label7->TabIndex = 15;
			this->label7->Text = L"А";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Лампы накаливания", L"Люминисцентные лампы",
					L"Холодильники", L"Насосы, вентиляторы, кондиционеры до 4 кВт", L"Насосы, вентиляторы, кондиционеры свыше 4 кВт", L"Телерадиоаппартура",
					L"Водонагреватели, электроотеплители", L"Сауны ", L"Джакузи", L"Персональные компьютеры"
			});
			this->comboBox1->Location = System::Drawing::Point(596, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(213, 24);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(269, 22);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Выберите энергопотребитель";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"10", L"16", L"25", L"40", L"63", L"80", L"100" });
			this->comboBox2->Location = System::Drawing::Point(669, 131);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(140, 24);
			this->comboBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(669, 309);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 29);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 316);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(205, 22);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Номинальный ток УЗО";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(391, 44);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Чувствительность защиты от токов утечки \r\nдолжна быть больше чем";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(669, 344);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 29);
			this->textBox2->TabIndex = 22;
			this->textBox2->Text = L" ";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 243);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 22);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Расчетный ток";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(669, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 29);
			this->textBox3->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 279);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(204, 22);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Cуммарный ток утечки";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(669, 272);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(140, 29);
			this->textBox4->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(815, 236);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 22);
			this->label12->TabIndex = 27;
			this->label12->Text = L"А";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(815, 272);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 22);
			this->label13->TabIndex = 28;
			this->label13->Text = L"мА";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(815, 309);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 22);
			this->label14->TabIndex = 29;
			this->label14->Text = L"А";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(815, 344);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 22);
			this->label15->TabIndex = 30;
			this->label15->Text = L"мА";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 454);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->calculate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Box_longer);
			this->Controls->Add(this->box_PowerGenerator);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выбор УЗО";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void обПрограмеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выходToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void сообщитьООшибкеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void calculate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void box_PowerGenerator_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);


private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
