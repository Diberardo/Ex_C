#include<stdio.h>
#include<math.h>
main()
{
	float X;
	
	 printf("digite um numero = "); scanf("%f",&X);
	  
	  if (X < 0) X = X * -1;
	   
	   X = sqrt(X);
	   
	 int  N = X;
	 
	  if (N == X) printf("\nÉ UM QUADRADO PERFEIRO!");
	  else printf("\nNAO É UM QUADRADO PERFEITO!");
}
