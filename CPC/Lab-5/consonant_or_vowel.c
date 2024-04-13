#include<stdio.h>;
   void main(){
   	 char character,a,e,i,o,u,A,E,I,O,U;
   	 
   	 printf("Enter character:");
   	 scanf("%c",&character);
   	 
   	 if (character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
	{
	    printf("character is vowel");	
	}
	else
	{
		printf("character is consonant");
	}	
}
