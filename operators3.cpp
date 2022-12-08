#include<iostream>
using namespace std;
int main(){
    int a=5; //0101
    cout<<(a<<1)<<endl; //10
    cout<<(a>>1)<<endl; //2
    int b=8; //1000
    cout<<(b&a)<<endl; //0
    cout<<(b|a)<<endl; //13
    return 0;
}