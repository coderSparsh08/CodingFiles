#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;
    if (age<2){
        cout<<"Infant"<<endl;
    }   
    else if (age<13){
        cout<<"Kid"<<endl;
    }
    else if (age<20){
        cout<<"Teenager"<<endl;
    } 
    else{
        cout<<"Adult"<<endl;
    }
    return 0;
}