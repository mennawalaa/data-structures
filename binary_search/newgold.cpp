#include <iostream>
#include <vector>

using std::vector;

int optimal_weight(int W, const vector<int> &w) {
  int x;
  int n=w.size();
  vector<vector <int> >m(n+1,vector<int> (W+1));
  //int m[n+1][W+1];
 // int current_weight = 0;
  for (int i = 0; i < n+1; ++i) {
    for (int j=0;j<W+1;++j) {
    // std::cout<<"for i , j  "<<i<<" "<<j<<"w[i]"<<w[i-1]<<std::endl;
      if(i==0 || j==0)
      m[i][j]=0;
      else if (w[i-1]<=j){
          x=m[i-1][j];
          if((w[i-1]+m[i-1][j-w[i-1]])>x)
           x=(w[i-1]+m[i-1][j-w[i-1]]);
           m[i][j]=x;
      }
      else
       m[i][j]=m[i-1][j];
   // std::cout<<"m[i][j]"<<m[i][j]<<std::endl;
    }
  }

  return m[n][W];
}

int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  std::cout << optimal_weight(W, w) << '\n';
}