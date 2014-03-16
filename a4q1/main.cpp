//
//  main.cpp
//  a4q1
//
//  Created by Chris Chen on 2014-03-15.
//  Copyright (c) 2014 Nuo Chen. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

void printList(const int [], const int);

int main()
{
    const int size = 10;
    int array[size] = {0};
    int out[size] = {99};
    
    cout << "input 10 numbers: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    cin.sync();
    
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
    
    printList(out, size);
    cout << endl;
    
    return 0;
}

void printList(const int out[],const int size){
    for(int i = 0; i < size; i++){
        if(out[i] != 0){
        cout << setfill(' ') << setw(2) << out[i];
        }else continue;
    }
}