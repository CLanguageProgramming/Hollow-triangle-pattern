#include <stdio.h>
int main()
{
    int a=1;
    int b;
    int c=a;
    printf("Enter maximum limit for this pattern >>");
    scanf("%d", &b);
    while(a<=b)
    {
        printf("%d ", a);
        a++;
    }
    printf("\n");
    a=c+1;
    c++;
    while(a<=b)
    {
    for (int i = 2; i<=b;i++)
    {
        if(a == c || a == b)
        {
            printf("%d ", a);
            a++;
        }
        else
        {
            printf("  ");
            a++;
        }
    }
    printf("\n");
    c++;
    a=c;
    }
}
