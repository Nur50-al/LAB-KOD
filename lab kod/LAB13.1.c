#Ýnclude <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int N, factorial=1;
 printf(" Enter a non-negative integer N:");
 scanf("%d",&N);
    
 if (N<0 ){
 
 printf("Please enter non negative number:/n ") ;
}
 else {
 	for(int i=1;i<=N;++i)
 	factorial*=i;
 
    printf("Factorial of %d is: %d/n ",N,factorial);
    
}	
	
	return 0;
}
