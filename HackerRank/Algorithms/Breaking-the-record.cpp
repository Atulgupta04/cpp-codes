//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
#include<iostream>

using namespace std;

int main()
{
  int n, max_count = 0, highest_score, lowest_score, score, min_count= 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> score;
    if (i == 0){
            highest_score = score;
            lowest_score = score;
        }
    if(score > highest_score){
      highest_score = score;
      max_count ++;
}
if(score < lowest_score){
    lowest_score = score;
    min_count++;
  }

}
  cout << max_count << " " << min_count;
    return 0;
}
