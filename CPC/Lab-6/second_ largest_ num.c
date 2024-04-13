#include<stdio.h>
    void main(){
    	int a,b,c;
    	printf("Enter a b c:");
    	scanf("%d %d %d",&a,&b,&c);
    	if(a>b){
    		if(a>c){
    			if(b>c){
    				printf("b is second largest");
				}
				else{
					printf("c is second largest");
				}
			}
			else{
				printf("a is second largest");
			}
		}
			else if(b>c){
				if(a>c){
					printf("a is second largest");
				}
				else{
					printf("c is second largest");
				}
			}
	}
