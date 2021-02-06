#include <iostream>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
int gcd_fast(int a, int b){
  int remainder;
  int prev_remainder;
   int y;
  if(a==b)
  return a;
  if(a==1 || b==1)
  return 1;
  if(a>b){
  remainder=a%b;
  prev_remainder=remainder;
  if(prev_remainder==0)
   return b;
 // std::cout<<"prev_remainder "<<remainder<<std::endl;
  remainder=b%remainder;
 //  std::cout<<"remainder "<<remainder<<std::endl;
   }
  else {
  remainder=b%a;
  prev_remainder=remainder;
  if(prev_remainder==0)
   return a;
 //   std::cout<<"prevremainder "<<remainder<<std::endl;
  remainder=a%remainder;
 // std::cout<<"remainder "<<remainder<<std::endl;
  }
  //std::cout<<"preremainder "<<prev_remainder<<std::endl;
  if (remainder==0)
  return prev_remainder;
  int rn=prev_remainder;
  int rn1=remainder;
  while(1){
     y=rn%rn1;
     rn=rn1;
     rn1=y;
//  std::cout<<"rn  "<<rn<<std::endl;
//  std::cout<<"rn+1 "<<rn1<<std::endl;
//  std::cout<<"y"<<y<<std::endl;
  if(y==0)
   break;
 }
  return rn;

  }
  
   
      
      
    

int main() {
  int a, b;
  std::cin >> a >> b;
 // std::cout <<"slow"<<gcd_naive(a, b) << std::endl;
   std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}