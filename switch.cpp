#include<iostream>
using namespace std;
int main(){
    char vowel;

    cout<<"Enter a letter : ";
    cin>>vowel;     

    switch (vowel)
    {
    case 'a':
        cout<<"Entered character is a vowel"<<endl;
        break;

    case 'e':
        cout<<"Entered character is a vowel"<<endl;
        break;
    
    case 'i':
        cout<<"Entered character is a vowel"<<endl;
        break;
        
    case 'o':
        cout<<"Entered character is a vowel"<<endl;
        break;
        
    case 'u':
        cout<<"Entered character is a vowel"<<endl;
        break;

    default:
        cout<<"Entered number is a consonant"<<endl;
        break;
    }
    return 0;
}