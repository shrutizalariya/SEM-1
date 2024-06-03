#include<stdio.h>
	int num(int a,int b){
	int temp=a;
		a=b;
		b=temp;
		printf("%d %d",a,b);
	}
	void main(){
		int x,y;
		printf("Enter x y:");
		scanf("%d %d",&x,&y);
		num(x,y);
	}
