#include<stdio.h>
int main()
{
    int a,e=0;;
    int b,o=0;
    int p=0;
    int n = 0;
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
        scanf("%d",&i);
    }
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if(i>0)
        {
            p++;
        }
        else if(i<0)
        {
            n++;
        }
    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);
    return 0;
}