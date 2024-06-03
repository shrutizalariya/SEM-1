#include<stdio.h>
    void main(){
    	int i,n,e,flag=0;
    	printf("Entr a value of n:");
    	scanf("%d",&n);
    	int arr[n];
    	
    	for(i=0;i<n;i++){
    		printf("arr[%d] = ",i);
    		scanf("%d",&arr[i]);
		}
			printf("Enter a search element:");
			scanf("%d",&e);
		for(i=0;i<n;i++){
			   if (arr[i]==e){
				flag=1;
				break;
			}
		}
			if(flag==1){
				printf("serch element found");
			}
			else{
				printf("serch element not found");	
			}
	}
