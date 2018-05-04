//https://www.hackerrank.com/challenges/the-hurdle-race/problem
#include<iostream>

using namespace std;

int main(){
  int n, k, heights, max_heights=0;
  cin >> n >> k;
  for(int i=0; i<n; i++){
    cin >> heights;
    if(heights > max_heights){
      max_heights = heights;
    }
}
cout << (max_heights <= k ? 0 : max_heights - k) << '\n';
}
