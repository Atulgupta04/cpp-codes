//https://www.codechef.com/problems/CHEGLOVE
#include<iostream>

using namespace std;

int main()
{
int t;
cin >> t;
while(t--)
{
long long int n;
cin >> n;
unsigned int l[n],g[n];
int count1 = 1, count2 = 1;
for(int i=0; i<n; i++){
  cin >> l[i];
}
for(int i=0; i<n; i++){
   cin >> g[i];
}
for(int i=0,j=n-1; i<n; i++,j--){
  if(l[i] > g[i]){
    count1 = 0;
  }
  if(l[i] > g[j]){
    count2 = 0;
  }
}
if(count1 == 1 && count2 == 1){
cout<<"both"<<endl;}
else if(count1 == 1){
cout<<"front"<<endl;}
else if(count2 == 1){
cout << "back"<<endl;}
else
cout << "none"<<endl;
}
}
