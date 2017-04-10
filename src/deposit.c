#include <stdio.h>
#include "deposit.h"
#define DEP 100000

float func(float vklad, int srok)
{     
    if(srok <= 30) {
	     vklad *= 0.9;           
        } else if((srok >= 31) && (srok <= 120)) {
             vklad *= (vklad <= DEP ? 1.02 : 1.03);           
        } else if((srok >= 121) && (srok <= 240)) {
             vklad *= (vklad <= DEP  ? 1.06 : 1.08);           
        } else if((srok >= 241) && (srok <= 365)) {	
             vklad *= (vklad <= DEP  ? 1.12 : 1.15);
        }
    return vklad;
}   

