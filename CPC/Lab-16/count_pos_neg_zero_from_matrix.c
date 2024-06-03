#include<stdio.h>
    void main(){
    	int i,j,negativecount=0,positivecount=0,zero=0;
    	int a[3][3];
    	for(i=0;i<3;i++){
    		for(j=0;j<3;j++){
    			printf("a[%d][%d]=",i,j);
    			scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<3;i++){
    		for(j=0;j<3;j++){
				if(a[i][j]>0){
					positivecount++;
				}
			    else if(a[i][j]==0){
			    	zero++;
				}
				else if(a[i][j]<0){
					negativecount++;
				}
			}
		}
			printf("num of positive elements=%d\n",positivecount);
			printf("num of zero elements=%d\n",zero);
			printf("num of negative elements=%d",negativecount);
	}
