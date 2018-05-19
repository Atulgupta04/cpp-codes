//https://www.hackerrank.com/challenges/utopian-tree/problem
#include<iostream>

using namespace std;

int main(){
int T,height,i,j;
 cin >> T;
 int N;
 for(i=0;i<T;i++){
     cin >> N;
     height=1;
     if(N!=0){
     for(j=1;j<=N;j++) {
         if(j%2!=0){
             height=2*height;
         }
         else{
             height=height+1;
     }}}
     cout << height<<endl;
 }}
