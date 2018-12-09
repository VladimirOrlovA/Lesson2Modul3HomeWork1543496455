#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>
#include<time.h>

void Task1()
{
	int h, m, s, sec = 0 + rand() % 86400;

	h = sec / 3600;
	m = (sec % 3600) / 60;
	s = (sec % 3600) % 60;

	printf("\n\n Прошло с начало суток %d секунд\n", sec);
	printf("\n Текущее время %d:%d:%d \n\n\n", h, m, s);
}

void Task2()
{
	int x = 12345 + rand() % 10000, n0, n1, n2, n3, n4;
	printf("\n\nСлучайное 5 значное число		%d \n", x);

	n0 = x / 10000;
	n1 = (x - n0 * 10000) / 1000;
	n2 = (x - n0 * 10000 - n1 * 1000) / 100;
	n3 = (x - n0 * 10000 - n1 * 1000 - n2 * 100) / 10;
	n4 = (x - n0 * 10000 - n1 * 1000 - n2 * 100 - n3 * 10);

	printf("\nСлучайное 5 число в обратном порядке	%d%d%d%d%d \n\n\n", n4, n3, n2, n1, n0);
}

void Task3()
{
	int x = 28582, n0, n1, n2, n3, n4, bn0, bn1, bn2, bn3, bn4;
	printf("\n\nСлучайное 5 значное число %d \n", x);

	n0 = (x / 10000);
	n1 = (x - n0 * 10000) / 1000;
	n2 = (x - n0 * 10000 - n1 * 1000) / 100;
	n3 = (x - n0 * 10000 - n1 * 1000 - n2 * 100) / 10;
	n4 = (x - n0 * 10000 - n1 * 1000 - n2 * 100 - n3 * 10);

	bn0 = (x - n0 * 10000 - n1 * 1000 - n2 * 100 - n3 * 10);
	bn1 = (x - n0 * 10000 - n1 * 1000 - n2 * 100) / 10;
	bn2 = (x - n0 * 10000 - n1 * 1000) / 100;
	bn3 = (x - n0 * 10000) / 1000;
	bn4 = (x / 10000);

	bool b = (n0 == bn0 && n1 == bn1 && n2 == bn2 && n3 == bn3 && n4 == bn4);
	printf("\n %d \n\n", b);

}

void Task4()
{
	int i, j, s;
	for (i = 2; i<10000; i++)
	{
		s = 0;
		for (j = 1; j < i; j++)
			if (i%j == 0)
				s += j;
		if (s == i)
			printf("%d\n", i);
	}
}

void Task5()
{
	int r;

		srand(time(NULL));
		r = 1 + rand() % 5;

		if (r != 1 && r != 6 || r == 2 && r == 3 || r == 4 || r == 5) { printf("\n Получена оценка: %d \n", r); }

		switch (r)
		{
		case 2: {printf("\n Запись в протокол - \"Неуд\"\n\n"); } break;
		case 3: {printf("\n Запись в протокол - \"Удовл\"\n\n"); } break;
		case 4: {printf("\n Запись в протокол - \"Хор\"\n\n"); } break;
		case 5: {printf("\n Запись в протокол - \"Отл\"\n\n"); } break;

		default:
			break;
		}
	
}

void Task6()
{
	int onet, tent, sixtyt, trip, csum;

	printf("\n\nВведите кол-во поездок => ");
	scanf_s("%d", &trip);

	sixtyt = trip / 60;
	tent = (trip - sixtyt * 60) / 10;
	onet = (trip - sixtyt * 60 - tent*10);
	csum = sixtyt*440 + tent*125 + onet*15;
	
	printf("\n Для совершения %d поездок на метро по минимальной цене, необходимо приобрести: ", trip);
		
	if ((csum) > (sixtyt+1)*440)
	{
		sixtyt = sixtyt + 1;
		printf("\n - билетов на 60 поездок - %d шт", sixtyt);
	}
	else
	{
		printf("\n - билетов на 60 поездок - %d шт", sixtyt);
	

		if ((tent*125 + onet*15) > (tent+1)*125)
		{
			tent = tent + 1;
			printf("\n - билетов на 10 поездок - %d шт", tent);
		}
		else
		{
			printf("\n - билетов на 10 поездок - %d шт", tent);
			printf("\n - билетов на 1 поездку - %d шт", onet);
		}
	}
	
	printf("\n\n");
}

void Task7()
{
	int onet, fivet, tent, twentyt, sixtyt, trip, csum;

	printf("\n\nВведите кол-во поездок => ");
	scanf_s("%d", &trip);

	sixtyt	= trip / 60;
	twentyt = (trip - sixtyt * 60) / 20;
	tent	= (trip - sixtyt * 60 - twentyt * 20) / 10;
	fivet	= (trip - sixtyt * 60 - twentyt * 20 - tent * 10) / 5;
	onet	= (trip - sixtyt * 60 - tent * 10);
	csum	= sixtyt * 440 + twentyt * 230 + tent * 125 + fivet * 70 + onet * 15;

	if ((csum) > (sixtyt + 1) * 440)
	{
		sixtyt = sixtyt + 1;
		printf("\n	- билетов на 60 поездок	- %d шт", sixtyt);
	}
	else
	{
		printf("\n - билетов на 60 поездок - %d шт", sixtyt);


		if ((twentyt * 230 + tent * 125) > (twentyt + 1) * 230)
		{
			twentyt = twentyt + 1;
			printf("\n	- билетов на 20 поездок	- %d шт", twentyt);
		}
		else
		{
			if ((tent * 125 + fivet * 70) > (tent + 1) * 125)
			{
				tent = tent + 1;
				printf("\n	- билетов на 10 поездок	- %d шт", tent);
			}
			else 
			{
				if ((fivet * 70 + onet * 15) > (fivet + 2) * 70)
				{
					fivet = fivet + 2;
					printf("\n	- билетов на 5 поездок	- %d шт", fivet);
				}
				else
				{
					printf("\n	- билетов на 5 поездок	- %d шт", fivet);
					printf("\n	- билетов на 1 поездку	- %d шт", onet);
				}
			}
		}
	}

	printf("\n\n");
}
	




int main()
{
	int c, flag;

	setlocale(LC_ALL, "");
	srand(time(NULL));

start:
	printf("Введите номер задания => ");
	scanf_s("%d", &c);

	switch (c)
	{

	case 1: {Task1(); } break;
	case 2: {Task2(); } break;
	case 3: {Task3(); } break;
	case 4: {Task4(); } break;
	case 5: {Task5(); } break;
	case 6: {Task6(); } break;
	case 7: {Task7(); } break;

	default:
		break;
	}

	printf("Вы хотите продолжить? 1/0 => ");
	scanf_s("%d", &flag);
	

	if (flag == 1)
		goto start;

	printf("\n");

	system("pause");

}