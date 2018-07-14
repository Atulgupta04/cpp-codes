//https://www.hackerrank.com/challenges/strange-advertising/problem
#include<iostream>

using namespace std;

int main() {
    int n,k=5,sum=0;
    cin >> n;
    while(n--)
    {
        sum+= k/2 ;
        k= k/2 * 3 ;
    }
    cout << sum;
}
