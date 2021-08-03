//convert upper character to lower from string
#include<stdio.h>
void strlwrX(char str[])
{
	/*if(str==NULL)
	{
		return 0;
		
	}*/
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			
			*str=*str+32;
		}
		str++;
		
			}
}


int main()
{
	char Arr[10];
	int iRet=0;
	printf("enter string");
	scanf("%[^'\n']s",Arr);
    strlwrX(Arr);
	printf("updated string is %s\n",Arr);
	return 0;	
	
	
	
	}
