#include<iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int x,y,z;
        cin >> x >> y >> z;
        if(abs(x-z) < abs(y-z)){
            cout << "Cat A" ;
          }
        else if(abs(y-z) < abs(x-z)){
            cout << "Cat B" ;
        }
            else{
                cout << "Mouse C";}
        cout << endl;
    }
    return 0;
}
