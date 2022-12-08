#include<iostream>
using namespace std;
int main(){
    char n; // similarly for all types it gives the byte size
    cout<<sizeof(n)<<endl;
    int num1=2, num2=5;
    bool flag;
    num1==num2? flag=true : flag=false;
    cout<<flag<<endl;
    cout<<&(num1)<<endl;
    int a=3;
    cout<<(a++)<<endl;
    cout<<a<<endl;
    
    return 0;
}