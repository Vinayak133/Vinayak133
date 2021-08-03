//convert lower  character to upper from string
#include<stdio.h>
void struprX(char str[])
{
	/*if(str==NULL)
	{
		return 0;
		
	}*/
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			
			*str=*str-32;
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
    struprX(Arr);
	printf("updated string is %s\n",Arr);
	return 0;	
	
	
	
	}
