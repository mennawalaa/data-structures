#include <iostream>
#include <string>
#include<algorithm>

using std::string;
using std::min;
int edit_distance(const string &str1, const string &str2) {
  int s1=str1.size()+1;
   int x;
 string  str1n=" "+str1;
 //std::cout<<"s1 "<<s1<<std::endl;
  int s2=str2.size()+1;
  //std::cout<<"s2 "<<s2<<std::endl;
 string str2n=" "+str2;
  int M[s1][s2];
  for(int i=0;i<s1;++i){
      for(int j=0;j<s2;++j){
          if(i==0){
          M[i][j]=j;
          continue;
          }
          if(j==0){
          M[i][j]=i;
          continue;
          }
          if(str1n[i]==str2n[j]){
           M[i][j]=M[i-1][j-1];
          // std::cout<<"match"<<M[i][j]<<str1n[i]<<str2n[j]<<"i"<<i<<"J"<<j<<std::endl;
          }
           else{
           if(M[i][j-1]<M[i-1][j])
              x=M[i][j-1];
              else
              x=M[i-1][j];
          // std::cout<<"xno"<<x<<std::endl;
            if(x>M[i-1][j-1]){
               x=M[i-1][j-1];
            //  std::cout<<"x"<<x<<std::endl; 
            }
         M[i][j]=x+1;
        // std::cout<<"pair"<< M[i][j]<<"i"<<i<<"j"<<j<<str1n[i]<<str2n[j]<<std::endl;
           }
      }
  }
  return M[s1-1][s2-1];
  //for(int y=0;y<s1;++y)
 // std::cout<<M[0][y]<<" "<<y<<std::endl;
  // for(int y=0;y<s1;++y)
  //std::cout<<M[y][0]<<std::endl;
  //std::cout<<"lesa lel"<<std::endl;
 // return 0;
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}