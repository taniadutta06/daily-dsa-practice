#include<bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int reverse=0,digit;
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
    cout<<reverse(number);
}