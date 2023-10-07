#include<iostream>
using namespace std;

//Pseudo code
//for(int i =0; i<n; i++){
//	int smallestValueIndex = i;
//	for(int j = i+1; j<n; j++){
//		if(arr[j] < arr[smallestValueIndex]){
//			smallestValueIndex = j;
//		}
//	}
//	swap(arr[i], arr[smallestValueIndex])
//}

void SelectionSort(int arr[], int n)
{
	for(int i =0; i<n; i++){
		int sVI = i;
		for(int j = i+1; j<n; j++){
			if(arr[j]<arr[sVI]){
				sVI = j;
			}	
		}
		//swap
		//int temp = arr[i];
		//arr[i] = arr[smallestValueIndex];
		//arr[smallestValueIndex] = temp;
		
		// swap arr[i] and arr[smallestValueIndex]
		// without using temp --> find correction in below code
		//arr[i] = arr[i] + arr[smallestValueIndex];
		//arr[smallestValueIndex] = arr[i] - arr[smallestValueIndex];
		//arr[i] = arr[i] - arr[smallestValueIndex];

		//third way of swapping
		//single line swap
		arr[i] = arr[i]+arr[sVI] - (arr[sVI]=arr[i]);
	}
}
int main(){
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	//selection sort
	int n = sizeof(arr)/sizeof(int);
	SelectionSort(arr, n);
	//printing sorted array
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	//assignment operator returns the value it assigns
	int a = 10;
	int b;
	cout<<(b=25)<<endl;
	return 0;
}
