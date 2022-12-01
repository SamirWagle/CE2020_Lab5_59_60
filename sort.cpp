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

    return;
};

int partition(std::vector<int> & vect, int small, int large)
{
    int pivot = vect[large];
    int i = small-1;
    for(int j=small;j<large;j++){
        if(vect[j]<=pivot){
            i=i+1;
            int temp1=vect[i];
            vect[i]=vect[j];
            vect[j]=temp1;   
        }
    }
    
    int temp2 = vect[i+1];
    vect[i+1] = vect[large];
    vect[large] = temp2;
    return i+1;
}

void QuickSort(std::vector<int> & vect, int low, int high)
{
    int pivot;

    if (low < high)
    {
        pivot = partition(vect, low, high);
        QuickSort(vect, low, pivot - 1);
        QuickSort(vect, pivot + 1, high);
    }
}