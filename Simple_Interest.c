#include<stdio.h>
void main()
{
	int a,b;
	float c,d;
	printf("Enter the values of a,b,c");//output
	scanf("%d%d%f",&a,&b,&c);
	d=a*b*c/100;
	printf("Simple Interest=%f\n",d);
}
