//https://www.codechef.com/problems/CHEFCHR
#include<iostream>

using namespace std;

int main()
{
  int T, i, count;
  cin >> T;
  while(T--){
    string s;
    cin >> s;
    int n = s.size();
    int total = 0;
    for(i=0; i<n-3; i++){
       count = 0;
       if(s[i]=='c' || s[i]=='h' || s[i]=='e' || s[i]=='f'){
         count++;
  if ((s[i+1]=='c' || s[i+1]=='h' || s[i+1]=='e' || s[i+1]=='f') && (s[i+1]!=s[i])){
    count++;
  if ((s[i+2]=='c' || s[i+2]=='h' || s[i+2]=='e' || s[i+2]=='f') && (s[i+2]!=s[i+1]) && (s[i+2]!=s[i])){
    count++;
    if ((s[i+3]=='c' || s[i+3]=='h' || s[i+3]=='e' || s[i+3]=='f') && (s[i+3]!=s[i+2])&& (s[i+3]!=s[i+1])&& (s[i+3]!=s[i])){
      count++;
}}}}
if(count == 4)
  total++;
}
if(total > 0){
  cout<<"lovely"<<" "<<total<<endl;
}
else{
  cout<<"normal"<<endl;
}
}
}
