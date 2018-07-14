//https://www.hackerrank.com/challenges/angry-professor/problem
#include<iostream>

using namespace std;

int main(){
int T;
cin >> T;
for(int i=0;i<T;i++){
  int n, k, count_students=0;
  cin >> n >> k;
  for(int j=0;j<n;j++){
    int students;
    cin >> students;
    if(students <= 0){
      count_students++;
    }
  }
  if(count_students>= k){
    cout << "NO"<<endl;
  }
  else {
    cout << "YES"<<endl;
  }
}
}
