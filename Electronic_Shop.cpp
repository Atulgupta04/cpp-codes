#include<iostream>

using namespace std;

int main() {
  int s, n, m;
  cin >> s >> n >> m;
  int keyboard[n];
  for(int i = 0; i<n; i++){
  cin >> keyboard[i];
}
  int usb_drives[m];
  for(int j = 0; j<m; j++){
      cin >> usb_drives[j];
    }
int money_spent = -1;
for(int i=0; i<n; i++){
  for(int j=0; j<m;j++){
    if(keyboard[i]+usb_drives[j] > s)
      break;
    if(keyboard[i]+usb_drives[j] > money_spent)
    money_spent = keyboard[i] + usb_drives[j];
  }
}
cout << "money_spent:"<<money_spent<<endl;
}
