//https://www.hackerrank.com/challenges/separate-the-numbers/problem
#include <iostream>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
		bool valid = false;
		long firstnum = -1;
		for (int i = 1; i <= s.length()/2; ++i) {
			long num = stol(s.substr(0,i));
			firstnum = num;
			string test = to_string(num);
			while (test.length() < s.length()) {
				test += to_string(++num);
			}

			if (test == s) {
				valid = true;
				break;
			}
		}
        valid ? cout << "YES " << firstnum << endl : cout <<"NO" << endl;
    }
}
x
