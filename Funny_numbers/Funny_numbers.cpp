#include <iostream>
int main()
{
	int start, end, SValue = 0;//start начальное значение, end конечное значение, SValue сохранённое значение
	int value = 0;//искомое значение для вычисления
	int sum;//sum of aggravation of numbers
	int quantity = 0;//количество обострённых цифр
	setlocale(LC_ALL, "Russian");
	std::cout << "Введи начальное значение: ";
	std::cin >> start;
	std::cout << "Введи конечное значение: ";
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
	std::cout << "Количество смешных чисел равно " << quantity;
	return 0;
}