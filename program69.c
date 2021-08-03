//accept n numbers from user & display sum of even numbers
#include<stdio.h>
#include<stdlib.h>
int DisplaySumEven(int Arr[],int iSize)
{
	int i=0;
	int Size=0;
	int iSum=0;

	for(i=0;i<iSize;i++)
	{
		if((Arr[i]%2)==0)	
		{
			iSum=iSum+Arr[i];
		}
		
		
		}
		return iSum;
}
int main()
{
	int *arr=NULL;
	int iLength=0,i=0,iRet=0;
	printf("enter number of elements\n");
	scanf("%d",&iLength);
	arr=(int*)malloc(iLength*sizeof(int*));
	printf("enter the elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	iRet=DisplaySumEven(arr,iLength);
	printf("sum of all even elements are %d",iRet);
	free(arr);
	return;
	
}
