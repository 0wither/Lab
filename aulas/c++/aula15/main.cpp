#include <algorithm>
#include<iostream>
#include <string>

using namespace std;

void texto(string txt = "a");

int main (int argc, char *argv[]) {
 
 string a = ""; 
 cin >> a; 
 texto(a);

  return 0;
}

void texto(string txt) {
  cout << "\n" << txt << "\n";
}
