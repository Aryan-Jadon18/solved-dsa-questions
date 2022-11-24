#include<iostream>
using namespace std;
int main(){ 
    int arr[7]={1,2,3,4,5,6,67};
    int res=arr[0];
    for(int i=0;i<7;i++){
        if(arr[i]>res){
            res=arr[i];
        }
    }
    cout<<res;
    return 0;
}