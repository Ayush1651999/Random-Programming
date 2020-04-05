#include <iostream>
using namespace std;

int arr_sum(int arr[], int n)
{   
    int sum=0;
    
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    
	for(int i=0;i<T;i++){  
	    
	    int num_ele,total_cand;
	    cin>>num_ele>>total_cand;
	    
	    int arr[num_ele];
	    for(int j=0;j<num_ele;j++){ 
	        cin>>arr[j];
	     }
	 
	    
	bool x=(arr_sum(arr,10))>total_cand;
	
    if(x){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
	    
	}
	return 0;
}
