#include<stdio.h>
   void main(){
   	    int n;
   	    printf("Enter a value between 0 to 6:");
   	    scanf("%d",&n);
   	    switch (n){
            case 0:printf("sunday");
			        break;		   
		    case 1:printf("monday");
			        break;
		    case 2:printf("tuesday");
			        break;
		    case 3:printf("wednesday");
			        break;
			case 4:printf("thursday");
			        break;
		    case 5:printf("friday");
			        break;
		    case 6:printf("saturday");
			        break;
			default:printf("invalid input");
			        break;
    }
} 
