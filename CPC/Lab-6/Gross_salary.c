#include<stdio.h>
    void main(){
    	int basicsalary;
    	float grosssalary;
    	printf("Enter a basic salary:");
    	scanf("%d",&basicsalary);
    	if(basicsalary>=10000){
    		grosssalary=basicsalary+(basicsalary)*0.2+(basicsalary)*0.8;
		}
		if(basicsalary>=20000){
			grosssalary=basicsalary+(basicsalary)*0.25+(basicsalary)*0.9;
		}
		if(basicsalary>=30000){
			grosssalary=basicsalary+(basicsalary)*0.3+(basicsalary)*0.95;
		}
		printf("%f",grosssalary);
	}
