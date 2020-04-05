#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main(){

	int T; cin >> T;

	for(int i =0; i<T; i++){
		string str;
		cin >> str;

		int l = str.size();

		string str1, str2;

		if(l%2==0){
			str1 = str.substr(0,(l/2));
			str2 = str.substr((l/2),(l/2));
		}
		else{
			int k = floor(l/2);
			str1 = str.substr(0,k);
			str2 = str.substr((k+1),k);
		}

		int dist1[26] = {0};
		int dist2[26] = {0};

		for(int j =0; j<floor(l/2); j++){

			int k = (int)str1[j];
			dist1[k-97] = dist1[k-97] +1;

			k = (int)str2[j];
			dist2[k-97] = dist2[k-97] +1;
		}

		bool lapindromes = 1;
		for(int j =0; j<26; j++){
			if(dist1[j]!=dist2[j]){
				lapindromes = 0;
				break;
			}
		}

		if(lapindromes){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}