#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[3][4]={1,1,1,1,1,1,1,1,1,1,1,1};
   int arry[4][3]={1,1,1,1,1,1,1,1,1,1,1,1};
   int arra[3][3]={0,0,0,0,0,0,0,0,0};
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           for(int k=0; k<4; k++){
               arra[i][j]+=arr[i][k]*arry[k][j];
           }
           cout<<arra[i][j]<<" ";
       }
       cout<<endl;
   } 
   return 0;

}