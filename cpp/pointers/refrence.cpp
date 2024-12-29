#include <iostream>
using namespace std;

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

int main(){
  int var = 10;
  int &ref = var;

  cout<<var<<endl;
  cout<<ref<<endl;
  ref = 20;
  cout<<var<<endl;
  cout<<ref<<endl;
  int x = 5, y = 15;
  cout<<"before swap x = "<<x<<" and y = "<<y<<endl;
  swap(x, y);
  cout<<"after swapping x = "<<x<<" and y = "<<y<<endl;
  return 0;
}
