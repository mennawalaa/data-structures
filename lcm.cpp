#include <iostream>
#include<cmath>
long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l){
    
    if (l % a == 0 && l % b == 0)
      return l;
      
  }   
        return (long long) a * b;
}
long long lcm_fast(int a, int b){
  int n=b;
  int m=a;
if(a==0 ||b==0)
return 0;
 int prime[]={2,3,5,7,11,13,17,19,23,29,31,37};
 int no_primenos=sizeof(prime)/sizeof(int);
  std::cout<<"sizeof prime"<<no_primenos<<"\n";
 int powers_a[no_primenos]={0};
 int powers_b[no_primenos]={0};
  for(int i=0;i<no_primenos;i++){
 // 2nd no component 
  if (n%prime[i]==0){
    powers_a[i]=0;
    while(n%prime[i]==0){
      n=n/prime[i];
      powers_a[i]=powers_a[i]+1;
    }
    
  }
    
    std::cout<<" prime "<<prime[i]<<"\n";
    std::cout<<" prime power"<<powers_a[i]<<"\n";
    
    
    
      if (n==1)
         break;
   
   // first no component
  }
  
  for(int i=0;i<no_primenos;++i){
   if (m%prime[i]==0){
    powers_b[i]=0;
    while(m%prime[i]==0){
      m=m/prime[i];
      powers_b[i]=powers_b[i]+1;
    }
    
  }
    
   std::cout<<" prime "<<prime[i]<<"\n";
    std::cout<<"power"<<powers_b[i]<<"\n";
    
    
    
      if (m==1)
         break;

  }
 long long  int lcm=1;
 for(int i=0;i<no_primenos;i++){
   if(powers_a[i]>powers_b[i])
    lcm=lcm*pow(prime[i],powers_a[i]);
    else
    lcm=lcm*pow(prime[i],powers_b[i]);
     
  //   std::cout<<"lcm"<<lcm<<"\n";
   
 }
//  std::cout<<"n"<<n<<std::endl;
//  std::cout<<"m"<<m<<std::endl;  
  if(n==m)
  lcm=lcm*m;
  else 
  lcm=lcm*m*n;
 
 return lcm;

}



int main() {
  int a, b;
  std::cin >> a >> b;
std::cout <<"naive"<<lcm_naive(a, b) << std::endl;
 std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}