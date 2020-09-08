/**
 * Created by Hasan Masum on 08-Sep-20.
 */

#include<iostream>
using namespace std;

/**
 * prototype of the function
 * specify the default value for the c
 */
int max(int a, int b, int c = 0);

int main(){

    /**
     * use default value for c
     */
    cout<<max(10,20)<<endl; //prints 20
    /**
     * specify all the 3 values
     */
    cout<<max(20,10,18)<<endl; //prints 20
}

/**
 * overload the max function different datatype
 * @param a is a integer
 * @param b is a integer
 * @param c is a integer which default value is 0 if not specified
 * default value is specified in the prototype
 * @return maximum of three integers
 */
int max(int a, int b, int c) {
    if (c)
        return a > b ? (a > c ? a : c) : (b > c ? b : c);

    return a>b? a: b;
}