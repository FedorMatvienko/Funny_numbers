#include <iostream>
int main()
{
	int start, end, SValue = 0;//start ��������� ��������, end �������� ��������, SValue ���������� ��������
	int value = 0;//������� �������� ��� ����������
	int sum;//sum of aggravation of numbers
	int quantity = 0;//number of sharpened digits
	setlocale(LC_ALL, "Russian");
	std::cout << "����� ��������� ��������: ";
	std::cin >> start;
	std::cout << "����� �������� ��������: ";
	std::cin >> end;
	for (; start <= end; start++)
	{
		sum = 0;
		SValue = start;
		while (SValue != 0)
		{
			value = SValue % 10;
			SValue /= 10;
			sum += static_cast<int>(pow(value, value));
		}
		if (start == sum)
		{
			quantity++;
		}
	}
	std::cout << "���������� ������� ����� ����� " << quantity;
	return 0;
}