/**************************************************************
 * @author Thanh Tung Vo
 * @class COSC 1436
 * @category Module 12 Assignment
 * @file main.cpp
 * @details This program is a letter generator that will generate a letter
 * to a customer who has a past due balance. The program will ask the user
 * for the customer's first name, last name, balance, past due amount, and
 * the last payment date. The program will then generate a letter to the
 * customer with the information provided.
 **************************************************************/
#include <iomanip>
#include <iostream>

using namespace std;

// global variable definitions

// constants used for the form letter print out
const char part1[] = "Dear ";
const char part2[] = "Our records show that your account has a"
                     " balance of $";
const char part3[] = " and a past due amount of $";
const char part4[] = " Your last payment was on ";
const char part5[] = " Please pay the past-due amount as soon as possible.\n\n";
const char part6[] = "Please ignore this letter if you have already sent payment.\n";
const char part7[] = "\nSincerely,\n";
const char part8[] = "Blue Star Electric";

// constants for the size of name and character arrays
const int SIZE_OF_NAME = 20;
const int SIZE_OF_MONEY = 10;

// payment structure to hold customer payment information and used inside the
// customer structure
struct Payment{
  char balance[SIZE_OF_MONEY];
  char pastDue[SIZE_OF_MONEY];
  char paymentDate[SIZE_OF_MONEY];
};

// customer structure to hold customer name and also contains the Payment structure
struct Customer{
  char firstName[SIZE_OF_NAME];
  char lastName[SIZE_OF_NAME];
  Payment paymentInfo;					
};

// function prototypes
	Customer getInfo();               		// get customer information
	void printLetter(Customer payee); 		// controls the printing of form

void printLine(Customer info, int position);

/****************************************************************
 *                      main function
 ****************************************************************/
int main()
{
	// local variables
	// hold character (Y/N) for while loop
	char again;		

	// set the character to Y so the do/while loop will execute at least once
	again = 'Y';
	do{
		
			// Create customer object for the functions to be executed on
			Customer information;
		
			// Call function to get information from user
			information = getInfo();
		
			// Call fuction to start the printing of the form letter
			printLetter(information);

			// prompt the user to ask if they would like to print another letter
			cout << "\n\nDo you want to print another letter?  Enter 'Y' for yes or 'N' for no: ";
			cin >> again;

	// checks for the condition to exit loop
	}while(toupper(again) == 'Y');

	cout << "\nYou have selected 'No' to not continue." << endl;
	cout << "End of program." << endl;
	cout << "\n\nThank you. Have a nice day.\n\n";

  return 0;
} // end of main

/***************************************************************
*							   function defintions
****************************************************************/

/***************************************************************
 * @name getInfo()
 * @return the structure named input
 * @details This function prompts the user to enter their name
 * and payment information.  The information will be stored in a
 * structure and passed back to main function.
 ****************************************************************/
Customer getInfo()
{
  // Create a customer object to hold the user input from screen
  Customer input;

  // Prompt user to enter their name and payment information
  cout << "\n\nEnter your First Name: ";
  cin >> input.firstName;
  cout << "Enter your Last Name: ";
  cin >> input.lastName;
  cout << "Enter your balance: ";
  cin >> input.paymentInfo.balance;
  cout << "Enter your Past Due: ";
  cin >> input.paymentInfo.pastDue;
  cout << "What was the your last payment date?: ";
  cin >> input.paymentInfo.paymentDate;

  // return the input to main function
  return input;
} // end of getInfo()

/****************************************************************
 * @name printLetter()
 * @param payee The structure that holds all the fields for the
 * information to be stored
 * @details the function controls the printing of the of the form
 * letter. It will make function call to printLine once the fields
 * receive input.
 ****************************************************************/
void printLetter(Customer payee)
{
	// variable to hold the print position 
	int print_position = 0;

	// This function will be un-commented when the function is fully defined
	// printLine(payee, print_position);
 
	cout << "\n"
       << part1 << payee.firstName << " " << payee.lastName << ",\n"
       << part2 << payee.paymentInfo.balance << part3 << payee.paymentInfo.pastDue << "." << part4 <<
        payee.paymentInfo.paymentDate << "." << part5;
  cout << part6 << part7 << part8 << endl;

}// end printLetter

/****************************************************************
 * @name printLine()
 * @param info The structure that holds all the fields for the
 * information to be stored
 * @param position this holds the last position that was printed 
 * on the letter so that we know where to continue.
 * @details the function controls the printing of the of the form
 * letter. It will make function call to printLine once the fields
 * receive input.
 ****************************************************************/
void printLine(Customer info, int position)
{
	
}// end printLine