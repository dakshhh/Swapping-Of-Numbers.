#include<stdio.h>
main()
{
	int a=99, b=100;
	printf("Numbers before swapping: a=%d b=%d. \n", a,b);
	a=a+b; // a= 99+100 (now 'a' becomes 199)
	b=a-b; // b= 199-100 (now 'b' becomes 99)
	a=a-b; // a= 199-99 (now 'a' becomes 100)
	printf("Numbers after swapping: a=%d b=%d.", a,b);
	return 0;
}
