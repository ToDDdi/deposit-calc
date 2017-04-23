#include <stdio.h>
#include "deposit.h"

int main() 
{
    int srok;
    float vklad;

    printf("Срок: ");        
    scanf("%d", &srok);
    printf("Сумма вклада: ");
    scanf("%f", &vklad);

    if((srok > 365) || (srok < 0) || (vklad < 10000)) { 
        perror("incorrect input");
        return 0;
    }
    vklad = func(vklad, srok);  
    printf("\nCуммa вклада на момент окончания срока:  %g\n", vklad);	
    return 0;
}
   
