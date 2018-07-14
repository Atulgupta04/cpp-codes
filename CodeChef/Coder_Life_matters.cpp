//https://www.codechef.com/problems/CODERLIF
#include<iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    bool flag=0;
    int arr[30], count=0;
    for(int i=0; i<30;i++){
      cin >> arr[i];
      if(arr[i] == 0){
        count=0;
      }
      else{
        count++;
      }
  if(count > 5){
    flag=1;
  }
  }
  if(flag){
    cout <<"#coderlifematters"<<endl;
  }
  else {cout<<"#allcodersarefun"<<endl;}
}
}
