#include <stdio.h>
#include <math.h>

int main()
{
    int n,arr[10][10];
    printf("Enter the rows: ");
    scanf("%d", &n);
    printf("enter matrix");
    for (int i = 0; i < n; i++)
    for (int j = 0; j < 4; j++)
    {
        scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < n; i++)
    {
        int sum=0;
    for (int j=0;j<4;j++)
    sum +=arr[i][j]*pow(2,3-j);
    if (sum<10)
        {
            printf("%d", sum);
        }
        else
        {
            printf("%c", sum+55);
        }
    }

    return 0;
} 
