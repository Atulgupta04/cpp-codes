//https://www.hackerrank.com/challenges/pangrams/problem
#include <iostream>

using namespace std;

int main() {
string s;
getline(cin, s);
int alphabet[26];
int alphabetTab=0;
int flag=0;
for(int i=0;i<26;i++){
    alphabet[i]=0;
}
for(int i=0;i<s.length();i++){
		int small_alphabet = (tolower(s[i]) - 'a');
    if(small_alphabet < 0 || small_alphabet > 25){
    continue;
}
  if(alphabet[small_alphabet] == 0){
    alphabetTab++;
}
  if(alphabetTab >= 26){
    flag=1;
    break;
}
  else{
    alphabet[small_alphabet]++;
  }
}
if(flag){
  cout <<"pangram"<<endl;
}
else{
  cout<<"not pangram"<<endl;
}
}
