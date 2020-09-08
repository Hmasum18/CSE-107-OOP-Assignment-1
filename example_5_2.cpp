/**
 * Created by Hasan Masum on 08-Sep-20.
 */

#include<iostream>
using namespace std;

/**
 * prototype of the function
 * @return the summation of the given values
 */
int sum(int a = 0 , int b = 0 , int c = 0 , int d = 0);

int main(){
    cout<<sum(1,2)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2,3,4)<<endl;
}

/**
 * @return summation of given integers
 * if not specified each parameter uses default value 0
 */
int sum(int a, int b, int c, int d){
    return a+b+c+d;
}

