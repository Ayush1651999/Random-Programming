#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here

	int T; cin >> T;

	for(int i=0; i<T; i++){

		int M, x, y;
		cin >> M >> x >> y;

		int cop_home[M];
		int safe_for_thief = 0;

		for(int j=0; j<M; j++){
			cin>>cop_home[j];   // array containg the cops home index
		}
		for (int j =0; j<M; j++){
			cout << cop_home[j] << endl;
		} 


		vector<int> safe;      // contains indices of homes that are safe

		for(int k=0; k<10; k++){                 // for all the houses
			for(int j=0; j<M; j++){
				int low = (cop_home[j]-x*y);
				int high = (cop_home[j]+x*y);
              	
              	cout << "low "<< low << " high "<< high<< endl;

				if(low < k < high){              // if the house is in the range
					// if(std::count(safe.begin(), safe.end(), k) == 0){
						safe.push_back(k);                 // add it to the list, have ignored repeatitions as of now 
						cout << k << endl;
					// }
				}
			}

			for (std::vector<int>::const_iterator ii = safe.begin(); ii != safe.end(); ++ii){
				std::cout << *ii;
			}
			cout << endl;

			if(std::count(safe.begin(), safe.end(), k) == 0){
				safe_for_thief += 1;
				cout << k;
			}

		}
		cout << safe_for_thief << endl;
	}

	return 0;
}