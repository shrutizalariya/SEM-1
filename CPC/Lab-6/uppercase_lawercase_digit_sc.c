#include<stdio.h>
    void main(){
    int temp;
    printf("Enter temp:");
    scanf("%d",&temp);
    if (65<temp && temp<91){
    	printf("character is upper case");
    }
    else if (96<temp && temp<123){
        printf("character is lower case");
	}
	else if (46<temp && temp<58){
	    printf("character is digit");
	}
	else {
	    printf("character is special character");
	}
}
