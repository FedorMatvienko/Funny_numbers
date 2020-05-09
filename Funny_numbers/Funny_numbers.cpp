#include <iostream>
int main()
{
	int start, end, SValue = 0;//start начальное значение, end конечное значение, SValue сохранЄнное значение
	int value = 0;//искомое значение дл€ вычислени€
	int sum;//sum of aggravation of numbers
	int quantity = 0;//number of sharpened digits
	setlocale(LC_ALL, "Russian");
	std::cout << "¬веди начальное значение: ";
	std::cin >> start;
	std::cout << "¬веди конечное значение: ";
	std::cin >> end;
	for (; start <= end; start++)
	{
		sum = 0;
		SValue = start;
		while (SValue != 0)
		{
			value = SValue % 10;
			SValue /= 10;
			sum += pow(value, value);
		}
		if (start == sum)
		{
			quantity++;
		}
	}
	std::cout << " оличество смешных чисел равно " << quantity;
	return 0;
}