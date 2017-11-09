#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
/*
Write two functions, one that performs binary search and one that performs sequential search.
Write a main function that tests both of these functions and outputs the time elapsed for each function execution.
*/
int binarySearch (int x[],int start, int endx, int key);
int sequentialSearch(int x[], int sizex, int key);
void insertionSort(int x[], int sizex);
void initializeArray(int x[], int sizex);
int main()
{
    clock_t t1;
    clock_t t2;
    clock_t c1;
    clock_t c2;
    int sizex = 100000;
    int x[sizex];
    int key = 0;
    int seqsort = 0;
    int binsort = 0;

    initializeArray(x,sizex);
    cout <<"Please enter a number between 1 and 100000: ";
    cin >>key;
    cout<<endl;

    t1 = clock();//Clock time before the algorithm.
    seqsort = sequentialSearch(x,sizex,key);
    t2 = clock();//Clock time after the algorithm.
    cout <<"Sequential Search algorithm took "<<static_cast<float>(t2-t1)/CLOCKS_PER_SEC<<" seconds to find if and where "<<key<<" is in this list of "<< sizex<<" numbers."<<endl;
    if (seqsort == -1)
        cout <<"Sorry, we did not find your number in this list."<<endl;
    else
        cout <<"We found "<<key<<" in position "<<seqsort + 1<<" of this list using Sequential Search."<<endl;


    c1 = clock();//Clock time before the algorithm.
    insertionSort(x,sizex);//Binary search must be sorted.
    binsort = binarySearch(x,0,sizex-1,key);
    c2 = clock();//Clock time after the algorithm.
    cout <<"Binary Search algorithm took "<<static_cast<float>(c2-c1)/CLOCKS_PER_SEC<<" seconds to find if and where "<<key<<" is in the list of "<<sizex<<" numbers."<<endl;

    if (binsort ==-1)
        cout <<"Sorry, we did not find your number in this list."<<endl;
    else
        cout <<"We found "<<key<<" in position "<<binsort+1<<" of this list using Binary Search."<<endl;


    return 0;
}
void initializeArray(int x[], int sizex){
    srand(time(0));
    for (int i = 0; i <sizex;++i){
        x[i] = (rand()%100000 + 1);
    }

    }
void insertionSort(int x[], int sizex){
    int j =0;
    int i =0;
    int temp = 0;
    for (i = 1; i <sizex;++i){
        for (j = i;j>=1;--j){
            if (x[j]<x[j-1]){
                temp = x[j];
                x[j] = x[j-1];
                x[j-1] = temp;
            }
        }
    }
    return;
}

int sequentialSearch(int x[], int sizex,int key){
    for (int i =0;i<sizex;++i){
        if (x[i]==key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int x[],int startx, int endx, int key){
    int middle = 0;
    while (startx<=endx){
        middle = (startx+endx)/2;
        if (x[middle] == key)
            return middle;
        else if (x[middle]>key)
            endx = middle - 1;
        else
            startx = middle + 1;
    }
    return -1;
}
