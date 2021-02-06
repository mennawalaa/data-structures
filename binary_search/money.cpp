#include <iostream>
#include<vector>

int get_change(int m) {
  int coins[3]={1,3,4};
 // int minchange[m];
 std:: vector<int> minchange(m+1,1000);
 // for(int i=0;i<m;++i)
  // std::cout<<"intial"<<minchange[i]<<std::endl;
  minchange[0]=0;
  minchange[1]=1;
  minchange[2]=2;
   int N;
  //std::cout<<"minchange[5]"<<minchange[5]<<std::endl;
  for(int i=3;i<=m;++i){
        // std::cout<<"i"<<i<<std::endl;
      /*   if(i%3==0 && i%4==0){
           int N=i/4;
           minchange[i]=N;
           continue;
           
         }*/
       /*   if(i%3==0){
                //std::cout<<"if1"<<std::endl;
               int N=i/3;
                minchange[i]=N;
                //std::cout<<"N"<<N<<std::endl;
                //std::cout<<"min chane"<<minchange[i]<<std::endl;
                continue;
          }*/
         /*   if(i%4==0){
                //std::cout<<"if2"<<std::endl;
                N=i/4;
                minchange[i]=N;
             // std::cout<<"min chane"<<minchange[i]<<std::endl;
                continue;
            }
          for(int j=0;j<3;++j){
             //  std::cout<<"i"<<i<<std::endl;
             //  std::cout<<"coins[j]"<<coins[j]<<std::endl;
                N=minchange[i-coins[j]]+1;
             //  std::cout<<"N"<<N<<std::endl;
             // std::cout<<"i-coins[i] "<<i-coins[j]<<std::endl;
              // std::cout<<"m[i-coins[i]]"<<minchange[i-coins[j]]<<std::endl;
                if(N<minchange[i])
                minchange[i]=N;
          }
            //   std::cout<<"minchange i"<<minchange[i]<<" "<<i<<std::endl;
                
      }
 // for(int y =0 ;y<=m;++y)
  //   std::cout<<"final"<<minchange[y]<<"y"<<y<<std::endl;  
   //  std::cout<<"minchange[m]" <<minchange[m]<<" m "<<m<<std::endl;    
  
  return minchange[m] ;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}