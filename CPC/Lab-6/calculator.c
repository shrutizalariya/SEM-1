#include<stdio.h>
    void main(){
   	    int a,b;
   	    float d;
   	    char c;
   	    printf("Enter choice:");
   	    scanf("%c",&c);
   	    printf("Enter a:");
   	    scanf("%d",&a);
   	    printf("Enter b:");
   	    scanf("%d",&b);
        if (c=='+'){
      	 d=a+b;
	    }
	    else if(c=='-'){
	  	 d=a-b;
	    }
	    else if(c=='*'){
	  	 d=a*b;
	    }
	    else if(c=='/'){
	  	 d=a/b;
	    }
   	    printf("Answer=%f",d);
}
