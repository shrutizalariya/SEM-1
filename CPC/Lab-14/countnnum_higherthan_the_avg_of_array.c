#include<stdio.h>
    void main(){
    	int i,n,avg,count=0,sum=0;
    	printf("Enter a value of n:");
    	scanf("%d",&n);
    	int arr[n];
    	for(i=0;i<n;i++){
    		printf("arr[%d]:",i);
    		scanf("%d",&arr[i]);
    	    sum=sum+arr[i];
		}
			avg=sum/n;
		for(i=0;i<n;i++){
			if(arr[i]>avg){
				count++;
			}
    	}
    		printf("Count=%d",count);
    }
	
