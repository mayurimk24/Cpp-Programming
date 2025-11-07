#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int * Arr = NULL;

    cout<< "Enetr the number of elements: \n";
    cin >> length;

    // step 1: Allocate the memory
    Arr = new int[length];

    if(Arr == NULL){
        cout<< "Unable to allocate memory\n";
    }
    else{
        cout<<"Memory gets successfully Allocate\n";
    }

    // step 2 : use  the memory


    // step 3:Deallocate the memory
    delete []Arr;
    
    
    return 0;
}