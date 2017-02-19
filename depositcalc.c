#include <stdio.h>

int main() 
{
    int time,i;
	float deposit;

	printf("Time deposit:\n");        
	scanf("%d",&time);
	printf("Sum deposit:\n");
	scanf("%f",&deposit);

	if((time>365)||(time<0)||(deposit<10000)) 
	{
        perror("incorrect input");
        return 0;
    }
    return 0;
}