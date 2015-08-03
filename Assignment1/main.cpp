//My name is Sheerin Chaudhary and this will be my C++ program for assignment 1 Summer 2015
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Hi, I am Sheerin Chaudhary and I will be showing you the output of my first C++ Program." << endl;
    
    double x,y;
    
    for(x = -4.0;x <= 3.5;x = x + 0.5){
        
        y = (4 * x * x * x - 8 * x * x - 49 * x + 98) / (sqrt(5 * x * x + 3) + 4 * abs(x - 2.5));
        
        cout << "x = " << x << "  " << "y = " << y;
        
        if(y==0)
            
            cout << " y is zero" << endl;
        
        if(y<0)
            
            cout << " y is negative" << endl;
        
        if(y>0)
            
            cout << " y is positive" << endl;
    }
    cout << "I have now completed my first program and stop." << endl;
    
    return 0;
}

//This is the print of the output of the program.
Hi, I am Sheerin Chaudhary and I will be showing you the output of my first C++ Program.
x = -4  y = -2.56334 y is negative
x = -3.5  y = 0 y is zero
x = -3  y = 2.24694 y is positive
x = -2.5  y = 4.17757 y is positive
x = -2  y = 5.79053 y is positive
x = -1.5  y = 7.07968 y is positive
x = -1  y = 8.02214 y is positive
x = -0.5  y = 8.53391 y is positive
x = 0  y = 8.35319 y is positive
x = 0.5  y = 7.15595 y is positive
x = 1  y = 5.09717 y is positive
x = 1.5  y = 2.57237 y is positive
x = 2  y = 0 y is zero
x = 2.5  y = -2.05046 y is negative
x = 3  y = -1.45606 y is negative
x = 3.5  y = 0 y is zero
I have now completed my first program and stop.
