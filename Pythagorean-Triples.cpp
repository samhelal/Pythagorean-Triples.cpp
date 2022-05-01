/*(Pythagorean Triples) A right triangle can have sides whose lengths are all integers.
The set of three integer values for the lengths of the sides of a right triangle is called
a Pythagorean triple. The lengths of the three sides must satisfy the relationship that 
the sum of the squares of two of the sides is equal to the square of the hypotenuse. Write
an application that displays a table of the Pythagorean triples for side1 , side2 and the
for hypotenuse ,all no larger than 500. Use a triple-nested loop that tries all possibilities.
This is an example of “brute- force” computing. You’ll learn in more advanced computer- science
courses that for many interesting problems there’s no known algorithmic approach other than
using sheer brute force. (c++ how to program)*/

#include <iostream>
#include <iomanip>
using namespace std ;

int main (){
    
    unsigned int counter(500) ;
    int linenum(1);

    cout << setw(3) << "Line number" << setw(10) << "Side 1" << setw(15)
         << "Side2" << setw(15) << "Hypotenuse" << endl ;

    for(int side1(1) ; side1<=counter ; side1++){
        int aa = side1*side1 ;
        
        for(int side2(1) ; side2<=counter ; side2++){
            int bb = side2 * side2 ;
            int sum = aa + bb ; 

            for(int hypotenuse(1) ; hypotenuse<=counter ; hypotenuse++){

                int cc = hypotenuse * hypotenuse ;
                
                if(sum == hypotenuse){

                    cout << setw(3) << linenum << setw(15) <<  aa << setw(15) << bb 
                         << setw(15) << cc << endl ;
                    linenum++ ;
                }
            }
        }
    }
        
    
}