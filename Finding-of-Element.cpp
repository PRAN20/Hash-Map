#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void values(map<int, string> &m)
{
    cout << m.size()<<endl;
    for(auto &pr : m)
    {
        cout <<pr.first<< " " << pr.second << endl;
    } 
}
int main() {
  map<int, string> m;
  m[1] = "abc";
  m[5] = "def";
  m[3] = "ghi";
  m.insert({4, "wasd"});
  
  auto a = m.find(6);
  if( a == m.end())
  {
      cout <<"No Elemet Found";
  }
  else
  {
          cout << (*a).first << " " << (*a).second << endl;
  }
  //values(m);
}
