#include<stdio.h>
    void main(){
    	int i,n,arr[i],odd=0,even=0;
    	printf("Enter n:");
    	scanf("%d",&n);
    	for(i=0;i<n;i++){
    		printf("arr[%d]:",i);
    		scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++){
			if(arr[i]%2==0){
	            even++;			
			}	
			else{
				odd++;
			}
		}
		printf("count of even number=%d\n",even);
		printf("count of odd number=%d",odd);
}
