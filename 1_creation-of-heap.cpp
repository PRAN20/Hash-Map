#include <iostream>
#include<bits/stdc++>


using namespace std;
int main() {
  map<int, string> m;
  m[1] = "abc"
  m[5] = 'def'
  m[3] = 'ghi'
  m.insert({4, "wasd"});
  map<int, string > :: iterator it;
  for(it = m.begin(); it!=it.end(); it++)
  {
    cout << (*it).first << " " << (*it).second << " "<< (*it).third <<" "<<(*it).forth;
  }

}
