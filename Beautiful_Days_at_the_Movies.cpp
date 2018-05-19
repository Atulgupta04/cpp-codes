//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
#include<iostream>

using namespace std;

int main(){
int i, j, k, movies_day=0, rem;
cin >> i >> j >> k;
for(i; i<j; i++){
  int a=i, rev_num=0;
  while(a!=0){
    rem = a%10;//logic to reverse an integer
    rev_num = rev_num*10 + rem;
    a/=10;
}
  if(abs(i-rev_num)%k==0){
  movies_day= movies_day+1;

  }
}
cout << movies_day<<endl;
}
