# include <stdio.h>
int main (void)
{
    int inp;
    printf("Enter one integer \n");
    scanf("%i", &inp);

    if(inp % 2 == 0 )
    {
        printf("It is an even number");
    }
    else
    {
        printf("It is an odd number");
    }
    return 0;
} 