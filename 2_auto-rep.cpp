#include <iostream>
#include<bits/stdc++.h>


using namespace std;
int main() {
  map<int, string> m;
  m[1] = "abc";
  m[5] = "def";
  m[3] = "ghi";
  m.insert({4, "wasd"});
  for(auto &pr : m)
  {
      cout <<pr.first<< " " << pr.second << endl;
  }

}
