#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int  a ;
	printf("enter an integer:");
	scanf("%d",&a);
	
	if(a%2==0)
	   printf("%d is even",a);
	
	  
    else 
	   printf("%d is odd",a);
	
	   
	return 0;
}
