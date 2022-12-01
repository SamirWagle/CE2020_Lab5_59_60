#include <iostream>
#include <vector>
#include <ctime>
#include <random>
#include <chrono>
#include "sort.cpp"
#include "sort.h"

using namespace std::chrono;
using namespace std;

int main()
{
    int size = 0, times;
    string choice;
    bool repeat = true;

    cout << "\nHow many times do you want to sort: ";
    cin >> times;

    srand(time(nullptr));

    for (int i = 1; i <= times; i++)
    {
        std::vector<int> vector1;
        std::vector<int> vector2;

        cout << "\nHow many numbers do you want to sort:";
        cin >> size;
           for (int j = 0; j < size; j++)
        {
            int value = rand() % 500;
            vector1.push_back(value);
            vector2.push_back(value);
        }

     
        cout << "\nRandom values generated and stored successfully" << endl;

     cout<<"For Quick Sort"<<endl;

        auto startquick = high_resolution_clock::now();
        QuickSort(vector1,0,size);
        auto stopquick = high_resolution_clock::now();
        auto durationquick = duration_cast<milliseconds>(stopquick - startquick);

        cout << "\n******************************" << endl;

        cout << "\nTOTAL TIME (MILLISECOND) REQUIRED TO SORT THE DATA USING QUICKSORT:" << durationquick.count() << endl;

        cout << "\n******************************\n\n\n\n" << endl;





            cout<<"For Insertion Sort"<<endl;

        auto startquick = high_resolution_clock::now();
       InsertionSort(vector2,size);
        auto stopquick = high_resolution_clock::now();
        auto durationquick = duration_cast<milliseconds>(stopquick - startquick);

        cout << "\n******************************" << endl;

        cout << "\nTOTAL TIME (MILLISECOND) REQUIRED TO SORT THE DATA USING INSERTIONSORT:" << durationquick.count() << endl;

        cout << "\n******************************\n\n\n\n" << endl;
    









    }
}