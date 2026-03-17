#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

               int n = 6;
            vector<vector<int>>arr = {{2,3,4,5,6,7},{5,6,4,3,1,2},{3,8,2,1,0,3},{1,1,1,1,1,1},{2,3,2,3,2,4}};
            for(int i = 0 ; i < n ; i++){
            for(int j = 0; j < 3 ; j++){
                    if(i == j){
                        cout<<arr[i][j]<<" ";
                    }
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            } 

return 0;
}