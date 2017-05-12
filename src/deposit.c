#include <stdio.h>
#include "deposit.h"

int vklad(int a, int b){
int c=a;
if (a<100000){
if ((b > 0) && (b <= 30)) 
        c*=0.9;
        if ((b > 30) && (b <= 120)) 
        c*=1.02;
        if ((b > 120) && (b <= 240)) 
        c*=1.06;
          ((b > 240) && (b <= 365)) 
        c*=1.12;	
}
else {
if ((b > 0) && (b <= 30)) 
        c*=0.9;
        if ((b > 30) && (b <= 120)) 
        c*=1.03;
        if ((b > 120) && (b <= 240)) 
        c*=1.08;
         if ((b > 240) && (b <= 365)) 
        c*=1.15;	
}
return c;
};

int err (int t, int s){
	if ((t <= 0) || (t > 365) || (s<10000))
		printf ("VVedite coretnie dannie!\n");

    else 
	   printf ("Resultat vklada: %i\n", vklad(s,t));
    return 0;
}

