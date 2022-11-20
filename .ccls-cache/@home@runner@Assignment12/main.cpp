#include <iomanip>
#include <iostream>

using namespace std;

	struct t_date{
	int day;
  int mon;
  int year;
	};

// function prototype
t_date getDate();

int main() {

	
  const char part1[] = "Dear ";
  const char part2[] = "Our records show that your account has a"
                       " balance of $";
  const char part3[] = " and a past due amount of $";
  const char part4[] = " Your last payment was on ";
  const char part5[] =
      " Please pay the past-due amount as soon as possible.\n\n";
  const char part6[] =
      "Please ignore this letter if you have already sent payment.\n";
  const char part7[] = "\nSincerely,\n";
  const char part8[] = "Blue Star Electric";

  char fname[20];
  cout << "Enter your First Name: ";
  cin >> fname;
  char lname[20];
  cout << "Enter your Last Name: ";
  cin >> lname;
  int balance;
  cout << "Enter your balance: ";
  cin >> balance;
  int pastdue;
  cout << "Enter your Past Due: ";
  cin >> pastdue;
  
	t_date date_input;
	
	date_input = getDate();
  
	cout << "\n"
       << part1 << fname << " " << lname << ",\n"
       << part2 << balance << part3 << pastdue << "." << part4 << date_input.day
       << date_input.mon << date_input.year << "." << part5;
  cout << part6 << part7 << part8;

  return 0;
}

// function definition
t_date getDate() {

	// create structure to hold date
	t_date time;
  
  cout << "Enter your last payment date: ";
  cin >> time.day >> time.mon >> time.year;

	// return
	return time;
	
}

