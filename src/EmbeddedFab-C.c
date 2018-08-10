#include "stdio.h"
#include "stdlib.h"

void printBinary(int number);
int scanBinary();
void printHex();

//int mul (int x , int y);
//int sub (int x , int y);
//int sum (int return1 , int return2);

int mul (int x , int y)
{
	return x*y;
}

int sub (int x , int y)
{
	return x-y;

}
int sum (int x , int y)
{
	return x+y;
}


int main(void) {









	return 0;
}


















void printBinary(int number)
{
	char bits[32] = {0};
	int counter = 0;
	while(number)
	{
		counter ++;

		if(number & 1)
		{
			bits[counter-1] = 1;
		}
		else
		{
			bits[counter-1] = 0;
		}
		number = (number >> 1);
	}

	for(int index = counter-1 ; index > -1 ; index --)
	{
		printf("%d" , bits[index]);
	}
}

int scanBinary()
{
	char value [32] = {0};
	int counter = 0;
	int number = 0;

	for(int index = 0 ; index < 32 ; index++)
	{
		scanf("%c" , &value[index]);
		if (value[index] == '\n')
		{
			value[index] = 0 ;
			break;
		}
		counter++;
	}

	for(int index = counter-1 ; index > -1 ; index --)
	{
		number |= (value[counter-1-index] & 1) << index;
	}
	return number;
}

void printHex(int number)
{
	char bits[8] = {0};
	int counter = 0;

	for(int index = 0 ; index < 32 ; index+=4)
	{

		bits[index/4] = (number >> index ) & 0x0f;

	}

	printf("0x");
	for(int index = 8-1 ; index > -1 ; index --)
	{
		if(bits[index]==10) printf("A");
		else if(bits[index]==11) printf("B");
		else if(bits[index]==12) printf("C");
		else if(bits[index]==13) printf("D");
		else if(bits[index]==14) printf("E");
		else if(bits[index]==15) printf("F");
		else printf("%d" , bits[index]);

	}

}

