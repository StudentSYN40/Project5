#include<iostream>
#include<stdio.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int day,month,year;
	printf("Введите день рождения: ");
	scanf("%i",&day);
	printf("Введите месяц рождения: ");
	scanf("%i",&month);
	printf("Введите год рождения: ");
	scanf("%i",&year);
	printf("День рождения: %i.%i.%i",day,month,year);
	int leap = year%4;
	if (leap==0)
	{
		printf("\nВисокосный год");
	}
	else
	{
		printf("\nНевисокосный год");
	}
	printf("\nГод ");
	int east = year%12;
		switch(east)
	{
		case 1:
			{
				printf("петуха");
			}
			break;
		case 2:
			{
				printf("собаки");
			}
			break;
		case 3:
			{
				printf("свиньи");
			}
			break;
		case 4:
			{
				printf("крысы");
			}
			break;
		case 5:
			{
				printf("быка");
			}
			break;
		case 6:
			{
				printf("тигра");
			}
			break;
		case 7:
			{
				printf("кролика");
			}
			break;
		case 8:
			{
				printf("дракона");
			}
			break;
		case 9:
			{
				printf("змеи");
			}
			break;
		case 10:
			{
				printf("лошади");
			}
			break;
		case 11:
			{
				printf("овцы");
			}
			break;
		case 12:
			{
				printf("обезьяны");
			}
			break;
	}
	printf(" по восточному календарю\nЗнак зодиака ");
	if (((month==3)&&(day>21))||((month==4)&&(day<20)))
	{
		printf("овен");
	}
	if (((month==4)&&(day>21))||((month==5)&&(day<21)))
	{
		printf("телец");
	}
	if (((month==5)&&(day>22))||((month==6)&&(day<21)))
	{
		printf("близнецы");
	}
	if (((month==6)&&(day>22))||((month==7)&&(day<22)))
	{
		printf("рак");
	}
	if (((month==7)&&(day>23))||((month==8)&&(day<23)))
	{
		printf("лев");
	}
	if (((month==8)&&(day>24))||((month==9)&&(day<22)))
	{
		printf("дева");
	}
	if (((month==9)&&(day>23))||((month==10)&&(day<23)))
	{
		printf("весы");
	}
	if (((month==10)&&(day>24))||((month==11)&&(day<22)))
	{
		printf("скорпион");
	}
	if (((month==11)&&(day>23))||((month==12)&&(day<21)))
	{
		printf("стрелец");
	}
	if (((month==12)&&(day>22))||((month==1)&&(day<20)))
	{
		printf("козерог");
	}
	if (((month==1)&&(day>21))||((month==2)&&(day<18)))
	{
		printf("водолей");
	}
	if (((month==2)&&(day>19))||((month==2)&&(day<20)))
	{
		printf("рыбы");
	}
}