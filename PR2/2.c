#include <stdio.h>
main()
{
    int units;
    float amount, total, charge;

    printf("Enter your usage units: ");
    scanf("%d", &units);


    
    if(units <= 50)
    {
        amount = units * 0.50;
    }
    else if(units <= 150)
    {
        amount = 25 + ((units-50) * 0.75);
    }
    else if(units <= 250)
    {
        amount = 100 + ((units-150) * 1.20);
    }
    else
    {
        amount = 220 + ((units-250) * 1.50);
    }


    charge = amount * 0.20;
    total  = amount + charge;

    printf("Electricity Bill = Rs. %f", total);

}