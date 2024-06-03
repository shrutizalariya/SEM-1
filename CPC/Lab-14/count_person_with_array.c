#include<stdio.h>
    void main(){
    	int i,person,count=0;
    	printf("Enter num of person:");
    	scanf("%d",&person);
    	int weight[person],height[person];
    	
    	for(i=0;i<person;i++){
    		printf("heigh[%d]:",i);
    		scanf("%d",&height[i]);
    		printf("weight[%d]:",i);
    		scanf("%d",&weight[i]);
		}
		for(i=0;i<person;i++){
			if(height[i]>170 || weight[i]<50){
				count++;
			}
		}
		printf("num of person = %d",count);
}
