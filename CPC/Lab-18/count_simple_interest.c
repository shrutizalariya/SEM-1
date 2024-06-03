#include<stdio.h>
 	float interest(int p,int r,int n){
 		float I=(p*r*n)/100.0;
		return I;	
	}
	void main(){
		int p,r,n;
		printf("Enter p r n:");
		scanf("%d %d %d",&p,&r,&n);
		float ans=interest(p,r,n);
		printf("simple interest=%f",ans);
	}
