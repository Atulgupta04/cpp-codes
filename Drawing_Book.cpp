//https://www.hackerrank.com/challenges/drawing-book/problem
#include<iostream>

using namespace std;

int main(){
int n, p, front_page, back_page;

    cin >> n;
    cin >> p;
    front_page = p/2;
    back_page = n/2- p/2;
    if(front_page > back_page)
        cout <<"bp:"<< back_page;
    else
        cout <<"fp:"<< front_page ;
}
