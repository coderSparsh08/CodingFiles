#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the values of a and b respectively-";
    cin>>a>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"After swap"<<endl<<"a:"<<a<<endl<<"b:"<<b;
    return 0;
}