#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include<bits/stdc++.h>
#include<sstream>

using std::vector;
using std::string;
using std::max;
using std::min;
using std::stoi;
using std::strcpy;
using std::stringstream;

long long eval(long long a, long long b, char op) {
  if (op == '*') {
    return a * b;
  } else if (op == '+') {
    return a + b;
  } else if (op == '-') {
    return a - b;
  } else {
    assert(0);
  }
}

long long get_maximum_value(const string &exp) {
  int si;
   stringstream strr;
  si =exp.length();
  char arr[si+1];
  strcpy(arr,exp.c_str());
  for(int y=0;y<si+1;++y)
  std::cout<<"char"<<arr[y]<<std::endl;
  std::cout<<"size of expression"<<si<<std::endl;
  int n=(si+1)/2;
  std::cout<<"n"<<n<<std::endl;
  vector<vector <int> >mini(n,vector<int> (n));
  vector<vector <int> >maxi(n,vector<int> (n));
  int m=0;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;i++){
     std::cout<<"i j"<<i<<" "<<j<<std::endl; 
     // if(i==j && m<=n){
     //  strr<<arr[m];
      // strr>> maxi[i][j];
     //  mini[i][j]=maxi[i][j];
     // std::cout<<"allah elmost3an"<<std::endl;
      //std::cout<<"diagonal values"<<maxi[i][j]<<std::endl;
     // }
       m+=2;
    }
  }
 // */
  return 0;
}

int main() {
  string s;
  std::cin >> s;
  std::cout << get_maximum_value(s) << '\n';
}