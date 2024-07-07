#include<iostream>
#include<cmath>
using namespace std;
int powerSum( int X, int N, int X2){
  if (X== 1){
    return 0;
  }
  float root = sqrt(X);
    int root2 = sqrt(X2);
    cout<<root<<endl;
    cout<<root2<<endl; int subst; int ways = 0;
    if ( root == root2){
        cout<<"perfect square"<<endl;
      int subst =  X - pow(root2, N);
      if (X == 0){
         ways++;
        }
    }
    else{
        for(int i = root2 ; i >0 ; i++){
          ways += powerSum(i*i, N, i*i);
        }
      if( subst == 0){
        return ways;
      }
    }
ways += powerSum(subst, N, X2);
}

int  main(){
    
    int X, N,X2;
    cin>>X>>N>>X2;
    
      // int test =   pow(X, (1/3));
      // cout<<test;
    
     powerSum(X,N, X2);
    return 0;
}