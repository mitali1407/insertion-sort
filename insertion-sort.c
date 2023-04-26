#include <windows.h>

#include<stdio.h>
void Bubblesort(int [],int);

void InsertionSort(int [],int);
int main()
{
	int arr[5]={9,5,1,4,3};
    printf("the sorted list is:\n");
	InsertionSort(arr , 5);
    return 0 ;
}
	
	void InsertionSort(int arr[],int n)
	{
		int i,j,small,k;
		for(i=1;i<n;i++)
		{
			small=arr[i];
			for(j=i-1;j>=0 && small<arr[j-1];j--)
			{
				arr[j]=arr[j-1];
			}
			arr[j]=small;
		}
	
	for (k=0;k<n;k++)
	{
		printf("%d ",arr[k]);
	}
}
