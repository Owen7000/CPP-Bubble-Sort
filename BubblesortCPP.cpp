// BubblesortCPP.cpp : This file contains the function bubblesort(). This will sort an array called arrayList

#include <iostream>
using namespace std;

int arrayList[8] = {36, 21, 7, 3, 18, 6, 5, 4};
int arrayLength = 8;

void bubblesort() 
{
    bool swapMade = true;
    int numComparisons = arrayLength;

    do 
    {
        int temp1 = 0;
        int temp2 = 0;
        swapMade = false;

        for (int i = 0; i < numComparisons - 1; i++)
        {
            if (arrayList[i] > arrayList[i+1])
            {
                temp1 = arrayList[i];
                temp2 = arrayList[i + 1];

                arrayList[i] = temp2;
                arrayList[i + 1] = temp1;

                swapMade = true;
            }
        }
        numComparisons--;
    } while (swapMade);
}

int main()
{
    cout << "Unsorted List" << endl;
    for (const auto& e : arrayList) {
        cout << e << endl;
    }

    bubblesort();

    cout << "Sorted List" << endl;
    for (const auto& e : arrayList) {
        cout << e << endl;
    }
}
