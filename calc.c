# include<stdio.h>
int main(void)
{
    int x, y, z ;
    printf("Hey!!, This program will add numbers for you, please provide input below\n");
    printf("Enter first number: ");
    scanf("%i", &x);
    printf("Enter Second number: ");
    scanf("%i", &y);
    z = x + y;
    printf("Result is: %i\n", z);
    return 0;
}