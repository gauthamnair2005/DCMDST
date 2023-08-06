#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
	int x;
	printf("Welcome to the DonutCMD Setup\n");
	printf("--------------------------------------------\n");
	printf("1. Install\n");
	printf("2. About\n");
	printf("3. Exit\n");
	scanf("%d", &x);
	if (x == 1)
	{
		printf("Preparing Setup\n");
		printf("Installing to C://DonutCMD\n");
		system("mkdir C:\\DonutCMD && copy *.exe C:\\DonutCMD");
		printf("Done..!\n");
		printf("Press any key to exit..!\n");
		getch();
	}
	else if (x == 2)
	{
		printf("DonutCMD Setup Tool\n");
		printf("Gautham Nair\n");
		printf("Press any key to exit..!\n");
		getch();
	}
	else if (x == 3)
	{
		printf("Exiting Now..!\n");
		printf("Press any key to exit\n");
		getch();
	}
	else
	{
		printf("Invalid Command Passed..! Terminating..!\n");
		getch();
	}
	return 0;
}