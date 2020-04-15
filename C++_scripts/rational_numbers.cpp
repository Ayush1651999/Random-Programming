#include <bits/stdc++.h>
using namespace std;

int abs(int x){
    if(x<0) return -x;
    else return x;
}
struct sample {
    int aa, bb;
};

int exact(int a, int b){
   if(a%b==0) return b;
   int n=a%b;
   if(b%n==0) return n;
   else return exact(b,n);
}

void reduce(sample& rt1) {
    int st1 = exact(abs(rt1.aa), rt1.bb);
    rt1.aa = rt1.aa/st1;
    rt1.bb = rt1.bb/st1;
    if(rt1.bb < 0) {
         rt1.aa= -rt1.aa;
         rt1.bb= -rt1.bb;
    }
}

sample action1(sample a1, sample b1) {
    sample c1;
    c1.aa = a1.aa*b1.bb + b1.aa*a1.bb;
    c1.bb = a1.bb*b1.bb;
    reduce(c1); 
    return c1;
}

sample action2(sample a1, sample b1) {
    sample c1;
    c1.aa = a1.aa*b1.aa;
    c1.bb = a1.bb*b1.bb;
    reduce(c1);
    return c1;
}

int main(){
    sample num1, num2;
    cin >> num1.aa >> num1.bb >> num2.aa >> num2.bb;
    reduce(num1);
    reduce(num2);
    // cout << num1.aa << " " << num1.bb << " " << num2.aa << " " << num2.bb<<endl;
    int output1=action2(num1,num2).aa;
    int output2=action2(num1,num2).bb;
    int output3=action1(num1,num2).aa;
    int output4=action1(num1,num2).bb;

    cout << output1 << " "<<output2 <<" "<<output3<<" "<<output4<<endl;
    return 0;
}