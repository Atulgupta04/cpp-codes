//https://www.hackerrank.com/challenges/apple-and-orange/problem
#include<iostream>

using namespace std;

int main()
{
    int s, t, a, b, m, n, count_apple=0, count_orange=0, number;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    for(int i=0; i<m;i++){
      cin >> number;
      if(a + number >= s && a + number <=t){
         count_apple++;
      }
    }
    cout << "apple:"<< count_apple<<endl;
    for(int o=0; o<n;o++){
        cin >> number;
        if(b + number >= s && b + number <=t){
           count_orange++;
        }
    }
    cout << "orange:"<< count_orange<<endl;
}
