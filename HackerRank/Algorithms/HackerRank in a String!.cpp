//https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem
#include <iostream>

using namespace std;

int main() {
   int n;
    string s,word = "hackerrank";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        int r = 0;
        for(int j = 0; j < s.length(); j++){
            if(r < word.length() && word[r] == s[j])
                r++;
        }
        if(r == word.length())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
