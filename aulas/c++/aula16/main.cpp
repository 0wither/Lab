#include <algorithm>
#include<iostream>

using namespace std;

void contador(int nam,int count = 0);

int main() {

contador(29);
 return 0; 
}

void contador(int nam,int count) {
    cout << count << "\n";
    if (nam > count) {
    contador(nam,++count);
    }
  }
