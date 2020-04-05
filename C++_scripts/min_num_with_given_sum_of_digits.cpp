#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//problem statetment : smallest number with sum of digits 'N' and divisible by 10^N

int sumN(int N){

	if(N==0){
		cout<<0<<endl;
	}

	if(N%9!=0){
		cout << N%9;
	}

	for(int i =0; i<(N/9); i++){
		cout << 9;
	}

	for(int i=0; i<N; i++){
		cout<<0;
	}


}

int main(){

	int N;
	cin >> N;

	sumN(N);

	return 0;
}