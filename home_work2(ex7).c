/*
 ============================================================================

 Name        : home_work2(ex7).c
 Author      : mohamed
 Version     :
 Copyright   : home work 2 (ex7)
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,n,fact=1;
		printf("enter an integer :");
		fflush(stdout);
		scanf("%d",&x);
		if(x>0)
{         for(n=1;n<=x;n++)
			{fact=fact*n;}
printf("factrial = %d",fact);

			}
		else if (x<0)
		printf("error");
		else
			printf("factorial 0 = 1");

	return 0;
}
