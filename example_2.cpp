/**
 * Created by Hasan Masum on 08-Sep-20.
 */

#include<iostream>
using namespace std;

/**
 * prototype of the two overloaded function
 */
int max(int a, int b);
double max(double a, double b);

int main(){
    /**
     * call the overloaded functions from main and print the values
     */
    cout<<max(10,20)<<endl; //prints 20
    cout<<max(15.6,5.6)<<endl; //prints 20
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
 * overload the max function with 3 variables
 * @param a is a integer
 * @param b is a integer
 * @param c is a integer
 * @return maximum of three integers
 */
double max(double a, double b){
    return a>b? a:b;
}
