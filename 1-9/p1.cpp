// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
#include <bitset> //for bitset
#include <cmath> //for sqrt and ceil

int main() 
{

    int total = 0;

    for(int i = 1; i < 1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0){ 
            //printf("%d\n", i);
            { total += i; }
        }
    }

    printf("%d", total);

    return 0;
}