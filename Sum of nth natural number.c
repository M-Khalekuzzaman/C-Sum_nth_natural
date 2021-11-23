#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter your nth natural number is :");
    scanf("%d",&n);
    int sum = 0;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum = sum + i;

    }
            printf("\n");
    printf("Total sum is: %d\n",sum);
    getch();
}
