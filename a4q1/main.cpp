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

int main()
{
    const int size = 10;
    int inputArray[size] = {0};
    string outputArray = {0};
    
    cout << "input 10 numbers: ";
    for(int i = 0; i < size; i++){
        cin >> inputArray[i];
    }
    cin.sync();
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(inputArray[i] != outputArray[j]){
                outputArray[i] = inputArray[i];
            }
        }
    }
    
    return 0;
}
