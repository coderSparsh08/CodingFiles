#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num; 
    while(num<=10000000){
        cout<<num<<endl;
        num++;
    }
    return 0;
}