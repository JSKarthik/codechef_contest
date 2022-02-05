/*Write a program to find the remainder when an integer A is divided by an integer B.*/
#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a, b,r;
		scanf("%d",&a);
		scanf("%d",&b);
		
		r=a%b;
		printf("%d",r);
		printf("\n");
		
	}
}
