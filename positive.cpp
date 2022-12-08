#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a>0){
        cout<<a<<endl;      
    }   
    else if (a<=0)
    {
        cout<<"Entered number is not positive and is skipped"<<endl;
    }
    else{
        cout<<"Invalid Format !!"<<endl;
    }
    system("pause");           
    return 0;
}