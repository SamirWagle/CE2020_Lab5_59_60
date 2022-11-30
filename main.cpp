#include<iostream>
#include"sort.h"
#include"sort.cpp"
#include<vector>
#include<time.h>


using namespace std;


int main()
{
    vector<int> array;
    int n=50000;
srand(time(nullptr));
for(int i=0;i<n;i++){
array.push_back(rand()%200);
}


cout<<"Using Rand"<<endl;
for(int i=0;i<n;i++){
    cout<<array.at(i)<<", ";
}
cout<<"/n/nTime is:"<<endl;
cout<<time(nullptr)<<endl;
InsertionSort(array,n);
cout<<"/n/nTime is:"<<endl;
cout<<time(nullptr)<<endl;
cout<<"Quick Sort"<<endl;
for(int i=0;i<n;i++){
    cout<<array.at(i)<<", ";
}


}