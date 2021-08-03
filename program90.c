//TOGGLE string (upper to lower)(lower to upper)
#include<stdio.h>
void strToggleX(char str[])
{
	if(str==NULL)
	{
		return ;
	}
	while(*str!='\0')
	{
	if((*str>='a')&&(*str<='z'))
	
	{
		*str=*str-('a'-'A');
	}
		else if((*str>='A')&&(*str<='Z'))
		{
		*str=*str+('A'-'a');
	}

str++;
}
}

int main()
{
	char Arr[10];
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	strToggleX(Arr);
	printf("updated string is %s\n",Arr);
	return 0;
}
