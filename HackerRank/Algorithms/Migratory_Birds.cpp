//https://www.hackerrank.com/challenges/migratory-birds/problem
#include<iostream>

using namespace std;

int main()
{
int i, n, numbers, bird_1=0, bird_2=0, bird_3=0, bird_4=0, bird_5=0;
cin >> n;
for(i = 0; i < n; i++){
    cin >> numbers;
    if (numbers == 1){
      bird_1++;
    }
    if (numbers == 2){
      bird_2++;
    }
    if (numbers == 3){
      bird_3++;
    }
    if (numbers == 4){
      bird_4++;
    }
    if (numbers == 5){
      bird_5++;
    }
}
if (bird_1 > bird_2 && bird_1 > bird_3 && bird_1 > bird_4 && bird_1 > bird_5){
  cout << "1";
}
else if (bird_2 > bird_1 && bird_2 > bird_3 && bird_2 > bird_4 && bird_2 > bird_5){
  cout << "2";
}
else if (bird_3 > bird_2 && bird_3 > bird_1 && bird_3 > bird_4 && bird_3 > bird_5){
  cout << "3";
}
else if (bird_4 > bird_2 && bird_4 > bird_3 && bird_4 > bird_5 && bird_4 > bird_1){
  cout << "4";
}
else if(bird_5 > bird_1 && bird_5 > bird_4 && bird_5 > bird_3 && bird_5 > bird_2){
   cout << "5";
}
}
