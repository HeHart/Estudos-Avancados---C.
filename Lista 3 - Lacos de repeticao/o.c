#include<stdio.h>
void main ()
{
    int i, fat;
    for (i=1;i<=10;i++)
    {
        if ((i%2)!=0)
        {
            fat = i;
            for (int j=i-1;1<j;j--)
            {
                fat*=j;
            }
            printf("%d\n", fat);
        }
    }
}