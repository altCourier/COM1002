#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int check = num; // the variable to check the number for being palydrome,we assigned the value to the 'check' variable so that we don't change the value of num variable
	int new =0; //a number to check the number for being palydrome
	int rem; // the variable for remainder 
	int paly = 0, pri = 1; // the values to control whether the number is palyndrome or prime or both
	
	
	while(check != 0){
		rem = check %10;
		new  = new*10 + rem;
		check = check /10;
	}
    if(new == num){
		paly++;
	}
	
	for(int i = 2 ;i<num;i++){
		if(num %i ==0){
			pri = 0;
			break;
		}
	}
	int know = paly*2+pri;
	switch (know) {
        case 3:
            printf("%d is both a palindrome and a prime number\n", num);
            break;
        case 2:
            printf("%d is a palindrome but not a prime number\n", num);
            break;
        case 1:
            printf("%d is a prime number but not a palindrome\n", num);
            break;
        case 0:
            printf("%d is neither a palindrome nor a prime number\n", num);
            break;
        default:
            printf("NOT THE CORRECT VALUES\n");
    }
}	