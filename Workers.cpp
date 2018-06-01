//https://www.codechef.com/problems/CHEFWORK
#include <iostream>

using namespace std;

int main()
{
  int n, i, total_min1=10000, total_min2=100000, total_min3=100000;
	cin>>n;
  int coins[n], worker[n];
  for(i=1; i<=n; i++){
    cin >> coins[i];
  }
  for(i=1;i<=n;i++){
    cin >> worker[i];
    if(worker[i] == 1){
      if(coins[i] < total_min1)
        total_min1 = coins[i];
      }
      if(worker[i]==2)
      {
          if(coins[i]<total_min2)
          total_min2=coins[i];
      }
      if(worker[i]==3)
      {
          if(coins[i]<total_min3)
          total_min3=coins[i];
      }}
      if(total_min1+total_min2<total_min3)
        cout<<total_min1+total_min2<<endl;
      else
          cout << total_min3<<endl;
