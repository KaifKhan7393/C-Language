#include <stdio.h>

int main()
{
    int a, b ;
    printf("Enter the number of a\n");
    scanf("%d", &a);

    printf("Enter the number of b\n");
    scanf("%d", &b);

    printf("The sum of the %d\n", a+b);
    printf("The multiplication of the %d\n", a*b);
    printf("The substraction of the %d\n", a-b);
    printf("The division of the %d\n", a/b);

    return 0;
}