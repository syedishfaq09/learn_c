#include <stdio.h>
int main ()
{

	char name [20] = "chocolate";

	char size = 'M';

	int personItServes = 2;

	float price = 500.00;

	printf("%s\n", name);

	printf("%c\n", size);

	printf("%d\n", personItServes);

	printf("%f\n", price);

	printf("Yay! you have ordered a %s pizza of size %c that serves %d people please pay Rs %.2f to the delivery person.",name,size,personItServes,price);


	return 0;
}