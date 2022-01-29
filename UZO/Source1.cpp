#include "Header.h"

using namespace System;
using namespace System::Windows::Forms;

void calculation_par(float i, float p, float u, float power_factor, float i_losse, float l, float i_d) {
	i = p / (u * power_factor);
	i_losse = 0.4 * i + 0.01 * l;
	i_d = 3 * i_losse;
}
/*float know_powerfactor(int choise, float power_factor) {
	cout << "Выбирите своё устройство из списка ниже:" << endl;
	cout << "1. Лампа накалевания" << endl;
	cout << "2. Люминисцентные лампы" << endl;
	cout << "3. Холодильники" << endl;
	cout << "4. Насосы, вентиляторы,кондиционеры до 4кВт" << endl;
	cout << "5. То же, что и в 4, но для >4кВт" << endl;
	cout << "6. Телерадиоаппаратура" << endl;
	cout << "7. Водонагреватели" << endl;
	cout << "8. Сауны" << endl;
	cout << "9. Джакузи" << endl;
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
		cout << "Некоректное значение" << endl;

	}
}*/

