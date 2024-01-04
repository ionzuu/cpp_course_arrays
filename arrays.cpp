#include<iostream>
using namespace std;

main(){
    int array[3];

    array [0] = 123;
    array [1] = 456;
    array [2] = 789;

    cout << "array [0] = "<< array[0] << endl;
    cout << "array [1] = "<< array[1] << endl;
    cout << "array [2] = "<< array[2] << endl;

    cout << "-----------------------" << endl;

    int secarray[3][3];
    int c;

    for(int i = 0; i<3 ; i++){
        cout << endl;
        for(int j = 0; j<3 ; j++){
           secarray[i][j] = c++;
           cout << secarray[i][j];  
        }
    }
}