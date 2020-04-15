#include <bits/stdc++.h>
using namespace std;

int zero_XORs(int array[], int size){

	int zero_XOR = 0;
	for(int i=0; i<size; i++){

		for(int j=i+1; j<size; j++){

			if(array[i] == array[j]){
				zero_XOR+=1;
			}
		}
	}
	return zero_XOR;
}

int main()
{
	int N;
	cin >>N;
	for(int n=0; n<N; n++){

		int L;
		cin>>L;
		int arr[L];

		for(int l=0; l<L; l++){
			cin>>arr[l];
		}

		cout<<zero_XORs(arr, L)<<endl;

		// for(int l=0; l<L; l++){
		// 	cout<<100+arr[l]<<endl;
		// }
	}
}