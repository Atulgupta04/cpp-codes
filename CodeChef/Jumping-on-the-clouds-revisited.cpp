//https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
#include<iostream>

using namespace std;

int main()
{
int n, k, energy_level=100;
cin >> n >> k;
int c[n];
int i=0;
while(i<n)
{
  cin >> c[i];
  i++;
}
for(int i=0;i<n;i+=k)
{
  if(c[i]==1)
  energy_level-=3;
  else
  energy_level-=1;
}
cout<< energy_level;
}
