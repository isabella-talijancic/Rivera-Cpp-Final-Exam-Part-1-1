// Multiply.cpp - This program prints the numbers 0 through 10 along
//                with these values multiplied by 2 and by 10.
// Input:  None
// Output: Prints the numbers 0 through 10 along with their values 
//         multiplied by 2 and by 10. 

#include <iostream>
#include <string>

using namespace std;

int main()
{
		
   string head1 = "Number: ";
   string head2 = "Multiplied by 2: ";
   string head3 = "Multiplied by 10: ";				
   int numberCounter  ; 	    // Numbers 0 through 10
   int byTen = 0;		            // Stores the number multiplied by 10
   int byTwo = 0; 		            // Stores the number multiplied by 2
   const int NUM_LOOPS = 10;    // Constant used to control loop

   // Housekeeping section
    
   cout << "Final Exam Part B";
    
   cout << "\n\n0 through 10 multiplied by 2 and by 10. \n\n" ;

   // DetailLoop section
   // * * * Write while loop here * * * 
    int count = 0;
    int sum = 0; 
    while (count < NUM_LOOPS)
    {
    	
        cout << "Number: " << sum ;
		cout << "\tby Two: " << byTwo ;
		cout << "\tby Ten: " << byTen << endl;
        ++sum;
        count++;
        byTwo = sum * 2;
        byTen = sum * 10;
    }
	
   
   // End of Job section
	cout << "\nEnd of Program";
	return 0;
} 