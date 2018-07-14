//https://www.hackerrank.com/challenges/reduced-string/problem
#include<iostream>

using namespace std;

int main() {

 string s;
 cin >> s;
 int len = s.length();
 for(int i = 0; i < len;){
        if(s[i] == s[i+1] && i > -1){
            s.erase(i,2);
            i--;
        }
        else i++;
 }

 if(!s.empty())cout << s << endl;
 else cout << "Empty String" << endl;
 return 0;

}
