//https://www.codechef.com/problems/BIGSALE
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int t,n,i;
    double amount, sum, price, quantity, discount;
    double loss;
    cin >> t;
    while(t--)
    {   loss=0;
        cin >> n;
        for(i=0;i<n;i++)
        {   sum=0;
            cin >> price >> quantity >> discount;
            amount = price;
            price +=(price*discount/100);
            sum = (price*discount)/100;
            sum = amount-(price-sum);
            loss += (sum*quantity);
        }
    cout << setprecision(11)<<loss << endl;
    }
return 0;
}
