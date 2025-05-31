#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
	int len;
	printf("Enter the length of the fibonacci sequence: ");
	scanf("%d",&len);
	int fib[len];
	fib[0] = 0;
	fib[1] = 1;
	int cal = 2; //to check the place of the number we calcuate in the arrray
	
	for(int i = 0;i<len-2;i++){
		fib[cal] = fib[i] + fib[i+1];
	    cal++;
	}
	
	for(int i = 0;i<len;i++){
		printf("Fib[%d] = %d\n",i,fib[i]);
	}
	int asum = 0; //all sum
	int osum = 0; //sum of odd indices 
	int esum = 0; //sum of even indices
	for(int i = 0;i<len;i++){
		asum += fib[i];
	}
	for(int i = 0;i<len;i++){
		switch(i%2){
			case 0: esum+=fib[i]; break;
		    case 1: osum+=fib[i]; break;
		    default: printf("An error");
	    }
	}
	printf("\nThe sum of the all numbers in series is %d\n",asum);
	printf("The sum of the numbers at odd indices is %d\n",osum);
	printf("The sum of the numbers at even indices is %d\n",esum);
	
}
	
