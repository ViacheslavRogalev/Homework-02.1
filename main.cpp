#include <iostream>

enum class Months
{
	January = 1,
	February,
	March,
	April, 
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	int numInt;

	do
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> numInt;

		Months num = static_cast<Months>(numInt);

		switch (num)
		{
		case Months::January:
			std::cout << "Январь" << std::endl;
			break;

		case Months::February:
			std::cout << "Февраль" << std::endl;
			break;

		case Months::March:
			std::cout << "Март" << std::endl;
			break;

		case Months::April:
			std::cout << "Апрель" << std::endl;
			break;

		case Months::May:
			std::cout << "Май" << std::endl;
			break;

		case Months::June:
			std::cout << "Июнь" << std::endl;
			break;

		case Months::July:
			std::cout << "Июль" << std::endl;
			break;

		case Months::August:
			std::cout << "Август" << std::endl;
			break;

		case Months::September:
			std::cout << "Сентябрь" << std::endl;
			break;

		case Months::October:
			std::cout << "Октябрь" << std::endl;
			break;

		case Months::November:
			std::cout << "Ноябрь" << std::endl;
			break;

		case Months::December:
			std::cout << "Декабрь" << std::endl;
			break;
		}

		if (numInt > 12 || numInt < 0)
		{
		  std::cout << "Неправильный номер! " << std::endl;
		}		
	}

     while (numInt > 0);
	    {
		  std::cout << "До свидания";
          return 0;
		} 
}
