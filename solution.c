#include "header.h"

int valid(int hour,int minute)
{
	return (hour <= 23 && hour >= 0 && minute <= 59 && minute >= 0 ) ? 1: -1;
	
}

int translateHour(int hour)
{
if (hour >= 20 && hour <= 24)
	printf(" двадц€ть ");

	switch (hour)
	{
	case 0:
		printf("нуль");
		break;
	case 1:
		printf("перша ");
		break;
	case 2:
		printf("дв≥");
		break;
	case 3:
		printf("три ");
		break;
	case 4:
		printf("чотири ");
		break;
	case 5:
		printf("п'€ть ");
		break;
	case 6:
		printf("ш≥сть ");
		break;
	case 7:
		printf("с≥м ");
		break;
	case 8:
		printf("в≥с≥м ");
		break;
	case 9:
		printf("дев'€ть ");
		break;
	case 10:
		printf("дес€та");
		break;
	case 11:
		printf("одинадц€ть  ");
		break;
	case 12:
		printf("дванадц€ть  ");
		break;
	case 13:
		printf("тринадц€ть  ");
		break;
	case 14:
		printf("чотирнадц€ть  ");
		break;
	case 15:
		printf("п€тнадц€ть  ");
		break;
	case 16:
		printf("ш≥стнадц€ть  ");
		break;
	case 17:
		printf("с≥мнадц€ть  ");
		break;
	case 18:
		printf("в≥с≥мнадц€ть  ");
		break;
	case 19:
		printf("дев€тнадц€ть  ");
		break;
	case 20:
		break;
	case 21:
		printf("перша  ");
		break;
	case 22:
		printf("дв≥ ");
		break;
	case 23:
		printf("три ");
		break;
	case 24:
		printf("чотири ");
		break;
	
	}
	if (hour >= 5 && hour <= 20 || hour == 0)
		printf(" годин ");
	else if (hour == 1 || hour == 21 || hour == 10)
		printf(" година ");
	else if (hour >= 2 || hour <= 4 || hour == 22 || hour == 23)
		printf(" години ");

	return 0;
}

int translateMinute(int minute)
{
	
	if (minute >= 20 && minute <= 29)
		printf(" двадц€ть ");
	else if (minute >= 30 && minute <= 39)
		printf(" тридц€ть ");
	else if (minute >= 40 && minute <= 49)
		printf(" сорок ");
	else if (minute >= 50 && minute <= 59)
		printf(" п€тьдес€т ");

	if (minute <= 9 || minute >= 20)
	{
		switch (minute % 10)
		{
		case 0:
			printf("нуль");
			break;
		case 1:
			printf("одна");
			break;
		case 2:
			printf("дв≥");
			break;
		case 3:
			printf("три");
			break;
		case 4:
			printf("чотири");
			break;
		case 5:
			printf("п'€ть");
			break;
		case 6:
			printf("ш≥сть");
			break;
		case 7:
			printf("с≥м");
			break;
		case 8:
			printf("в≥с≥м");
			break;
		case 9:
			printf("дев'€ть");
			break;

		}
	}
	else
	{
		switch (minute)
		{
		case 10:
			printf("дес€ть");
			break;
		case 11:
			printf("одинадц€ть");
			break;
		case 12:
			printf("дванадц€ть");
			break;
		case 13:
			printf("тринадц€ть");
			break;
		case 14:
			printf("чотирнадц€ть");
			break;
		case 15:
			printf("п'€тнадц€ть");
			break;
		case 16:
			printf("ш≥стнадц€ть");
			break;
		case 17:
			printf("с≥мнадц€ть");
			break;
		case 18:
			printf("в≥с≥мнадц€ть");
			break;
		case 19:
			printf("дев'€тнадц€ть");
			break;
		}
	}
	if (minute % 10 == 1)
		printf(" хвилина ");
	else if (minute % 10 >= 2 || minute % 10 <= 4)
		printf(" хвилини ");
	else
		printf(" хвилин ");


	return 0;
}