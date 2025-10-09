#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout <<"Enter any letter: ";
    cin >> ch;
    if (ch=='a' || ch=='e'|| ch=='o' || ch=='i' || ch=='u'|| ch=='A' || ch=='E'|| ch=='O' || ch=='I' || ch=='U')
    {
        cout <<"Vowel";
    }
    else
    {
        cout << "Consonant";
    }
    return 0;
}