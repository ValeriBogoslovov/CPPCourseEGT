/*�������� �������� �� �++, �����:
�������� �������� �� ���������� ���� �����
��������� ���� ������� � ����� ��� �������
��� ������� � �����, �� ������ �� ������� �even�, ��� � ������� � �odd*/

#include <iostream>
bool EvenOrOdd(int num);

int main() {

	int inputNum;
	std::cout << "Enter whole number to check if it's even or odd. Press 0 to exit the program.\n";
	while (std::cin >> inputNum && inputNum != 0)
	{
		EvenOrOdd(inputNum) ? std::cout << "even\n" : std::cout << "odd\n";
	}
	return 0;
}

bool EvenOrOdd(int num)
{
	return (num % 2 == 0) ? true : false;
}
