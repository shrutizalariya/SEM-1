#include<stdio.h>
  void main(){
  	int a,b,c;
  	printf("Enter a:");
  	scanf("%d",&a);
  	printf("Enter b:");
  	scanf("%d",&b);
  	printf("Enter c:");
  	scanf("%d",&c);
  	if (a>b&&a>c)
	{
		printf("a is greater");
	}
	else if (b>c)
    {
    	printf("b is greater");
	}
	else 
	{ 
	    printf("c is greater");
	}
  }
