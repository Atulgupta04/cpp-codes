//https://www.hackerrank.com/challenges/sock-merchant/problem
#include<iostream>

using namespace std;

int main()
{
  int n, i, count = 0;
  cin >> n;
   int color_socks[n];
   int socks_sold[n] = {0};
  for(i = 0; i < n;i++){
    cin >> color_socks[i];
  }
  for (i = 0; i < n-1; i++){
    if (socks_sold[i] == 1){
    continue;
  }
    for(int j = i+1; j <= n-1;j++){
      if(color_socks[i] == color_socks[j] && socks_sold[j] == 0){
        socks_sold[i] = 1;
        socks_sold[j] = 1;
        count++;
        break;
      }
    }
  }
  cout <<count;
}
