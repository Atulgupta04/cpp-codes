//https://www.hackerrank.com/challenges/find-digits/problem
#include <iostream>

using namespace std;

int main(){
int T;
cin >> T;
for(int t = 0; t < T; t++){
int n;
cin >> n;
int temp = n, count = 0;
while(temp!=0){
int r = temp % 10;
if(r !=0 && n%r == 0)
count++;
temp/=10;
}
cout << count << endl;
}
return 0;
}
