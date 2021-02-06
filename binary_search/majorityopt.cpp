#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  int cand_index=0;
  int ct=1;
  int y=a.size();
  for(int i=1;i<a.size();++i){
      if(a[cand_index]==a[i])
      ct++;
      else 
      ct--;
      if(ct==0)
      { //  std::cout<<"ch"<<cand_index<<std::endl;
          cand_index=i;
          ct=1;
      }
  }
  // std::cout<<"candidate"<<a[cand_index]<<std::endl;
   ct=0;
  for(int i=0;i<a.size();++i){
      if(a[cand_index]==a[i])
      ct++;
      if(ct>y/2)
      return 1;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}