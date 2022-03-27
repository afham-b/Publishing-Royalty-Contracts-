//Afham Bashir. Assignment 4. Publishing Royalties.  
#include <iostream>
#include <iomanip>  
using namespace std; 

const double option1_royalty= 25000.00;    // constatnt for 25k payout for option 1
const double option2_percent = 0.125;      // the 12.5 % rate the author gets with option 2 
const double option3_percent1= 0.1;        // the 10% rate the author gets in option 3 for the first 4k units sold. 
const double option3_percent2= 0.14;       // the 14% rate the author gets in option 3 for post 4k units sold. 

int main () {
double net_price;                   // net price of each book, double type for dollar and cents 
int estimated_units;                // how many books will be sold, int for whole numbers
double option2_royalty;             // calculated royalty for option 2 in dollars and cents. 
double option3_royalty;             // calculate royalty for option 3 in dollar and cents. 

cout << endl;                                                   // empty line for space 
cout << "Author Royalties Calculator" <<endl;                   //title of program 
cout << endl;                                                   //empty line for space      
cout << "Enter the net price of each copy of the novel: $";     // prompt user to input net peice 
cin >> net_price;                                               // assigns value to net price 
cout << "Enter number of novels estimated to be sold: ";        // prompts user for estimated units sold
cin >> estimated_units;                                         // assigns value to estimated units 

option2_royalty= option2_percent*(net_price*estimated_units);   //calcuated option 2 royalties. 0.125 times the net price times the estimated units 

if (estimated_units > 4000)                                    // tell program to follow different algorithms for option 3 depending on how many estimated units there are. the boolean expression being is the estimated units if above 4k. 
  option3_royalty= option3_percent1*(net_price*4000)          
  +option3_percent2*(net_price*(estimated_units-4000));       //option 3 is calcuated by 0.1 times netprice times estimated_units plus 0.14 times 4000 less than estimated units. This algorithm is executed if the estimated sold units is above 4k. 
  else 
    option3_royalty= option3_percent1*(net_price*estimated_units); // the algorithm for calculating option 3 royalties if the estimated units sold is less than 4k. 

cout << endl;                                                             // emoty line for space 
cout << setprecision(2)<<fixed;                                           //sets the output apprioprately for dollars and cents. 
cout << "Option 1 Royalties: $" << setw(11) << option1_royalty <<endl;    // outputs option 1 royalty, allgined with set w. 
cout << "Option 2 Royalties: $" << setw(11) << option2_royalty <<endl;    // outputs option 2 royalty. 
cout << "Option 3 Royalties: $" << setw(11) << option3_royalty <<endl;    // outputs option 3 royalty 
cout << endl;                                                             //empty line for space. 

if (option1_royalty > option2_royalty && option1_royalty > option3_royalty)    //tells the program to execute statement below if the value of option 1 royalty is above option 2 royalty AND also above option 3. 
    cout << "OPTION 1 is the best option for the Author." <<endl;              //outputs that option 1 is the best.  
if (option2_royalty > option1_royalty && option2_royalty > option3_royalty)    // tells the pgram to execute statement below if the value of option 2 royalties value is above option 2 royalties AND ALSO above option 3. 
    cout << "OPTION 2 is the best option for the Author." <<endl;              //outputs that option 2 is the best.
if (option3_royalty > option1_royalty && option3_royalty > option2_royalty)    // tells the pgram to execute statement below if the value of  option 3 royalties value is above option 1 royalties AND ALSO above option 2. 
    cout << "OPTION 3 is the best option for the Author." <<endl;              //outputs that option 3 is the best.

return 0;
}