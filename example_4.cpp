/**
 * Created by Hasan Masum on 08-Sep-20.
 */

#include<iostream>
using namespace std;

/**
 * prototype of the absolute value functions
 * @return absolute value of the given value
 */
/*abs means absolute value*/
int abs(int x);
float abs(float x);
double abs(double y);

int main(){
    /**
     * calls the function with integer parameter
     */
    cout<<abs(-5)<<endl;
    /**
     * calls the function with float parameter
     */
    cout<<abs(5.5f)<<endl;
    /**
     * calls the function with doble parameter
     */
    cout<<abs(-5.55)<<endl;
}

/**
 * @return the absolute value of intger x
 */
int abs(int x){
    return x<0 ? -x : x;
}

/**
 * @return the absolute value of float x
 */
float abs(float x){
    return x<0 ? -x : x;
}

/**
 * @return the absolute value of the double x
 */
double abs(double x){
    return x<0 ? -x : x;
}
