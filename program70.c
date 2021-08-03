//accept n numbers from user & display all even numbers
#include<stdio.h>
#include<stdlib.h>
int DisplayEven(int Arr[],int iSize)
{
	int i=0;
	int iCnt=0;
	int Size=0;
		for(i=0;i<iSize;i++)
	{
		if((Arr[i]%2)==0)	
		{
			iCnt++;
		}
		
		
		}
  return iCnt;	
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
	iRet=DisplayEven(arr,iLength);
	printf("all even elements are %d",iRet);
	free(arr);
	return;
	
}
