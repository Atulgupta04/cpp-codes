#include<iostream>
using namespace std;
int main()
{
  int n, i, number, counter_positive=0,counter_negative=0,counter_constant=0;
  cin >> n;
  for(i=0; i<n;i++)
  {
    cin >> number;
    //cout << "num:"<< number<<endl;
    if(number > 0)
    {
      counter_positive++;
      //cout <<"positive:"<< counter_positive<<endl;
    }
     else if(number < 0)
    {
      counter_negative++;
      //cout << "Negative:"<< counter_negative  << endl;
    }
    else
    {
      counter_constant++;
      //cout <<"Zero:"<< counter_constant<<endl;
    }
  }
  cout<< counter_positive/float(n)<<endl;
  cout << counter_negative/float(n)<<endl;
  cout << counter_constant/float(n) <<endl;
}
