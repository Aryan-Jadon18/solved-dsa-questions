#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,67};
    int largest=INT32_MIN;
    int res=INT32_MIN;
    for(int i=0;i<7;i++){
        if(arr[i]>largest){
            largest-arr[i];
        }
    }
}