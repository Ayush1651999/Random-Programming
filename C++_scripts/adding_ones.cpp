#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >>N;
	for(int n=0; n<N; n++){

		int L;
		cin>>L;
		int K;
		cin >>K;
		int arr[L] = {0};
		int arr_K[K];

		for(int l=0; l<K; l++){
			cin>>arr_K[l];

			for(int m=arr_K[l]-1; m<K; m++){
				arr[m]++;
			}
		}

		// cout<<add_ones(arr, L)<<endl;

		for(int l=0; l<L; l++){
			cout<<arr[l]<<endl;
		}
	}
}