//https://www.codechef.com/problems/FRK
#include<iostream>

using namespace std;

int main()
{
string arr[] = {"ch", "he", "ef", "che", "hef", "chef"};
int n,count = 0;
cin >> n;
while(n--){
string names;
cin >> names;
for(int i=0; i<6; i++){
if(names.size() >= 2 && names.find(arr[i]) != -1)
{
  count++;
  break;
}
}
}
cout <<count<<endl;
}
