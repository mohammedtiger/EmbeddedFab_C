#include "stdio.h"


char Array[11] = {0};

char value_char[2][3] = {{1 , 2 , 3} \
					   , {5 , 6 , 7} \
									};


char *value_char_ptr ;

int value_int = 0 ;
int *value_int_ptr ;


void sWap ( char *x , char *y);
void SwapArrays(char *arr1 , char *arr2 , int size);



int main(void) {

	for(int index = 0 ; index < 3 ; index++)
	{
		printf("%d" ,value_char[0][index]);
	}

	printf("\r\n");

	for(int index = 0 ; index < 3 ; index++)
	{
		printf("%d" ,value_char[1][index]);
	}

	SwapArrays(value_char[0] , value_char[1] , 3);

	printf("\r\n");

	for(int index = 0 ; index < 3 ; index++)
	{
		printf("%d" ,value_char[0][index]);
	}

	printf("\r\n");

	for(int index = 0 ; index < 3 ; index++)
	{
		printf("%d" ,value_char[1][index]);
	}







	return 0;
}




void sWap ( char *x , char *y)
{
	char temp = *x;
	*x = *y;
	*y=temp;

}



void SwapArrays(char *arr1 , char *arr2 , int size)
{

	for(int index = 0 ; index < size ; index ++)
	{
		sWap( &arr1[index] , &arr2[index]);
	}

}


