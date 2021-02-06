#include <iostream>
#include <vector>
#include<algorithm>
using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
 double value = 0.0;
  int n;
  n=weights.size();
  int current_capacity=0;
  double value_perweight [n] = {0};
 //  std::cout<<"n"<<n<<std::endl;
  // claculate value/weight
  for(int i=0;i<n;++i){
     if(weights[i]==0){
     value_perweight[i]=0;
    // values[i]=0;
     }
     else{
     value_perweight[i]=(float)values[i]/weights[i];
   //  std::cout<<value_perweight[i]<<std::endl;
     }
    } 
  int temp1;
  int temp2;
  int temp3;
for(int j=0;j<n;++j){
  for(int i=0;i<n;++i){
     
      if(value_perweight[i+1]>value_perweight[i]){
        temp1=value_perweight[i];
        temp2=weights[i];
        temp3=values[i];
        value_perweight[i]=value_perweight[i+1];
        weights[i]=weights[i+1];
        values[i]=values[i+1];
        value_perweight[i+1]=temp1;
        weights[i+1]=temp2;
        values[i+1]=temp3;
      }

    }
}    


  //represnt value/w 
//for(int i=0;i<n;++i){
 //   std::cout<<value_perweight[i]<<std::endl;   

//}
//for(int i=0;i<n;++i){
 //  std::cout<<values[i]<<std::endl;   
    
//}
//for(int i=0;i<n;++i){
 //   std::cout<<weights[i]<<std::endl;   
    
//}
int count[n]={0};
for(int i=0;i<n;++i){
 //  std::cout<<"start iterations"<<std::endl;
   if(current_capacity<capacity){
       if(weights[i]<=(capacity-current_capacity)&&count[i]==0){
           
           current_capacity=current_capacity+weights[i];
           value=value+values[i];
           count[i]=1;
     //     std::cout<<"current capacity"<<current_capacity<<"\n";
        
     //     std::cout<<"current value"<<value<<std::endl;
     //      std::cout<<"i"<<i<<std::endl;
       }
     if(weights[i]>(capacity-current_capacity)&& count[i]==0){
     //   std::cout<<"else"<<std::endl;
      //  std::cout<<"i"<<i<<std::endl;
      //  std::cout<<"current capacity"<<current_capacity<<"\n";
      //  std::cout<<"remainder weight"<<capacity-current_capacity<<std::endl;
         value=value+(capacity-current_capacity)*value_perweight[i];
         current_capacity=capacity;
      //    std::cout<<"current value after last step"<<value<<std::endl;
       }
   }   
}
 


 
  return value;

}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);
  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}