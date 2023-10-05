#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	//upper part of hourglass
	for(int row = 1; row<=N; row++){
		//spaces
		for(int spaces = 1; spaces <=row-1; spaces++){
			cout<<" ";
		}
		//stars
		for(int stars = 1; stars<=(N-row)*2+1; stars++){
			if(row == 1 || stars == 1 || stars == (N-row)*2+1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}

	for(int row = N-1; row>=1; row--){
		//spaces
		for(int spaces = 1; spaces <=row-1; spaces++){
			cout<<" ";
		}
		//stars
		for(int stars = 1; stars<=(N-row)*2+1; stars++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

// for n == 4
// *******
//  *###*
//   *#*
//    *
//   ***
//  *****
// ******* 
