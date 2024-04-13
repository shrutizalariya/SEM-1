#include<stdio.h>
    void main(){
    	int n,b;
    	printf("Enter a value of n:");
		scanf("%d",&n);
		b=n%10;
    	if(b%2==0){
    	    printf("last digit is even");	
		}
		else{
			printf("last digit is odd");
		}
	}
