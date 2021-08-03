//accept n numbers from user & display first occurence of number
#include<stdio.h>
#include<Stdlib.h>
int FirstOccurence(int Arr[],int iSize,int iValue)
{
	int i=0;
	int iPos=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iValue)
		{
			
			iPos=i;
			break;
		}
}
	if(i==iSize)
	{
		return -1;
	}
	else
	{
		return iPos;
	}
}
int main()
{
	int *arr=NULL;
	int i=0,iLength=0,iRet=0,iNo=0;
	printf("enter number of elements\n");
	scanf("%d",&iLength);
	arr=(int*)malloc(iLength*sizeof(int*));
	printf("enter the elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element that you want to search\n");
	scanf("%d",&iNo);
	iRet=FirstOccurence(arr,iLength,iNo);
	if(iRet==-1)
	{
		printf("there is no such number\n");
	}
	else
	{
		printf("first occurence is at %d\n",iRet);
	}
	free(arr);
	return 0;
}
