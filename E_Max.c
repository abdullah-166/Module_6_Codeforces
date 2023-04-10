#include<stdio.h>
int main()
{
    int number,check,max=0;
    scanf("%d",&number);
    for(int i=0; i< number;i++)
    {
        scanf("%d",&check);
        if(check > max)
        {
            max = check;
        }
    }
    printf("%d\n",max);
    return 0;
}