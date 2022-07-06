#include "header.h"

int hour, minute;

int main() 
{	
	setlocale(LC_CTYPE, "ukr");
	
	printf("Введіть час:\n");
	scanf_s("%d %d", &hour, &minute);
		while (valid(hour, minute) == -1) 
		{
			printf("Введіть час знову:");
			scanf_s("%d %d", &hour, &minute);
		}
		translateHour(hour);
		translateMinute(minute);

	return 0;
}
