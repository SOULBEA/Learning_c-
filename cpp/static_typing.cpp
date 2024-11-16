#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int num = 54;
  double pi = 3.14;
  char c = 'c';

  c = num;
  num = pi;
  cout<<num<<endl;
  cout<<pi<<endl;
  cout<<c<<endl;
  return 0;
}
