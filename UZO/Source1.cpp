#include "Header.h"

using namespace System;
using namespace System::Windows::Forms;

void calculation_par(float i, float p, float u, float power_factor, float i_losse, float l, float i_d) {
	i = p / (u * power_factor);
	i_losse = 0.4 * i + 0.01 * l;
	i_d = 3 * i_losse;
}
/*float know_powerfactor(int choise, float power_factor) {
	cout << "�������� ��� ���������� �� ������ ����:" << endl;
	cout << "1. ����� �����������" << endl;
	cout << "2. �������������� �����" << endl;
	cout << "3. ������������" << endl;
	cout << "4. ������, �����������,������������ �� 4���" << endl;
	cout << "5. �� ��, ��� � � 4, �� ��� >4���" << endl;
	cout << "6. �������������������" << endl;
	cout << "7. ���������������" << endl;
	cout << "8. �����" << endl;
	cout << "9. �������" << endl;
	cin >> choise;
	if (choise == 1)
		power_factor = 1;
	else if (choise == 2)
		power_factor = 0.92;
	else if (choise == 3)
		power_factor = 0.65;
	else if (choise == 4)
		power_factor = 0.75;
	else if (choise == 5)
		power_factor = 0.85;
	else if (choise == 6)
		power_factor = 0.65;
	else if (choise == 7)
		power_factor = 1;
	else if (choise == 8)
		power_factor = 1;
	else if (choise == 9)
		power_factor = 0.8;
	else {
		cout << "����������� ��������" << endl;

	}
}*/

