#include <stdio.h>

int main() 
{
    int time,i;
    float deposit;

    printf("Time deposit:\n");        
    scanf("%d",&time);
    printf("Sum deposit:\n");
    scanf("%f",&deposit);

    if((time > 365) || (time < 0) || (deposit < 10000)) 
    {
        perror("incorrect input");
        return 0;
    }

    if(deposit <= 100000) //If the deposit is less than
    {
        if(time <= 30)
        {
	    deposit = deposit * 0.9;
        }
        else
        
            if((time >= 31) && (time <= 120)){
                deposit = deposit * 1.02;
        }
        else
        
            if((time >= 121) && (time <= 240)){
                deposit = deposit * 1.06;
        }
        else
        
            if((time >= 241) && (time <= 365)){	
                deposit = deposit * 1.12;
        }
    }
    else
    {
    if(deposit > 100000) //If the deposit is more than
        {
        if(time <= 30)
            {
	        deposit = deposit * 0.9;
            }
            else
            
                if((time >= 31) && (time <= 120)){
                    deposit = deposit * 1.03;
            }
            else
            
                if((time >= 121) && (time <= 240)){
                    deposit = deposit * 1.08;
            }
            else
            
                if((time >= 241) && ( time <= 365)){	
                    deposit = deposit * 1.15;
            }
        }
    }

    printf("%g\n",deposit); //Output deposit

    return 0;
}
