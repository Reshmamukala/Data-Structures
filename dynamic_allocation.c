#include<stdio.h>
#include<stdlib.h> //malloc
int main()
{
	int n=5,i;
	int *arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	/*int arr[]={10 , 20 , 30 , 40 , 50};  1000
	array name itself acts as a pointer
	points to first element in array*/
	for (i=0;i<5;i++)
	{
		printf("%d ",  *(arr+i));
	}
}
