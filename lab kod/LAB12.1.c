#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int A,B,C;
   printf("Enter  three numbes (A,B,C):");
   scanf("%d %d %d",&A,&B, &C);
   
   if (A>=B &&A>=C){
      printf(" the largest number is: %d/n",A);
}
   else if (B>=A && B>=C){
 
           printf(" the largest number is: %d/n",B );
   }	
   else {
   	       printf (" the largest number is: %d/n",C );
   }
		
	return 0;
}
