#include<iostream>

using namespace std;

int main()
{
    int hh, mm, ss;
    string ampm;
    //cin >> hh >> mm >> ss;
    scanf("%d:%d:%d",&hh,&mm,&ss);
    cin >> ampm ;
    //cout << hh << ":"<< mm << ":" << ss <<ampm<<endl;
    int H;
    if (ampm == "PM"){
        H = hh+12;
        if (mm  < 10 && ss < 10 ){
          cout << H << ":0" << mm << ":0" << ss<<endl;
        }
        else  if(ss < 10){
          cout << H << ":" << mm << ":0" << ss<<endl;
        }
        else if (mm < 10){
        cout << H << ":0" << mm << ":" << ss<<endl;
        }
        else {
        cout << H << ":" << mm << ":" << ss<<endl;
        }
      }
    else{
      if(hh<10){
        if (mm  < 10 && ss < 10 ){
          cout << "0"<< hh << ":0" << mm << ":0" << ss<<endl;
        }
        else  if(ss < 10){
          cout << "0"<< hh<< ":" << mm << ":0" << ss<<endl;
        }
        else if (mm < 10){
        cout << "0"<<hh << ":0" << mm << ":" << ss<<endl;
        }
        else {
        cout << "0"<<hh << ":" << mm << ":" << ss<<endl;
        }
      }
      else{

          if (mm  < 10 && ss < 10 ){
            cout << hh << ":0" << mm << ":0" << ss<<endl;
          }
          else  if(ss < 10){
            cout << hh << ":" << mm << ":0" << ss<<endl;
          }
          else if (mm < 10){
          cout << hh << ":0" << mm << ":" << ss<<endl;
          }
          else {
          cout << hh<< ":" << mm << ":" << ss<<endl;
          }
        }
    }
}
