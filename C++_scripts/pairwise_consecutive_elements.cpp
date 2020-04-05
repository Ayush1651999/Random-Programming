//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
bool pairWiseConsecutive(stack<int> s);
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	    /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// your task is to complete the function
// function should return true/false or 1/0

bool con(stack<int> s_)
{
    //considering we have a stack of even size
    int l = s_.size()/2;
    bool cond = true;
    stack<int> s = s_;

    for(int i =0; i<l; i++){

        int x = s.top(); s.pop();
        int y = s.top(); s.pop();

        cond *= (abs(x-y)==1);
    }
    return cond;
}

bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    bool condition;

    if((s.size())%2 !=0){
        int x = s.top(); s.pop();
        condition = con(s);
        s.push(x);
    }
    else{
        condition=con(s);
    }

    return condition;

}