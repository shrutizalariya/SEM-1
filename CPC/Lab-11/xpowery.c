#include<stdio.h>
    void main(){
    	int i,x,y,sum=1;
    	printf("Enter x y:");
    	scanf("%d %d",&x,&y);
    	for(i=1;i<=y;i++){
    		sum=sum*x;
		}
		printf("%d",sum);
}
