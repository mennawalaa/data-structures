#include <iostream>
#include <cassert>
#include <vector>
#include<cstdlib>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size();
  int end=right;
  int pivot=right-1; 
 // std::cout<<"pivot"<<pivot<<std::endl;
  if(x>a[right-1])
  return -1;
  if(x==a[left])
  return left;
  if(x<a[left])
  return -1;
  pivot=pivot/2;
 // std::cout<<"pivot2"<<pivot<<std::endl;
 /* int corner=pivot;
if(x==a[corner]){
     std::cout<<"case1"<<std::endl;
      for(int i=corner;i>0;--i){
        if(a[i]!=a[i-1])
        return i;
      }
      */
 int temp_left=0,temp_right=0;
 if(x>a[pivot]){
 //  std::cout<<"case2"<<std::endl;
    left=pivot+1;
    if(x==a[left])
    return left;
    while(x>a[left]){
        temp_left=left;
        left=left+pivot/2;
        if(left>=end){
          left=end;
          break;
        }
        
    }
    right=left;
    left=temp_left;
    for(int i=temp_left;i<=right;++i){
      if(a[i]==x){
         return i;
      } 
    }
 }
 if(x==a[pivot]){
   int middle=pivot; 
    while(x==a[middle]){
        middle--;
      } 
    return middle+1;
 }  
 if(x<a[pivot]){
  //std::cout<<"case3"<<std::endl;
  right=pivot;
  left=0;
    while(x<a[right]){
        temp_right=right;
        right=right-pivot/2;
        if(right<=0){
          right=0;
          break;
        }
    }
    left=right;
    right=temp_right;
   // std::cout<<"left"<<left<<std::endl;
    //std::cout<<"right"<<right<<std::endl;    
   /*if(left==right){
     if(a[left]==x)
     return left;
     else 
     return -1;
   }*/
    for(int i=left;i<right;++i){
      if(x==a[i])
      return i;
    }

 }
   return -1;  
}




int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) 
    return i;
  }
  return -1;
}
int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
        // a[i]=rand()%100;
   //std::cout<<a[i]<<std::endl;
     std::cin>>a[i];
  }
 /*
  int temp;
  for(int i=0;i<n-1;++i){
     for(int i=0;i<n-1;++i){
       if(a[i]>a[i+1]){
         temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
       }
     }
  } 
  */
    
  
  // std::cout<<"sorted"<<std::endl;
  //  for(int j=0;j<n;++j){
    //  std::cout<<a[j]<<std::endl;
   // } 


  int m;
  std::cin >> m;
  std::vector<int> b(m);
  for (int i = 0; i < m; ++i) {
   // b[i]=rand()%100;
    std::cin>>b[i];
   //std::cout<<"key"<<b[i]<<std::endl;
    
  }
  
  for (int i = 0; i < m; ++i) {
   // if(binary_search(a, b[i])!=linear_search(a, b[i])){
     // std::cout<<"error"<<std::endl;
      std::cout<<binary_search(a, b[i]) << ' ';
    //  std::cout <<"linear" <<linear_search(a, b[i]) << ' ';
    // std::cout<<"error key"<<b[i]<<std::endl;
    //  break;
 //  }
   // else
   //   std::cout<<"tmam"<<std::endl;

  }
}