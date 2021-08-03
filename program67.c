//accept n numbers from user & display even no.s from that
#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int Arr[],int iSize)
{
	int i=0;
	if((Arr==NULL)||(iSize<=0))
	{
		return;
	}
	for (i=0;i<iSize;i++)
	{
		if((Arr[i]%2)==0)
		{
	     printf("even elements are %d\n",Arr[i]);
	}
}
}
int main()
{

	int *arr=NULL;
		int iLength=0,i=0;
	printf("enter the number of elemnents\n");
	scanf("%d",&iLength);
	arr=(int*)malloc(iLength*sizeof(int));
	if(arr==NULL)
	{
		printf("unable to allocate memory\n");
    return -1;
	}
	printf("enter the elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	DisplayEven(arr,iLength);
	free(arr);
	return 0;
}
