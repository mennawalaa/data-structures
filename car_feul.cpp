#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
   int n=stops.size();
   int total_dist[n+2];
   int step[n+1];
   int full=tank;
   int no_refill=0;
     total_dist[0]=0;
     total_dist[n+1]=dist;
    for(int i=1;i<n+1;++i){
        total_dist[i]=stops[i-1];
       
    }
   
     for(int i=0;i<n+1;++i){
    //  std::cout<<total_dist[i]<<std::endl;
    //   std::cout<<total_dist[i+1]<<std::endl;
       step[i]=total_dist[i+1]-total_dist[i];
    //   std::cout<<"no of steps"<<sizeof(step)/sizeof(int)<<std::endl;
     
    //   std::cout<<"diffs"<<step[i]<<std::endl;
     }
     
    for(int i=0;i<n+1;++i){
    //  std::cout<<"step"<<step[i]<<std::endl;
       if (step[i]>full)
       return -1;
     // std::cout<<"step"<<step[i]<<std::endl;
       tank=tank-step[i];
    //  std::cout<<"tank state"<<tank<<std::endl;
      
        if(i<n){
          if(tank<step[i+1]){
            no_refill=no_refill+1;
       //    std::cout<<"tank before refill"<<tank<<std::endl;
            tank=full;
        //    std::cout<<"refill at "<<total_dist[i+1]<<std::endl;
         //   std::cout<<"why1 "<<step[i+1]<<std::endl;
            }
        }
    
       
    }
   // for(int i=0;i<n+1;++i){
     //   std::cout<<step[i]<<std::endl;
        
  //  }
  

    return no_refill;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}