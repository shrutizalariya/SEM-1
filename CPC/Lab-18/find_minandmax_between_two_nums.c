#include<stdio.h>
	int max(int a,int b){
		if(a>b){
			return a;
		}
		else{
			return b;
		}
	}
	int min(int a,int b){
		if(a<b){
			return a;
		}
		else{
			return b;
		}
	}
	void main(){
		int a,b;
		printf("Enter a b:");
		scanf("%d %d",&a,&b);
		int maxans=max(a,b);
		int minans=min(a,b);
		printf("maximum num=%d\nminimum num=%d",maxans,minans);
	}
