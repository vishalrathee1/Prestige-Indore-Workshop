#include<iostream>
using namespace std;

//Bubble Sort
// Pseudocode
//	for(int i =0; i<n-1; i++){
// sending 1 element to its true position
// for(int j = 0; j<n-1; j++){
//		if(arr[j]>arr[j+1]){
//			swap(arr[j], arr[j+1]);
//		}
// }
// }
//

void bubbleSort(int arr[], int n){
	//sending n-1 elements to their true positions
	for(int i =0; i<n-1; i++){
		//sends 1 element to its true position
		for(int j = 0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				arr[j] = arr[j]+arr[j+1] - (arr[j+1] = arr[j]);
			}
		}
	}
}

int main(){
	int arr[] = {5,2,1,4,3};
	int n = sizeof(arr)/sizeof(int);
	bubbleSort(arr, n);
	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;
	return 0;
}
