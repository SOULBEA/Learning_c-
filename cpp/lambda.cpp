#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  //struct {
  //  void operator()(int x){
   //    cout<<x<<endl;
    //}
  //}something;
  //vector <int> v{1, 3,4,5};
  //for_each(v.begin(),v.end(),[](int x) {cout<<x<<" ";});
  //system("pause>nul");
  auto printHello = [](){
    cout<<"hello"<<" ";
  };

  int a =1, b =2;
  auto add= [](int a, int b){
    return a+b;
  };
  auto result = add(a, b);
  cout<<result<<" ";
  return 0;
}
