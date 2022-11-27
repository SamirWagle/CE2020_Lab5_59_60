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

/*void Quicksort(vector<int>arr,int size,int left,int right){
    int i=left;
    int j=right;
    int pivot=arr[(left+right)/2];
    while(i<=j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<=j){
            arr[i]=arr[i]^arr[j];
            arr[j]=arr[i]^arr[j];
            arr[i]=arr[i]^arr[j];
            i++;
            j--;
        }
    }
    if(left<j){
        Quicksort(arr,size,left,j);
    }
    if(i<right){
        Quicksort(arr,size,i,right);
    }

    return;
};
*/