#include <iostream>

#define MODE 1
#if defined MODE

void add() {
	int num1 = 0, num2 = 0;
	std::cout << "������� ����� 1: ";
	std::cin >> num1;
	std::cout << "������� ����� 2: ";
	std::cin >> num2;
	std::cout << "��������� ��������: " << num1 + num2 << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
#if MODE == 1
	std::cout << "������� � ������ ������" << std::endl;
	add();
#elif MODE == 0
	std::cout << "������� � ������ ����������" << std::endl;
#else
	std::cout << "����������� �����. ���������� ������" << std::endl;
#endif
}

#elif
#error Undefined MODE
#endif