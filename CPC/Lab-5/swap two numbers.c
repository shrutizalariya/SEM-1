#include<stdio.h>
  void main(){
  	int a,b,temp;
  	printf("Enter A:");
  	scanf("%d",&a);
  	printf("Enter B:");
  	scanf("%d",&b);
  	temp=a;
  	a=b;
  	b=temp;
  	printf("%d %d",a,b);
  }
