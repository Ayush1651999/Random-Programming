#include <bits/stdc++.h>
using namespace std;
#include<string>

int sum_of_nonzero(int array[], int size)
{
	int sum = 0;

	for(int i=0; i<26; i++){
		if(array[i]>0){
			sum+=array[i]-1;
		}
	}
	return sum;
}

int main()
{
	int T;
	cin >>T;

	for(int t=0; t<T; t++){
		string str;
		cin>>str;

		int freq[26] = {0};
		for(int i=0; i<str.length(); i++){
			int x = str[i];
			freq[x-97]++;
		}

		// for(int i=0; i<26; i++){
		// 	cout<<freq[i];
		// }

		cout<<sum_of_nonzero(freq, 26)<<endl;
	}
	
	// cout << '\n';
	return 0;
}