/*Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.
The task is very simple: given two integers A and B, write a program to add these two numbers and output it.*/
#include <stdio.h> 
int main() 
{
  int T;
  scanf("%d", &T);
  while (T--) 
     {
  	int a, b;
	scanf("%d %d", &a, &b);
        int ans = a + b;
        printf("%d\n", ans);
     }
  return 0;
}
