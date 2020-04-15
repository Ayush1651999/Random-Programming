#include <bits/stdc++.h>
using namespace std;

int divisible_by_4(int array[], int size){

	int divisible = 0;
	for(int i=0; i<size; i++){

		for(int j=i+1; j<size; j++){

			int remainder = (array[i]+array[j])%4;

			if(!remainder){
				divisible+=1;
			}
		}
	}
	return divisible;
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

		cout<<divisible_by_4(arr, L)<<endl;

		// for(int l=0; l<L; l++){
		// 	cout<<100+arr[l]<<endl;
		// }
	}
}