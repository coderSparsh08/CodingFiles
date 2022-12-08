#include<iostream>
using namespace std;
int main(){
    float num1, num2;
    char op;
    cout<<"Enter any two numbers in order :";
    cin>>num1>>num2;
    cout<<"Enter an operator : ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"The addition of the two numbers gives us "<<num1+num2<<endl;
        break;
    
    case '-':
        cout<<"The subtraction of the two numbers gives us "<<num1-num2<<endl;
        break;

    case '/':
        cout<<"The division of the two numbers gives us "<<num1/num2<<endl;
        break;

    case '*':
        cout<<"The multiplication of the two numbers gives us "<<num1*num2<<endl;
        break;

    default:
        cout<<"INVALID OPERATOR !!"<<endl;
        break;
    }
    system("pause");
    return 0;
}