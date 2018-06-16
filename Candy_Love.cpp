//https://www.codechef.com/problems/CNDLOVE
#include<iostream>

using namespace std;

int main()
{
  int T, sum=0, sammy=0, simmy=0;
  cin >> T;
  while(T--){
    int n;
    cin >> n;
    int candies[n];
    for(int i=0; i<n;i++){
      cin >> candies[i];
      sum += candies[i];
    }
    simmy = abs(sum/2);
    sammy = sum - simmy;
    if(sammy > simmy && sammy - simmy == 1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
}
}
