#include<stdio.h>
 	struct book{
 		char booktitle[50];
 		char authorname[50];
 		char publication[50];
 		int price;
	};
	int main(){
		struct book abc;
		int i;
		for(i=1;i<4;i++){
			printf("Enter a book title %d:",i);
			scanf(" %s",&abc.booktitle);
			printf("Enter a author name for book %d:",i);
			scanf(" %s",&abc.authorname);
			printf("Enter a publication for book %d:",i);
			scanf(" %s",&abc.publication);
			printf("Enter a price for book %d:",i);
			scanf(" %d",&abc.price);
		}
		for(i=1;i<4;i++){
			printf("booktitle %d= %s\n",i,abc.booktitle);
			printf("authorname %d= %s\n",i,abc.authorname);
			printf("publication %d= %s\n",i,abc.publication);
			printf("price %d= %d\n",i,abc.price);
		}
	}
