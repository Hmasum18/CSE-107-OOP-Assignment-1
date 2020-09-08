/**
 * Created by Hasan Masum on 08-Sep-20.
 */

#include<iostream>
using namespace std;

/**
 * prototype of the two overloaded function
 * this two prototypes has separate implementation
 */
int max(int a, int b);
int max(int a, int b, int c);

int main(){
    /**
     * call the overloaded functions from main and print the values
     */
    cout<<max(10,20)<<endl; //prints 20
    cout<<max(20,10,18)<<endl; //prints 20
}

/**
 * receives to integer values
 * @param a is a integer
 * @param b is a integer
 * @return maximum integer of 2 integer parameter
 */
int max(int a, int b){
    /**
     * use ternary operator to find the maximum value
     */
    return a>b? a : b;
}

/**
 * overload the max function different datatype
 * @param a is a integer
 * @param b is a integer
 * @param c is a integer
 * @return maximum of three integers
 */
int max(int a, int b, int c){
    return max(max(a,b),c);
}
