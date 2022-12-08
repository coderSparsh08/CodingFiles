/* Calculate the sum of the
first and second last digit
of a 5 digit number*/
#include<iostream>
using namespace std;
int main(){
    int n, n1, n2, n3, n4, n5, sum;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    n1=n/10000;
    n=n%10000;
    n2=n/1000;
    n=n%1000;
    n3=n/100;
    n=n%100;
    n4=n/10;
    sum=n1+n4;
    cout<<"The sum of first & second last digit is : "<<sum<<endl;
    return 0;
}