//https://www.hackerrank.com/challenges/grading/problem
#include<iostream>

using namespace std;

int main()
{
    int n, number, original_grade=0, final_grade=0,difference;
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> number;
      int division = number / 5;
      int next_div = division + 1;
       final_grade = next_div * 5;

        difference = final_grade - number;
      //cout << "final: " << final_grade*5<<endl;
    if(number <38){
      cout  << number<<endl;
      }
      else if(number%5 == 0){
        cout << number<<endl;
      }
      else if(difference < 3){
        cout  << final_grade<<endl;
      }
      else{
        cout << number<<endl;
      }
    }

}
