#include "stdio.h"

//int sensor = 48;
//long sensor1 = 48;
//char sensor2 = 48;
//double  sensor3 = 48;


int  input = 1;



int main(void) {

	puts("please enter input :");
	scanf("%d" , &input);
	printf("input : %d \r\n" , input);


	//	input |= (1 << 0);
	//	printf("input : %d\r\n" , input);
	//
	//	input &= ~(1 << 0);
	//	printf("input : %d\r\n" , input);


	//	if(input ==  1)
	//	{
	//
	//		printf("OK");
	//	}
	//	else if (input == 2)
	//	{
	//		printf("Failed");
	//
	//	}else
	//	{
	//		printf("Try again ");
	//
	//	}

	switch(input)
	{
	case 1 :
		printf("OK");

		break;
	case 2 :
		printf("Failed");

		break;
	default :
		printf("Try again ");

		break;

	}



	return 0;
}
