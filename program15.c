//accept a number & display of that number
#include<stdio.h>
int factors(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<iNo/2;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
	}
}



int main()
{
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	factors(iValue);
	return 0;
}
