#include <iostream>
#include <fstream>
using namespace std;

void z1() {
  cout << "Zadanie 1:" << endl;
  ifstream in("tekst.txt");
  string x;
  while (in >> x) {
    if (x[0] == 'd' && x[x.length() - 1] == 'd') cout << x << endl;
  }
  in.close();
  cout << endl;
}

string cipher(string x, int a, int b) {
  int n;
  for (int i = 0; i < x.length(); i++) {
    n = (int) x[i] - 97;
    n *= a;
    n += b;
    while (n > 25) n -= 26;
    x[i] = (char) n + 97;
  }
  return x;
}

void z2() {
  cout << "Zadanie 2:" << endl;
  ifstream in("tekst.txt");
  string x;
  while (in >> x) {
    if (x.length() < 10) continue;
    cout << cipher(x, 5, 2) << endl;
  }
  in.close();
  cout << endl;
}


int main() {
  z1();
  z2();
}
