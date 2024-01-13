#include<stdio.h>

int main(){
	
int originalNumber ,reverseNumber=0,remainder,temp;
printf("Enter a number:");
scanf("%d/n",&originalNumber);

temp=originalNumber;

while (temp!=0)	{
	
	remainder=temp % 10;
	reverseNumber=reverseNumber * 10 + remainder;
	temp /=10;	
}
	
if (originalNumber== reverseNumber){
	
	printf("%d is a Palindrome number:/n",originalNumber);
}	
	
else {
	
printf("%d is not a Palindrome number:/n",  originalNumber);

}	


return 0;

}
