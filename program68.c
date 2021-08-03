//accept n numbers from user & display sum of all numbers
#include<stdio.h>
#include<stdlib.h>
int DisplaySum(int Arr[],int iSize)
{
	int i=0,iSum=0;

	for(i=0;i<iSize;i++)
	{
		
			iSum=iSum+(Arr[i]);
			
		}
		return iSum;
	}
int main()
{
	int *arr=NULL;
	int iLength=0,i=0,iRet=0;
	printf("enter number of elwements\n");
	scanf("%d",&iLength);
	arr=(int*)malloc(iLength*sizeof(int));
	if((arr==NULL)||(iLength<0))
	{
		printf("unable to allocate memory\n");
	}
	printf("enter the lements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	iRet=DisplaySum(arr,iLength);
	printf("sum, is %d  ",iRet);
	free(arr);
	return;
	
		}
