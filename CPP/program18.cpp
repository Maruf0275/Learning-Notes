#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter a letter: ";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"Vowel";
            break;
        default:
            cout<<"Consonant";
    }
    return 0;
}