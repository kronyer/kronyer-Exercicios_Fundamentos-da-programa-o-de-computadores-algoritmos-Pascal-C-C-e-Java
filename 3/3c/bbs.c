#include <stdio.h>

void bubbleSort(int arr[], int n)
{
	for (int i =0; i<n-1; i++)
	{
		for (int j =0; j<n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int aux = arr[j];
				arr[j] = arr[j+1];
                arr[j+1] = aux;
			}
		}
	}
}

void bbs(int arr[], int n)
{
	for (int i = 0 ; i< n -1; i++)
	{
		for (int j =0; j< n - i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
	}
}

int main (){
    int arr[] = {90, 44, 77, 102, 101, 55, 33, 22, 11, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}