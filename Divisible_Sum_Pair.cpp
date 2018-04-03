//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
#include<iostream>

using namespace std;

int main()
{
  int  i, n, k, numbers[100], Pair_Sum = 0;
  cin >> n >> k;
for( i = 0; i < n; i++){
  cin >> numbers[i];
}
for( i = 0; i < n ; i++){
for(int j = 0; j < n ; j++){
if(i < j){
if((numbers[i] + numbers[j]) % k == 0)
Pair_Sum++;
}
}
}
cout << Pair_Sum<<endl;
}
