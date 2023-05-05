#include<stdio.h>
const string;
int top=-1,size;
void push(const string) {
	if (top==size-1)
	{
		printf("Stack if full.Insertion are not possible\n");
	}
	else
	{
		top++;
		string[top]='{';
		printf("%d is inserted into stack\n",string);
	}
}
int pop
{
	if(top==-1)
	{
		return -1;
	}
	else
	{
		int rm=string[top];
		top--;
		return rm;
	}
}
int main()
{
	printf("Enter the size of the element: ");
	scanf("%d",&size);
	if(top==-1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
