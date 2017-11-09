/*
Divide n element sequence into two n/2 element sequences
Sort the two sequences recursively using merge sort
Merge the two sequences - for array P- R- array1(p..q)  + array(q +1 .. r)
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void init(int x[], int sizex);
void printArray(int x[], int sizex );
void mergeSort(int x[],int low ,int high);
void merge(int x[], int low, int high , int mid);
int main(){
    const int sizex = 100000;
    int arr[sizex];

    init(arr,sizex);
    //printArray(arr,sizex);
    int low = 0;
    int high = sizex - 1;
    //clock_t t;
    int t = clock();
    mergeSort(arr,low, high);
    t = clock()-t;
    cout <<"Time it took is "<<static_cast<float>(t)/CLOCKS_PER_SEC<<" seconds."<<endl;
    //printArray(arr,sizex);

  return 0;
}

void init(int x[], int sizex){
  srand(time(0));
  for (int i = 0; i <sizex; ++i){
    x[i] = (rand()%100);
  }
  return;
}

void printArray(int x[], int sizex){
  cout <<"Whole array is: ";
  for (int i = 0; i <sizex;++i){
    cout<< x[i]<<" ";
  }
  cout <<endl;
return;
}

void mergeSort(int x[], int low, int high)
{
    if (low < high){
        int mid;

        mid = (low + high)/2;

       /* cout<<"Before calls: ";
        cout <<"Low: "<<low;
        cout <<" Mid: "<<mid;
        cout <<" High: "<<high;
        cout<<endl;*/


        mergeSort(x,low,mid);

        //printArray(x,high+1);
        /*cout<<"After recursive call on low and mid: ";
        cout<<endl;
        cout <<" Low: "<<low;
        cout <<" Mid: "<<mid;
        cout <<" High: "<<high;
        cout<<endl;
*/
        mergeSort(x,mid+1,high);

       /* printArray(x,high+1);
        cout<<" After recursive call on mid+1 and high: ";
        cout <<" Low: "<<low;
        cout <<" Mid: "<<mid;
        cout <<" High: "<<high;
        cout<<endl;
*/
        merge(x, low, high, mid);
        /*cout <<endl;
        cout <<" After merge: ";
        printArray(x,high+1);
    */}
    //cout <<endl;
    //cout <<"This is a return."<<endl;
    return;

}

void merge(int x[],int low, int high, int mid){

    //cout <<low<<mid<<high;
    int i, j, k, c[100050];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high){
        if (x[i] < x[j]){
            c[k] = x[i];
            k ++;
            i++;
        }
        else {
            c[k] = x[j];
            k++;
            j++;
        }
    }
    while (i <= mid){
        c[k]= x[i];
        k++;
        i++;
    }
    while (j <= high){
        c[k] = x[j];
        k++;
        j++;
    }
    for (i = low;i<k;i++){
        x[i] = c[i];
    }
}

