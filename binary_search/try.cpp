#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size(); 
  right=right-1;
 int m;
  if(x>a[right])
       return -1;
  if(x==a[left])
       return left;
  if(x<a[left])
       return -1; 

  while(right-left>1){
      m=left+(right-1)/2;
     // std::cout<<"m"<<m<<std::endl;
      if(a[m]>=x){
        right=m;
       // std::cout<<"right"<<right<<std::endl;
      }
      else{
       left=m;
      // std::cout<<"left"<<left<<std::endl;
      }     
  } 
  if(x>a[left]&&x<a[right])
     return -1;
  return right;
}
/*
int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}
*/
int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    std::cout<< binary_search(a, b[i]) << ' ';
   // std::cout <<"l"<<linear_search(a, b[i]) << ' ';
  }
}