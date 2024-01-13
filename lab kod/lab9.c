#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c ;
	printf("enter three numbers  : "  );
	scanf("%d%d%d",&a,&b,&c) ;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	if(a>b && a>c)
	   printf("a is the biggest number");
	else if(b>a && b>c)
       printf("b is the biggest number");
	else
	   printf(" c is the biggest number");	
	
	
	return 0;
}
		
