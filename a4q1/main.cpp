//
//  CS-110 Assignment 4 Question 1
//  Nuo Chen
//  200327119
//  Created by Nuo Chen on 2014-03-15.
//
//  introduction: prompt user to input 10 integers(user can input more than 10 but extra numbers will be abandoned
//                then output only the distinct numbers

#include <iostream>
#include <iomanip>

using namespace std;

//print array function
void printList(const int [], const int);

int main()
{
    //array size
    const int size = 10;
    //input array
    int array[size] = {-99};
    //output array store distinct numbers
    int out[size] = {99};
    
    //for loop for array input
    cout << "input 10 numbers: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    
    //flush cin buffer
    cin.sync();
    
    //check if array[i] has already existed in array out[], if it hasn't put array[i] in array out[]
    //if it has, jump to array[i+1]
    for(int i = 0; i < size; i++){
        int j = 0;
        while( j <= i ){
            if(array[i] == out[j]){
                break;
            }else if(j == i){
                out[i] = array[i];
            }
            j++;
        }
    }
    
    //output array out[]
    cout << "distinct numbers are: ";
    printList(out, size);
    cout << endl;
    
    return 0;
}

void printList(const int out[],const int size){
    for(int i = 0; i < size; i++){
        if(out[i] != 0){
        cout << setfill(' ') << setw(2) << out[i] << ",";
        }else continue;
    }
}