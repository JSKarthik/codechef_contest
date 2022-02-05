/*If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.*/
#include <stdio.h>
int main()
{
    int ld,n,t,r;
     scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ld = n%10;
        while(n>0) {r=n%10; n/=10;}
        printf("%d\n",r+ld);
    }
    return 0;
}
