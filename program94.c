//display reverse string

#include<stdio.h>
void Reverse(char str[])
{
	char *start,*end;
	char temp;
	if(str==NULL)
	{
		return;
	}
	start=str;
	end=str;
	 for(;*end!='\0';end++)
	{
		end++;
	}
	end--;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}
int main()
{
	char Arr[10];
	printf("enter strong\n");
	scanf("%[^'\n']s",Arr);
	Reverse(Arr);
	printf("updated stribg is %s\n",Arr);
	return 0;
	
	
	}
