#include<stdio.h>
  	int sum(int a,int b){
  		int sum=a+b;
  		return sum;
	}
	void main(){
		int x,y;
		printf("Enter a value of x,y:");
		scanf("%d %d",&x,&y);
		int ans=sum(a,b);
		printf("sum of %d and %d = %d",x,y,ans);
	}
