#include<iostream>
using namespace std;

//1
//01
//101

int main(){
	int N; 
	cin>>N;
	int i = 0;
	while(i<=N){
		int j = 1;
		while(j<=i){
			if((i+j)%2==0) cout<<1;
			else cout<<0;
			j++;
		}
		cout<<endl;
		i++;
	}
	for(int i = 1; i<=N; i++){
		for(int j = 1; j<=i; j++){
			if((i+j)%2==0) cout<<1;
			else cout<<0;
		}
		cout<<endl;
	}
	
	//char c = 65;
	//cout<<c<<endl;
	
	int var = A;
	cout<<var<<endl;
	return 0;
}

//N == 5
//    1
//   121
//  12321
// 1234321
//123454321
// 1234321
//  12321
//   121
//    1
// 
// N == 4
//  *******
//   *   *
//    * *
//     *
//	  ***
//   *****
//  ******* 
