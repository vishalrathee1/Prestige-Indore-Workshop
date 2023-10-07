#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
	for(int i =1; i<n; i++){
		//int j = i-1;
		//while(j>=0 and arr[j]>arr[j+1]){
		//	arr[j] = arr[j] + arr[j+1] - (arr[j+1] = arr[j]);
		//	j--;
		//}
		for(int j = i-1; j>=0; j--){
			if(arr[j]>arr[j+1]){
				arr[j] = arr[j] + arr[j+1] - (arr[j+1] = arr[j]);
			}
			else{
				break;
			}
		}
	}
}

int main(){
	int arr[] = {5,2,1,4,3};
	int n = sizeof(arr)/sizeof(int);
	insertionSort(arr, n);
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	return 0;

}
