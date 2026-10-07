#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	srand(time(NULL));

	int num = 1;
	int col = 0;
	const int mass = 100;
	int basket[mass]{};
	int loh = 0;
	double coch = 0;
	int basketcol[mass]{};
	double sale = 0;
	double sosalo = 0;
	int priz = 0;
	while (true)
	{


		std::cout << "\t\t\t\tМагазин Соки Александра\n";
		std::cout << "Фруктовые: Яблочный(1), Апельсиновый(2), Абрикосовый(3), Грушевый(4).\n";
		std::cout << "	     100р	    152р    	     130р	    167р\n";
		std::cout << "Овощные: Томатный(5), Луковый(6), Огуречный(7).\n";
		std::cout << "	    125р	 105р        130р\n";
		std::cout << "Чаи: Чесночный(8), Петрушевый(9).\n";
		std::cout << "	 97р	       99р\n";
		std::cout << "Все напитки по 1л\n";
		std::cout << "Если корзина будет равна или больше 666 рублей то скидка 13%\n";
		std::cout << "Для завершения покупок напишите \"0\"\n\n";

		while (true)
		{
			std::cout << "Выберите товар: ";
			std::cin >> num;
			if (num == 0)
			{
				break;
			}
			std::cout << "\n";
			std::cout << "Введите кол-во товара: ";
			std::cin >> col;
			if (col == 0)
			{
				break;
			}
			basket[loh] = num;
			basketcol[loh] = col;
			loh++;




		}
		for (int i = 0; i < loh; i++)
		{
			if (basket[i] == 1)
			{
				coch += 100 * basketcol[i];
			}
			else if (basket[i] == 2)
			{
				coch += 152 * basketcol[i];
			}
			else if (basket[i] == 3)
			{
				coch += 130 * basketcol[i];
			}
			else if (basket[i] == 4)
			{
				coch += 167 * basketcol[i];
			}
			else if (basket[i] == 5)
			{
				coch += 125 * basketcol[i];
			}
			else if (basket[i] == 6)
			{
				coch += 105 * basketcol[i];
			}
			else if (basket[i] == 7)
			{
				coch += 130 * basketcol[i];
			}
			else if (basket[i] == 8)
			{
				coch += 97 * basketcol[i];
			}
			else if (basket[i] == 9)
			{
				if (basketcol[i] >= 3)
				{
					sale += 99.0 * basketcol[i] * 0.05;
					coch += 99.0 * basketcol[i] - sale;
				}
				else
				{
					coch += 99 * basketcol[i];
				}
			}
		}
		system("cls");
		std::cout << "Корзина\n";
		std::cout << "Цены без скидок\n";

		for (int i = 0; i < loh; i++)
		{
			if (basket[i] == 1)
			{
				std::cout << basketcol[i] << " Яблочный сок - " << 100 * basketcol[i] << "р\n";
			}
			else if (basket[i] == 2)
			{
				std::cout << basketcol[i] << " Апельсиновый сок - " << 150 * basketcol[i] << "р\n";
			}
			else if (basket[i] == 3)
			{
				std::cout << basketcol[i] << " Абрикосовый сок - " << 130 * basketcol[i] << "р\n";
			}
			else if (basket[i] == 4)
			{
				std::cout << basketcol[i] << " Грушевый сок - " << 167 * basketcol[i] << "р\n";
			}
			else if (basket[i] == 5)
			{
				std::cout << basketcol[i] << " Томатный сок - " << 125 * basketcol[i] << "р\n";
			}
			else if (basket[i] == 6)
			{
				if (basketcol[i] >= 4)
				{
					priz += basketcol[i] / 4;
					std::cout << basketcol[i] << " Луковый сок + " << priz << " В подарок - " << 105 * basketcol[i] << "р\n";
				}
				else
				{
					std::cout << basketcol[i] << " Луковый сок - " << 105 * basketcol[i] << "р\n";
				}
			}
			else if (basket[i] == 7)
			{
				std::cout << basketcol[i] << " Огуречный сок - " << 130 * basketcol[i] << "р\n";
			}
			else if (basket[i] == 8)
			{
				std::cout << basketcol[i] << " Чесночный чай - " << 97 * basketcol[i] << "р\n";
			}
			else if (basket[i] == 9)
			{
				if (basketcol[i] >= 3)
				{
					std::cout << basketcol[i] << " Петрушевый чай с учетом скидки - " <<  99.0 * basketcol[i] - sale << "р\n";
				}
				else
				{
					std::cout << basketcol[i] << " Петрушевый чай - " << 99 * basketcol[i] << "р\n";
				}
			}
		}
		if (coch >= 666)
		{
			sosalo = coch * 0.13;
			coch = coch - sosalo;
		}
		std::cout << "Итого:" << coch << "р";


	break;
	}



	
}