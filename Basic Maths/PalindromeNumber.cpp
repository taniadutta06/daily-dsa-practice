#include<bits/stdc++.h>
using namespace std;
int palindromenumber(int x)
{
    int digit , reverse=0;
    
    while(x>0)
    {
        digit=x%10;
        reverse=(reverse*10)+digit;
        x=x/10;
    }
    return reverse;
}
int main()
{
    int number;
    cout<<"Enter any number:";
    cin>>number;
    if(number==palindromenumber(number))
    {
        cout<<"It is a palindrome Number";
    }
    else
    {
        cout<<"It is not a palindrome Number";
    }
}