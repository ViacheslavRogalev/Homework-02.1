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
		std::cout << "������� ����� ������: ";
		std::cin >> numInt;

		Months num = static_cast<Months>(numInt);

		switch (num)
		{
		case Months::January:
			std::cout << "������" << std::endl;
			break;

		case Months::February:
			std::cout << "�������" << std::endl;
			break;

		case Months::March:
			std::cout << "����" << std::endl;
			break;

		case Months::April:
			std::cout << "������" << std::endl;
			break;

		case Months::May:
			std::cout << "���" << std::endl;
			break;

		case Months::June:
			std::cout << "����" << std::endl;
			break;

		case Months::July:
			std::cout << "����" << std::endl;
			break;

		case Months::August:
			std::cout << "������" << std::endl;
			break;

		case Months::September:
			std::cout << "��������" << std::endl;
			break;

		case Months::October:
			std::cout << "�������" << std::endl;
			break;

		case Months::November:
			std::cout << "������" << std::endl;
			break;

		case Months::December:
			std::cout << "�������" << std::endl;
			break;
		}

		if (numInt > 12 || numInt < 0)
		{
		  std::cout << "������������ �����! " << std::endl;
		}		
	}

     while (numInt > 0);
	    {
		  std::cout << "�� ��������";
          return 0;
		} 
}
