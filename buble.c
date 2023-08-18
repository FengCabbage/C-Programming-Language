#include<stdio.h>


int buble(int arr[],int size) {
	for (int i = 0; i < size -1; i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
			
		}
	}


}

int main45() {
	int arr[10] = {1,6,5,4,7,8,9,3,2.5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	buble(arr,size);
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	//{
	//	printf("%d\n", arr[i]);
	//}



	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
}