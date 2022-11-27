#include<iostream>
#include"sort.h"
#include"sort.cpp"
#include<vector>
#include<time.h>


using namespace std;


int main()
{
    vector<int> array;
    int n=50;
srand(time(nullptr));
for(int i=0;i<n;i++){
array.push_back(rand()%200);
}


cout<<"Using Rand"<<endl;
for(int i=0;i<n;i++){
    cout<<array.at(i)<<", ";
}

InsertionSort(array,n);
cout<<"Quick Sort"<<endl;
for(int i=0;i<n;i++){
    cout<<array.at(i)<<", ";
}


}