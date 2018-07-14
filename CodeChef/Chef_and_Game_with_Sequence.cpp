//https://www.codechef.com/problems/L56GAME
#include<iostream>

using namespace std;

int main()
{
int t, i;
cin >> t;
while(t--)
{
int n, flag=0;
cin >> n;
int number[n];
for(i=0; i<n; i++){
  cin >> number[i];
  if(number[i]%2 == 1)
    flag++;
}
if(flag%2 == 0)
cout <<"1"<<endl;
else
cout<<"2"<<endl;
}
}
