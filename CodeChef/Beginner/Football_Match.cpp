//https://www.codechef.com/problems/FBMT
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int n, count1, count2, i;
      count1 = count2 = 0;
      cin>>n;
      string team1,team2,teams;
      for(i=1;i<=n;i++){
        cin>>teams;
        if(i == 1){
          team1 = teams;
          count1++;
          continue;
       }
        if(team1 != teams){
          team2 = teams;
          count2++;
        }
        else
         count1++;
      }
      if(count1==count2)
        cout<<"Draw"<<endl;
      else if(count1>count2)
        cout<<team1<<endl;
      else
        cout<<team2<<endl;
    }
    return 0;
}
