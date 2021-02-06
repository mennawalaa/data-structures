#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;
int t=0;

int partition2(vector<int> &a, int l, int r) {
  int x = a[l];
  t=0;
 // std::cout<<"x"<<x<<std::endl;

  int j = l;
  for (int i = l + 1; i <= r; i++) {
    if (a[i] <= x) {
      j++;
      if(a[i]==x){
       //  std::cout<<"case"<<std::endl;
          t++;
       //   std::cout<<"ttt"<<t<<std::endl;
        }
        swap(a[i],a[j]);
       // std::cout<<"after swap a[i] a[j]"<<a[i]<<" "<<a[j]<<std::endl;
    }
  
  }
     
     if(t!=0){
      //   std::cout<<"nooo"<<std::endl;
         int sw=l;
         for(int i=l+1;i<=j;++i){
            if(a[i]<x){
             sw++;
             swap(a[i],a[sw]);
           // std::cout<<"after swap  of equal a[i] a[sw]"<<a[i]<<" "<<a[j]<<std::endl;
            }
          }
        swap(a[l], a[sw]);
        return j;
        }
           
      
   swap(a[l], a[j]);
  return j;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }

  int k = l + rand() % (r - l + 1);
  //std::cout<<"k"<<k<<std::endl;
  swap(a[l], a[k]);
  int m = partition2(a, l, r);
 // std::cout<<"m"<<m<<std::endl;
  randomized_quick_sort(a, l, m - (t+1));
  randomized_quick_sort(a, m + 1, r);
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}