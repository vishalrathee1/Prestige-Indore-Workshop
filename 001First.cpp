// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// for n == 5;
//
//6 basic instructions 
// input
// output
// Arithmetic operation
// assignment
// Conditional check'
// Repeat a set of instructions
//
// Pseudocode
// 1. Read N 
// 3. i = 1 //i am going to print 1st line
// 4. while i<=N do
//		j = 1
//		while j<=i do
//			Print '*'
//			j  <-- j+1
//		endWhile
//		Print '/n'
//		i <-- i + 1
//	  endWhile
//	i <-- N-1
//	while i>0 do
//		j = 1
//		while j<=i do
//			Print '*'
//			j  <-- j+1
//		endWhile
//		Print '/n'
//		i <-- i-1
//	endWhile
//
//
//
//	  if 'condition' then
//			code
//	  endif

#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int i = 1;

	//upper half
	while(i<=N){
		int j = 1;
		while(j<=i){
			cout<<'*';
			j++;
		}
		cout<<endl;
		i++;
	}
	i = i-2;
	while(i>0){
		int j = 1;
		while(j<=i){
			cout<<'*';
			j++;
		}
		cout<<endl;
		i--;
	}

	i = 1;
	while(i<=N){
		int j = 1;
		while(j<=i){
			cout<<'*';
			j++;
		}
		cout<<endl;
		i++;
	}

	return 0;
}



//1
//01
//101
//0101
//10101
//for n==5
//
//
//
