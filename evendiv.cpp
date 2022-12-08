#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Number : "<<endl;
    cin>>num;
    (num%2==0 && num%3==0)? cout<<"The number is divisible by 2 & 3"<<endl : cout<<"The number isn't divisible by 2 & 3"<<endl;
    return 0;
}