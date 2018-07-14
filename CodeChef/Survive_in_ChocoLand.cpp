//https://www.codechef.com/problems/SURVIVE
#include<iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n, k, s, sum;
    cin >> n >> k >> s;
    int total = k*s;
    int open_days = (s-(s/7))*n;
    if(open_days >= total){
      sum = total/n;
        if(total%n == 0){
          cout<<sum<<endl;
        }
        else{
          cout<<sum+1<<endl;
        }
    }
    else{
      cout << "-1"<<endl;
    }
}
}
