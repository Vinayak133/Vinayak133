//display characters in reverse order
#include<stdio.h>
void Display(char str[])
{
 int iCnt=0;
 if(str==NULL)
 {
 	return;
	 }	
	 while(*str!='\0')
	 {
	 	iCnt++;
	 	str++;
	 }
	 str--;
	 for(;iCnt>0;iCnt--,str--)
	 {
	 printf("%c",*str);
	 }
	 printf("\n");	
}
int main()
{
	char Arr[10];
	printf("enter string\n");
	scanf("%[^'\n']s",Arr);
	Display(Arr);
	printf("updated string is: %s\n",Arr);
	return 0;
}
