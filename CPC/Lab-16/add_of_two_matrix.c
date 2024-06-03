#include<stdio.h>
    void main(){
    	int i,j,n,m;
    	printf("Enter n:");
    	scanf("%d",&n);
    	printf("Enter m:");
    	scanf("%d",&m);
    	int a[n][m],b[n][m],c[n][m];
    	for(i=0;i<n;i++){
    		for(j=0;j<m;j++){
    			printf("a[%d][%d]=",i,j);
    			scanf("%d",&a[i][j]);
    			printf("b[%d][%d]=",i,j);
    			scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<n;i++){
    		for(j=0;j<m;j++){
    			c[i][j]=a[i][j]+b[i][j];
    			printf("%d ",c[i][j]);
    		}
    		printf("\n");
    	}
	}
