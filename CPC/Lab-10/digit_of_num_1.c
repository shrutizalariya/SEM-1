#include<stdio.h>
    void main(){
    	int i=1,n,count=0;
    	printf("Enter n:");
    	scanf("%d",&n);
    	while(i<=n){
    		n=n/10;
    		count=count+1;
    		i++;
		}
		printf("%d",count);
}
