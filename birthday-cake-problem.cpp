#include<iostream>
using namespace std;
int main()
{
  int n, number, max_number=0, max_count=0;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    cin >> number;
    if(max_number < number)
    {
      max_number = number;
      max_count = 1;
    }
    else if(number == max_number)
    {
      max_count++;
    }
  }
  cout <<max_count<<endl;
  //cout << max_number << endl;
}
