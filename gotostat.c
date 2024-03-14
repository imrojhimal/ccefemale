#include<stdio.h>
int main()
{
    int i=1,j,limit;
    float sum=0,fact=1;
    scanf("%d",&limit);
    while(i<=limit)
    {
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        printf("%f\n",fact);
        sum=sum+(i/fact);
        fact=1;
        i++;
    }
    printf("%f",sum);

}
