#include<stdio.h>
    void main(){
    	int i,n,count=0;
    	printf("Entr a value of n:");
    	scanf("%d",&n);
    	int arr[n];
    	for(i=0;i<n;i++){
    		printf("arr[%d] = ",i);
    		scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++){
			if(arr[i]<0){
				count++;
			}
		}
		printf("Negative Count=%d",count);
	}
