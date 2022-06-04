#include<stdio.h>
int main(void)
{
    int inp, lft=0, qrt=0, op=0, dim=0,nic=0, nqrt = 0, nnic = 0, ndim = 0, npen = 0;

    printf("Enter the change amount: ");
    scanf("%i", &inp);

    if(inp<0)
    {
        while (inp <0)
        {
            printf("Enter the change amount: ");
            scanf("%i", &inp);   
        }       
    }

    //Check for the quarters

    qrt = inp/25;
    lft = inp;

    if(qrt!=0)
    {
        op = qrt;
        nqrt = qrt;
        lft = lft - qrt*25;
    }
    
    //Check for the dimes

    dim = lft/10;

    if(dim!=0)
    {
        op = op + dim;
        ndim = dim;
        lft = lft - dim*10;
    }

    //Check for the nickels

    nic = lft/5;

    if(nic!=0)
    {
        op = op + nic;
        nnic = nic;
        lft = lft - nic*5;
    }

    if (lft!=0)
    {
        op = op + lft;
        npen = lft;
    }

printf("Total Number of coins: %i \n", op);
printf("Quarter coin(s): %i \n", nqrt);
printf("Dime coin(s): %i \n", ndim);
printf("Nickle coin(s): %i \n", nnic);
printf("Pennies coin(s): %i \n", npen);
}