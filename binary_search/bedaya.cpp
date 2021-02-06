#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;
int repeated_start;
bool unique=1;
int partition2(vector<int> &a, int l, int r) {
  int x = a[l];
  std::cout<<"x"<<x<<std::endl;
  std::cout<<"l"<<l<<std::endl;
   repeated_start=l;
 for(int i = l + 1; i <= r; i++){
   if(a[i]==x){
   std::cout<<"rep start"<<std::endl;
   unique=0;
   repeated_start++;
   std::cout<<"repeated start i"<<repeated_start<<i<<std::endl;
   swap(a[repeated_start],a[i]);
   std::cout<<"a[repeated] a[i] "<<a[repeated_start]<<" "<<a[i]<<std::endl;
   }
 }
 std::cout<<"mod seq"<<std::endl;
 for(int i = l ; i <= r; i++){
    std::cout<<a[i]<<std::endl;;
 }
 int j = repeated_start;
 std::cout<<"j "<<j<<std::endl;
  for (int i=repeated_start+1; i <= r; i++) {
    if (a[i] < x) {
      j++;
      swap(a[i], a[j]);
      std::cout<<"after swap"<<a[i]<<" "<<a[j]<<std::endl;
    }
  }
  std::cout<<"j after op"<<j<<std::endl;
   std::cout<<"mod seq 2nd "<<std::endl;
  for(int i = l ; i <= r; i++){
    std::cout<<a[i]<<std::endl;
 }
 std::cout<<"a[l]"<<a[l]<<std::endl;
 std::cout<<"a.end()"<<r<<std::endl;
 if(repeated_start!=l && a[l]>a[repeated_start+1]&& repeated_start!=r){
   for(int i=0;i<j;++i){
     swap(a[i],a[i+repeated_start+1]);
     std::cout<<"i i+re+1 "<<i<<" "<< i+repeated_start+1<<std::endl;
     std::cout<<"after swap a[i] a[i+re+1] "<<a[i]<<" "<<a[i+repeated_start+1]<<std::endl;
      if(i+repeated_start+1>=j)
      break;
   }
       
 }
 else
   swap(a[repeated_start], a[j]);
   std::cout<<"a[rep start] a[j]"<<a[repeated_start]<<" "<<a[j]<<repeated_start<<j<<std::endl;


  return j;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }

  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  std::cout<<"left"<<l<<std::endl;
  std::cout<<"k a[k]"<<k<<a[k]<<std::endl;
  int m = partition2(a, l, r);
   std::cout<<"m"<<m<<std::endl;
  if(unique)
  randomized_quick_sort(a, l, m -1);
  else
  randomized_quick_sort(a, l, m -(repeated_start+1));
  
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