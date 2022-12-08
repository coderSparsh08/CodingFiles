#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your marks : ";
    cin>>a;
    if (a>=90){
        cout<<"A+"<<endl;
    }
    else if (a>=80)
    {
        cout<<"A"<<endl;
    }
    else if (a>=70)
    {
        cout<<"B+"<<endl;
    }
    else if (a>=60)
    {
        cout<<"B"<<endl;
    }
    else if (a>=50)
    {
        cout<<"C"<<endl;
    }
    else if (a>=40)
    {
        cout<<"D"<<endl;
    }
    else if (a>=30)
    {
        cout<<"E"<<endl;
    }
    else if (a<=30)
    {
        cout<<"F"<<endl;
    }
    else{
        cout<<"Enter valid marks !!"<<endl;
    }
    system("pause");
    
    return 0;
}