
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){

    int n;
    cout<<"Enter number of Elements..."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in an array..."<<endl;
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }
    cout<<"After Sorting array..."<<endl;
    selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}

