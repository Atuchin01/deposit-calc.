#include <stdio.h>
#include "deposit.h"

int main (){
	int s,t;
	printf ("Vvedite summy vklada: "); 
	scanf ("%i",&s);
	printf ("Vvedite srok vklada: ");
	scanf ( "%d",&t);	
	error(t,s);
	return 0;
}


