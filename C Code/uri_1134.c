#include <stdio.h>

int main()
{

    int n ,a = 0 , g = 0 , d = 0 ;

    while (2)
    {

        scanf("%d", &n);

     
        if (n == 4)
        {

            break;
        }
        else if (n == 1)
        {

            a++;
        }
        else if (n == 2)
        {

            g++;
        }
        else if (n == 3)
        {

            d++;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n" ,a , g , d);
}