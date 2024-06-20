/*
The program accepts two integers N and X as the input. The program prints the first N multiples of X as the output. Please fill in the blanks with the code so that
the program runs successfully.

Example Input/Output 1:
Input:
6 10

Output:
10 20 30 40 50 60

Example Input/Output 2:
Input:
10 8

Output:
8 16 24 32 40 48 56 64 72 80
*/
#include<iostream>
using namespace std;

int val;
int main(){
    int val;
    cin>>val>>::val;
    for(int ctr=1; ctr<=val; ctr++){
        cout<<::val*ctr<<" ";
    }
    return 0;
}
