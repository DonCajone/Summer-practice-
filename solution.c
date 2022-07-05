#include "header.h"

int valid(int hour,int minute)
{
	return (hour <= 23 && hour >= 0 && minute <= 59 && minute >= 0 ) ? 1: -1;
	
}

int translateHour(int hour)
{
if (hour >= 20 && hour <= 24)
	printf(" �������� ");

	switch (hour)
	{
	case 0:
		printf("����");
		break;
	case 1:
		printf("����� ");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��� ");
		break;
	case 4:
		printf("������ ");
		break;
	case 5:
		printf("�'��� ");
		break;
	case 6:
		printf("����� ");
		break;
	case 7:
		printf("�� ");
		break;
	case 8:
		printf("��� ");
		break;
	case 9:
		printf("���'��� ");
		break;
	case 10:
		printf("������");
		break;
	case 11:
		printf("����������  ");
		break;
	case 12:
		printf("����������  ");
		break;
	case 13:
		printf("����������  ");
		break;
	case 14:
		printf("������������  ");
		break;
	case 15:
		printf("����������  ");
		break;
	case 16:
		printf("�����������  ");
		break;
	case 17:
		printf("���������  ");
		break;
	case 18:
		printf("����������  ");
		break;
	case 19:
		printf("������������  ");
		break;
	case 20:
		break;
	case 21:
		printf("�����  ");
		break;
	case 22:
		printf("�� ");
		break;
	case 23:
		printf("��� ");
		break;
	case 24:
		printf("������ ");
		break;
	
	}
	if (hour >= 5 && hour <= 20 || hour == 0)
		printf(" ����� ");
	else if (hour == 1 || hour == 21 || hour == 10)
		printf(" ������ ");
	else if (hour >= 2 || hour <= 4 || hour == 22 || hour == 23)
		printf(" ������ ");

	return 0;
}

int translateMinute(int minute)
{
	
	if (minute >= 20 && minute <= 29)
		printf(" �������� ");
	else if (minute >= 30 && minute <= 39)
		printf(" �������� ");
	else if (minute >= 40 && minute <= 49)
		printf(" ����� ");
	else if (minute >= 50 && minute <= 59)
		printf(" ��������� ");

	if (minute <= 9 || minute >= 20)
	{
		switch (minute % 10)
		{
		case 0:
			printf("����");
			break;
		case 1:
			printf("����");
			break;
		case 2:
			printf("��");
			break;
		case 3:
			printf("���");
			break;
		case 4:
			printf("������");
			break;
		case 5:
			printf("�'���");
			break;
		case 6:
			printf("�����");
			break;
		case 7:
			printf("��");
			break;
		case 8:
			printf("���");
			break;
		case 9:
			printf("���'���");
			break;

		}
	}
	else
	{
		switch (minute)
		{
		case 10:
			printf("������");
			break;
		case 11:
			printf("����������");
			break;
		case 12:
			printf("����������");
			break;
		case 13:
			printf("����������");
			break;
		case 14:
			printf("������������");
			break;
		case 15:
			printf("�'���������");
			break;
		case 16:
			printf("�����������");
			break;
		case 17:
			printf("���������");
			break;
		case 18:
			printf("����������");
			break;
		case 19:
			printf("���'���������");
			break;
		}
	}
	if (minute % 10 == 1)
		printf(" ������� ");
	else if (minute % 10 >= 2 || minute % 10 <= 4)
		printf(" ������� ");
	else
		printf(" ������ ");


	return 0;
}