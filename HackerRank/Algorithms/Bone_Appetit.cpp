//https://www.hackerrank.com/challenges/bon-appetit/problem
#include<iostream>

using namespace std;

int main()
{
 int n, k;
    cin>>n>>k;
    int amount = 0;
    for(int i = 0; i<n; i++)
    {
        int cost;
        cin>>cost;
        if(i!=k)amount+=cost;
    }
    int check;
    cin>>check;
    if(check!=amount/2)
    {
        cout<<check-amount/2;
    }
    else cout<<"Bon Appetit";
    return 0;
}
