#include<iostream>
using namespace std;
int main(){
    int num1=6, num2=3;

    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1%num2<<endl; 

    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>=num2)<<endl;
     
     num1+=3;
     cout<<num1<<endl;
     num2-=2; // similarly *= and /= operators are also present.
     cout<<num2<<endl;
             
    return 0;
}