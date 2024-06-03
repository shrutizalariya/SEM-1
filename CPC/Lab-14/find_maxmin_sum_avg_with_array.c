#include<stdio.h>
    void main(){
    	int i,n,max=0,min=0,sum=0;
    	float avg;
    	printf("Enter n:");
    	scanf("%d",&n);
    	int arr[n];
    	for(i=0;i<n;i++){
    		printf("arr[%d]:",i);
    		scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++){
		   if(max<arr[i]){
		    	max=arr[i];
		}
		   else if (min>arr[i]){
		   	    min=arr[i];
		}
		   sum=sum+arr[i];
		   avg=sum/n;
	}
	       printf("max num is=%d\n",max);
		   printf("min num is=%d\n",min);
		   printf("sum of num is=%d\n",sum);
		   printf("avg of num is=%f",avg);
}
