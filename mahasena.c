#include<stdio.h>
int main()
{
    int t,i,e=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        if(a[i]%2==0)
        e++;
    }
    if(e>t-e)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
}
