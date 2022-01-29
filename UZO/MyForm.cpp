#include "MyForm.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace System;
using namespace System::Windows::Forms;

double u=220, l, i, i_lose, i_d, power_factor, rated_current;
char output_resault[50];

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	UZO::MyForm form;
	Application::Run(% form);
}

System::Void UZO::MyForm::обПрограмеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Здесь находятся данные о программе", "О програме");

	return System::Void();
}

System::Void UZO::MyForm::выходToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void UZO::MyForm::сообщитьООшибкеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Если вы нашли ошибку в программе, сообщите об этом на эту почту: artempluzhnikow@gmail.com","Сообщить о ошибке");

	return System::Void();
}

System::Void UZO::MyForm::calculate_Click(System::Object^ sender, System::EventArgs^ e)
{
	float p = float::Parse(box_PowerGenerator->Text);
	float l = float::Parse(Box_longer->Text);
	//float p = std::stod(box_PowerGenerator);

	//p = Convert::ToDouble(box_PowerGenerator);
	//l = Convert::ToDouble(Box_longer);
	//i = Convert::ToInt32(comboBox2);
	if (comboBox1->Text == "Лампы накаливания") {
		power_factor = 1;
	}
	else if (comboBox1->SelectedIndex == 1) {
		power_factor = 0.92;
	}
	else if (comboBox1->SelectedIndex == 2) {
		power_factor = 0.65;
	}
	else if (comboBox1->SelectedIndex == 3) {
		power_factor = 0.75;
	}
	else if (comboBox1->SelectedIndex == 4) {
		power_factor = 0.85;
	}
	else if (comboBox1->SelectedIndex == 5) {
		power_factor = 0.65;
	}
	else if (comboBox1->SelectedIndex == 6) {
		power_factor = 1;
	}
	else if (comboBox1->SelectedIndex == 7) {
		power_factor = 1;
	}
	else if (comboBox1->SelectedIndex == 8) {
		power_factor = 0.8;
	}
	else if (comboBox1->SelectedIndex == 9) {
		power_factor = 0.65;
	}
	

	if (comboBox2->Text == "10") {
		rated_current = 16;
	}
	else if (comboBox2->Text == "16") {
		rated_current = 25;
	}
	else if (comboBox2->Text == "25") {
		rated_current = 40;
	}
	else if (comboBox2->Text == "40") {
		rated_current = 63;
	}
	else if (comboBox2->Text == "63") {
		rated_current = 80;
	}
	else if (comboBox2->Text == "80") {
		rated_current = 100;
	}
	else if (comboBox2->Text == "100") {
		rated_current = 125;
	}
	else
		MessageBox::Show("Ошибка в поле выбора номинального тока автоматического выключателя", "Неправельный формат");
	textBox1->Text = System::Convert::ToString(rated_current);

	i = p / (u * power_factor);
	float i_10=round(i * 100) / 100;
	textBox3->Text = System::Convert::ToString(i_10);
	i_lose = 0.4 * i + 0.01 * l;
	float i_lose_10 = round(i_lose * 100) / 100;
	textBox4->Text = System::Convert::ToString(i_lose_10);
	i_d = 3 * i_lose;
	float i_d_10 = round(i_d * 100) / 100;
	textBox2->Text = System::Convert::ToString(i_d_10);
	
	return System::Void();
}

System::Void UZO::MyForm::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void UZO::MyForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void UZO::MyForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	return System::Void();

}

System::Void UZO::MyForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void UZO::MyForm::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
