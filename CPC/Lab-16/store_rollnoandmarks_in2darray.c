#include<stdio.h>
    void main(){
    	int i,j,n=5,m=2,rollno,mark;
    	int arr[n][m];
    	for(i=0;i<n;i++){
    		for(j=0;j<m;j++){
    			if(j==0){
    				printf("Enter roll no=");
				}
				else{
					printf("Enter mark=");
				}
				scanf("%d",&arr[i][j]);
			}
				printf("\n");
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				printf(" %d ",arr[i][j]);
	    	}
	    	    printf("\n");
		}
    }
