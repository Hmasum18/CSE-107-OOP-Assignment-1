/**
 * Created by Hasan Masum on 08-Sep-20.
 */

#include<iostream>
using namespace std;

/**
 * prototype of the overloaded functions
 * @return the summation of the given values
 */
int sum(int a,int b);
int sum(int a, int b , int c);
int sum(int a, int b , int c, int d);

int main(){
    cout<<sum(1,2)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2,3,4)<<endl;
}

/**
 * @return summation of 2 given integers
 */
int sum(int a,int b){
    return a+b;
}

/**
 * @return summation of 3 given integers
 * using sum function for 2 integers
 */
int sum(int a, int b , int c){
    return sum(sum(a,b),c);
}

/**
 * @return summation of 4 integers
 * using sum(a,b,c) and sum(a,b) functions
 */
int sum(int a, int b , int c, int d){
    return sum(sum(a,b,c),d);
}