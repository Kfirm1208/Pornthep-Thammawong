#include <stdio.h>

int summation1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int num;
    printf("Insert number: ");
    scanf("%d", &num);

    printf("summation of 1 - %d is %d", num, summation1(num));

    return 0;
}