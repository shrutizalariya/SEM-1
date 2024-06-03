#include<stdio.h>
	struct student{
		char name[100];
		float per;
		int age;
	}abc[5];
	int main(){
		struct student abc;
		int i;
		for(i=0;i<5;i++){
			printf("Enter a name:");
			scanf(" %s",&abc.name);
			printf("Enter a per:");
			scanf("%f",&abc.per);
			printf("Enter a age:");
			scanf("%d",&abc.age);
		}
		for(i=0;i<5;i++){
			printf("name = %s\n",abc.name);
			printf("per = %f\n",abc.per);
			printf("age = %d\n",abc.age);
		}
	}
