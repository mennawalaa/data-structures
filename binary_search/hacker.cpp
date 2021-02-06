#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int s;
    int q;
    cin >>n;
    cin >> q;
    int * a[n];
   for(int i=0;i<n;++i){
       cin >>s;
       a[i]=new int [s];
      // cout<<"suceed"<<endl;
       for(int j=0;j<s;++j){
           cin>>a[i][j];
       }

    }  
  //  std::cout<<"end turn"<<endl;
   /* for(int j=0;j<n;++j){
     for(int y=0;y<s;++y){
         cout<<a[j][y]<<endl;
     }
   
    }*/
   // cout<<"no of quires"<<endl;
    int d1[q];
    int d2[q];
    for(int i=0;i<q;++i){
        cin >>d1[i];
        cin >>d2[i];
    }
    for(int j=0;j<q;++j){
        int x=d1[j];
        int y=d2[j];
        cout<<a[x][y]<<endl;
    }
    return 0;
}