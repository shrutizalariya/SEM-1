#include<stdio.h>
    void main(){
    	int i=2,n,flag=0;
    	printf("Enter n:");
    	scanf("%d",&n);
    	while(i<=n/2){
    		if(n%i==0){
    			flag=1;
    			break;
			}
			i++;
		}
			if(flag==1){
				printf("%d num is not prime",n);
			}
			else{
				printf("num is prime");
			}
	}
