#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"
#define DEPOSIT 100000

float deposit_calc(int srok, int vklad)
{
    if(srok <= 30) {
        vklad *= 0.9;
      } else if((srok >= 31) && (srok <= 120)) {
            vklad *= (vklad <= DEPOSIT ? 1.02 : 1.03);
      } else if((srok >=121) && (srok <= 240)) {
            vklad *= (vklad <= DEPOSIT ? 1.06 : 1.08);
      } else if((srok >= 241) && (srok <= 365)) {
            vklad *= (vklad <= DEPOSIT ? 1.12 : 1.15);
      }
    
    return vklad;
}

int input(int *vklad, int *srok)
{
    printf("Сумма вклада: ");
    if(!scanf("%d", vklad)) {
        printf("incorrect vklad\n");
        return 0;
    }
    printf("Срок вклада: ");
    if(!scanf("%d", srok)) {
        printf("incorrect srok");
        return 0;
    }
    if((*srok > 365) || (*srok < 0) || (*vklad < 10000)) {
        printf("incorrect input\n");
        return 0;
    }
    
    return 1;
}

