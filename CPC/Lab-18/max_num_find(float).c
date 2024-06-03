#include<stdio.h>
	float max(float a,float b,float c){
		if(a>b){
			if(a>c){
				return a;
			}
			else{
				return c;
			}
		}
		else if(b>c){
			if(b>a){
				return b;
			}
			else{
				return a;
			}
		}
		//else if(c>a){
			//if(c>b){
			//	return c;
			//}
		//}
	}
	void main(){
		float a,b,c;
		printf("Enter a,b,c:");
		scanf("%f %f %f",&a,&b,&c);
		float ans=max(a,b,c);
		printf("maximum num=%f",ans);
	}
