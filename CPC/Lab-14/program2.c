#include<stdio.h>
    void main(){
    	int i,n,arr[i],positivenum=0,negativenum=0;
    	printf("Enter n:");
    	scanf("%d",&n);
    	for(i=0;i<n;i++){
    		printf("arr[%d]:",i);
    		scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++){
			if(arr[i]>=0){
				positivenum=positivenum+1;
			}
			else{
				negativenum=negativenum+1;
			}
		}
		printf("count of positive number=%d\n",positivenum);
		printf("count of negative number=%d",negativenum);
}
