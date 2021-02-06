#include<string.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
  /*  vector<int>v;
    int temp;
   // getline(cin,temp);
   v={1,2,3,4,0,0,0,0};
   // cin>>temp>>endl;
   // v.push_back(temp);
   
   //remove(v.begin(),v.end(),0);
   for(int i=0;i<v.size()-1;++i){
      if(v[i]==0)
     v.pop_back();
   }
   for(int i=0;i<v.size()-1;++i){
     cout<<v[i]<<endl;
   }*/
   /* string v[2][2];
    v[0][0]="tag1";
    v[0][1]="value";
    v[0][2]="hello";
    v[1][0]="tag2";
    v[1][1]="name";
    v[1][2]="new programmer";
   for(int i=0;i<2;++i){
   string temp;
   getline(cin,temp);
   cin.ignore();
   string p1,p2;
   int d=temp.find(" ");
   p1=temp.substr(0,d);
   p2=temp.substr(d+1,temp.length()-d-1);
   cout<<"p1 "<<p1<<endl;
   cout<<"p2"<<p2<<endl;
   string x="7b";
   string y="mafish";
  // string v[2];
   v[0]=x;
   v[1]=y;
  cout<<" p1 "<<p1<<" v[0] "<<v[0]<<" p2 "<<p2<<" v[1] "<<v[1]<<endl;
   if(v[0]==p1 && v[1]==p2){
    cout<<"sheren"<<endl;
   
   }
    else{
     cout<<"error"<<endl;
    }
   }
   */ 
  // vector<string> vt;
  // vector<string> vn;
 //  vector<string> vv;
   for(int t=0;t<5;++t){
     string line;
     getline(cin,line);
     cin.clear();
      stringstream ss;
      ss<<line;
      cout<<"my ss"<<line<<endl;
     string tag;
     
     ss>>tag;
     cout<<"tag"<<tag<<endl;
    // vt.push_back(tag);
   //  ss>>name;
    // vn.push_back(name);
    // ss>>value;
    //vv.push_back(value);
     
    // cout<<"again"<<endl;
    //cin.ignore();
   }
  /* for(int i=0;i<5;++i){
     cout<<vt[i]<<endl;
     cout<<vn[i]<<endl;
     cout<<vv[i]<<endl;
   }
  */ 
}