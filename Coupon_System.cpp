//https://www.codechef.com/problems/COUPSYS
#include<iostream>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;
cin >> n;
int coupon[4] ={};
int city[4] ={};
for(int i=0; i<n; i++){
  int  c, l, x;
  cin >> c >> l >> x;
  if(x > coupon[l]){
    coupon[l] = x;
    city[l] = c;
  }
  if(x == coupon[l] && city[l] > c)
    city[l] = c;
}
for(int i=1; i<4; i++){
  cout << coupon[i] << " "<< city[i]<<endl;
}
}
}
