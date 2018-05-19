//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
#include<iostream>

using namespace std;

int main()
{
  int  i, j, n, k, numbers[100], Pair_Sum = 0;
  cin >> n >> k;
for( i = 0; i < n; i++){
  cin >> numbers[i];
}
for( i = 0; i < n ; i++){
for(j = 0; j < n ; j++){
if(i < j){
if((numbers[i] + numbers[j]) % k == 0)
Pair_Sum++;
}
}
  cout << "j:"<<j<<endl;
}
cout << Pair_Sum<<endl;
}
