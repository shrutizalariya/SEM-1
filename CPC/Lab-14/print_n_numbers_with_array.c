#include<stdio.h>
    void main(){
    	int i,arr[i],n;
    	printf("Enter n:");
    	scanf("%d",&n);
    	for(i=0;i<n;i++){
    		printf("arr[%d]:",i);
    		scanf("%d",&arr[i]);
    	}
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		    printf("\n");
		for(i=n-1;i>=0;i--){
			printf("%d ",arr[i]);
		}
}
