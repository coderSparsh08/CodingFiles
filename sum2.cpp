#include<iostream>
using namespace std;
int main(){
    int n, first, second, third, sum;
    cout<<"Number: "<<endl;
    cin>>n;
    first=n/100;
    n=n%100;
    second=n/10;
    n=n%10;
    third=n;
    sum=first+second+third;
    cout<<"Sum : "<<sum<<endl;        
    return 0;
}