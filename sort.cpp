#include "sort.h"
#include <iostream>
#include<vector>
using namespace std;

void InsertionSort(vector <int> arr,int size){
    for(int i=0;i<size-1;i++){
        int flag = 0;
        for(int j=0;j<=i;j++){
            if(arr[i+1]<arr[j]){
                flag=1;
            }
            if(flag==1){
                arr[j]=arr[j]^arr[i+1];
                arr[i+1]=arr[j]^arr[i+1];
                arr[j]=arr[j]^arr[i+1];
            }
        }

    }
    cout<<"\nInsertion Sort"<<endl;
    for(int i=0;i<size;i++){
    cout<<arr[i]<<", ";
}
    return;
};

void Quicksort(int* arr,int size){

};