#include<bits/stdc++.h>
using namespace std;
int countdigits(int n)
{
    int digit=0 , count=0;
       while(n>0)
       {
           digit=n%10;
           count++;
           n=n/10;
       }
     
    return count;
}
int main()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;
    cout<<"Number of digits:"<<countdigits(number);
}