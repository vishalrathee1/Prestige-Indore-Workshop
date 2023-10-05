#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	//rows loop
	for(int i = 1;i<=N; i++){
		//for spaces
		for(int spaces = 1; spaces<=N-i; spaces++){
			cout<<" ";
		}
		//for stars
		for(int stars = 1; stars<=2*i-1; stars++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	//for rows
	for(int row = 1;row<=N; row++){
		//for spaces
		for(int spaces = 1; spaces<=N-row; spaces++){
			cout<<" ";
		}
		//for numbers
		//increasing
		for(int num = 1; num<=row; num++){
			cout<<num;
		}
		//decreasing
		for(int num = row-1; num>=1; num--){
			cout<<num;
		}
		cout<<endl;
	}
	//pattern mirroring
	for(int row = N-1;row>=1; row--){
		//for spaces
		for(int spaces = 1; spaces<=N-row; spaces++){
			cout<<" ";
		}
		//for numbers
		//increasing
		for(int num = 1; num<=row; num++){
			cout<<num;
		}
		//decreasing
		for(int num = row-1; num>=1; num--){
			cout<<num;
		}
		cout<<endl;
	}


	return 0;
}


//
//   1
//  121
// 12321
//1234321
