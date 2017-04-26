#include <stdio.h>
#include "deposit.h"

int main (){
	int s,t;
	printf ("Vvedite summy vklada: "); 
	scanf ("%i",&s);
	printf ("Vvedite srok vklada: ");
	scanf ( "%d",&t);
	if ((t <= 0) || (t > 365) || (s<10000))
	printf ("VVedite coretnie dannie");
	else {
	printf (" Resultat vklada: ");
	printf ("%i", vklad(s,t));	
	}
	return 0;
}


