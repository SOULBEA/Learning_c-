#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int num = 10;
  int *ptr = &num;
  cout<<*ptr;
  return 0;
}
