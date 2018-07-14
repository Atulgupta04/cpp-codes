//https://www.hackerrank.com/challenges/the-birthday-bar/problem
#include<iostream>

using namespace std;

int main()
{
  int  i, n, m, d;
  cin >> n;
  int arr[n];
  for(i = 0; i < n; i++){
    cin >> arr[i];
  }
  cin >> d >> m;
  int count = 0;
  for(i = 0; i < n-m+1; i++)
  {
		int total=0;
		for(int j=i; j<i+m; j++)
		{
			total = total + arr[j];
		}
		if(total==d)
			count++;
	}
	cout << count;
  }
