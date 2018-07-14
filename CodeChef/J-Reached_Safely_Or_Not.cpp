//https://www.codechef.com/problems/ZUBREACH
#include<iostream>

using namespace std;

int main(){
int t,casee=0;
cin>>t;
while(t--){
casee++;
char directions;
int i, m, n, rx, ry, x=0, y=0;
cin >> m >> n;
cin >> rx >> ry;
int number;
cin >> number;
for(i=0; i<number; i++){
    cin >> directions;
    if(directions == 'U') y+=1;
    if(directions == 'D') y-=1;
    if(directions == 'R') x+=1;
    if(directions == 'L') x-=1;
}
if(x<0||x>rx||y<0||y>ry)
cout<<"Case "<<casee<<": "<<"DANGER\n";
else
if(x==rx&&y==ry)
cout<<"Case "<<casee<<": "<<"REACHED\n";
else
cout<<"Case "<<casee<<": "<<"SOMEWHERE\n";
}
}
