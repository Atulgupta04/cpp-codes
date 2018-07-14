//https://www.hackerrank.com/challenges/camelcase/problem
#include<iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int words=1;
  int len = s.size();
  for(int i=0; i<len;i++){
    if(s[i]>= 'A' && s[i]<='Z'){
      words++;
    }
  }
  cout <<words;
}
