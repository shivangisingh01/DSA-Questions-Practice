#include<iostream>
#include<cmath>
using namespace std;

bool isSafe( int **arr, int x, int y, int n ){
    if (x < n-1 && y < n-1 && arr[x][y] == 1) 
    {
        return true;
    }
    return false;
    
}

bool ratInmaze(int **arr, int x, int y, int n, int** solarr){ 
if(x == n-1 && y == n-1){
    solarr[x][y] = 1;
    return true;
}

if( isSafe(arr, x, y,n)){
    solarr[x][y] = 1;
    if(ratInmaze(arr, x+1, y, solarr)){
        return true;
    }
    if(ratInmaze(arr, x, y+1, solarr)){
        return true;
    }
    solarr[x][y] = 0;
    return false;
}    
return false;
}

int main(){
int n;
    return 0;
}