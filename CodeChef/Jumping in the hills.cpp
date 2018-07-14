//https://www.codechef.com/problems/HILLS
#include<iostream>

using namespace std;

int main()
{
  int t; cin >>t;
  while(t--){
    int n,u,d;
    cin >> n >> u >> d;
    int h[100] = {0};
    for(int j=0; j<n; j++){
      cin >> h[j];
    }
    int f=0;
    int j;
    for(j=1; j<n; j++){
      int a = h[j-1];
      int b = h[j];
      if(b-a < 0 && a-b > d){
        if(f == 0)
          f = 1;
        else
          break;
      }
      else if(b-a > u)
      break;
    }
    cout << "j:"<<j<<endl;
  }
}
