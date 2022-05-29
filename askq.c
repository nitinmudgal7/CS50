# include <stdio.h>
int main (void)
{
    char inp;
    printf("Do you Agree with the terms and conditions(Y/N) ?\n");
    scanf("%c", &inp);
    if (inp == 'Y' || inp == 'y')
    {
        printf("Agreed. \n");
    }
    else if (inp == 'N' || inp == 'n')
    {
        printf("No Agreed. \n");
    }
    else 
    {
        printf("Invalid response.\n");
    }
    return 0;
}