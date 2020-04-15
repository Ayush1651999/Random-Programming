#include<iostream>
using namespace std;


int main()
{
    int N;
    cin >>N;
    for(int n=0; n<N; n++){

        int L;
        cin>>L;
        int arr[L];
        int count = 0;

        for(int l=0; l<L; l++){
            cin>>arr[l];
        }

        int hash[4] = {0};

        for(int l=0; l<L; l++){
            int rem = arr[l]%4;

            if(rem){
                count+=hash[4-rem];
            }
            else{
                count+=hash[0];
            }
            hash[rem]+=1;
        }

        cout<< count<<endl;

        // for(int l=0; l<L; l++){
        //  cout<<100+arr[l]<<endl;
        // }
    }
}