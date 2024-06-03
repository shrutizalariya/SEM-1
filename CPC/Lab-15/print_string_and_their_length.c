#include<stdio.h>
    void main(){
    	int i,count=0;
    	char a[100];
    	printf("Enter a string:");
    	gets(a);
    	
    	printf("%s\n",a);
    	
    	for(i=0;a[i]!='\0';i++){
    		count++;
		}
		printf("length of string=%d",count);
	}
