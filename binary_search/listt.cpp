#include<iostream>
#include<list>
#include<map>
#include<iterator>
using namespace std;
struct node{
int value;
node*next;
};
/*void insert_node(node*list){
 bool x;
 int v;
 cout<<"where to insert "<<endl;
 if(!x){
    node*n= new node;
    if(n!=NULL){
       cout<<"enter the value"<<endl;
       cin>>v;
        n->value=v;
        n->next=list->next;
        list=n;
    }

 }
 /* int pos;
  node *prev=NULL;
  node *te=list;
  node*n=new node;
  for(int i=0;i<pos+1;i++){
      if(i==pos)
      prev=te;
      te=te->next;
  }
  n->next=te;
  prev->next=n;


}
*/
int main(){
 cout<<"hello"<<endl;
 node*list=NULL;
 node*temp=NULL;
/*
 node*n=new node;
 if(n!=NULL){
 n->value=0;
 n->next=NULL;
 list=n;
 temp=n;
 }
 node*p=new node;
 if(p!=NULL){
 p->value=1;
 p->next=NULL;
 temp->next=p;
 temp=p;
 }
 node *d=new node;
 if(d!=NULL){
     d->value=2;
     d->next=NULL;
     temp->next=d;
     temp=d;
 }
 */
int no_nodes=5;
for(int i=0;i<5;i=+2){
    node*n=new node;
    n->value=i;
    if(i==0){
        list=n;
        temp=n;
    }
    temp->next=n;
    temp=n;

}
 for(temp=list;temp!=NULL;temp=temp->next){
     cout<<"value stored"<<temp->value<<endl;
 }
// insert_node(list);
 for(temp=list;temp!=NULL;temp=temp->next){
     cout<<"value stored"<<temp->value<<endl;
 }
/*for(temp=list;temp!=NULL;temp=temp->next){
    node*t;
    t=temp->next;
    free(temp);
    temp=t->next;
}
*/
}