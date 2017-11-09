#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
 /*
Find the kth largest element in an array.

Get the user to enter a number. This will be the amount of numbers in an array.
Use random function to populate the array with that many elements.

Ask the user which largest element they'd like to find. 1st largest, 2nd largest and so on.
Get the largest one in the original list. Keep deleting until you get the next largest.

Can I redo this algorithm to not change the list?
*/


void populatearray(int town[], int numList);
int findlargest(int town[], int numList);
int degreelargest(int town[], int numList, int largest);
void safekeeping(int town[], int numList, int safelist[]);

int main()
{
    int numList = 0;
    int largest = 0;
    srand(time(0));

    cout<<"We're going to find the largest number in a list. How many numbers do you want in the list?"<<endl;
    cin >> numList;
    cout<<endl;

    int town[numList];


    cout<<"Lets populate that list!"<<endl;
    populatearray(town,numList);

    cout<<"The list is ";
    for (int i = 0; i < numList; ++i){
        cout<< town[i] <<" ";
    }
    cout<<endl;
    cout <<"Lets store it for safe keeping!"<<endl;

    int safelist[numList];
    safekeeping(town,numList,safelist);


    cout<<"Now that its populated, time to find where the largest number is."<<endl;
    cout << "The largest is the "<<findlargest(town,numList) + 1<<" one on the list."<<endl;
    int lrg = findlargest(town,numList);
    cout << "That number is "<<town[lrg]<<"."<<endl;

    cout<<"Now which largest one do you want to find?"<<endl;
    cin >>largest;
    cout<<endl;

    cout<<"The "<<largest<<" largest one on the list is "<<degreelargest(town,numList,largest)<<" ."<<endl;
//Have to figure out how to remove doubles from the list, otherwise algorithm does not really work.
    cout<<endl;

    cout <<"And that list again: ";
    for (int i = 0; i <numList; ++i){
                cout << safelist[i]<< " ";
            }
    return 0;
}

void populatearray(int town[], int numList){
    int randnum = 0;

    for (int i = 0; i < numList;++i){

        randnum = (rand()%10000) ;
        town[i] = randnum;
    }
}

int findlargest(int town[], int numList){
    int maxi = 0;
    int maxindex = 0;
    for (int i = 0; i < numList; ++i){
            if (town[i]>maxi){
                maxi = town[i];
                maxindex = i;
            }
    }
    return maxindex  ;
}

int degreelargest(int town[], int numList, int largest){
    int numFound = 0;
    int largein = 0;
    for (int i = 0 ; i < largest-1; ++i){
        largein = findlargest(town,numList); //Have to get the largest index as a variable to work on it in the array.
        town[largein] = 0;
    }
    for (int j = 0; j<numList;++j){
        if (town[j]>numFound){
            numFound = town[j];
        }
    }
    return numFound;
}

void safekeeping(int town[], int numList, int safelist[]){



            for (int i = 0; i <numList; ++i){
                safelist[i] = town[i];
            }

}
