// ------------- FILE HEADER -------------
// Author ✅: Phoenix Morgan
// Assignment ✅: Assignment 1
// Date ✅: 9/28/25
// Citations: https://learn.zybooks.com/zybook/PCCCS161AFall25

// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 1
// Participation ✅: 27%
// Challenge ✅: 29%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional):

// ------------- DESIGN -------------
//Program Name: Payroll calculator.

//program Description: This program takes an employee i.d, hours worked,
//pay rate, and federal withholding percent to calculate gross pay, 
//federal tax withholding, and net pay all in U.S dollars. 

// ------------- DESIGN DOCUMENT -------------
// Design:
// A. INPUT
// int employee_id = 0;
// int hours_worked = 0;
// int usd_per_hour = 0;
// int federal_withholding_percent = 0;

// B. OUTPUT
// int gross_pay_usd = 0;
// double federal_tax_withholding_usd = 0.0;
// double net_pay_usd = 0.0;

// C. CALCULATIONS
// gross_pay_usd = hours_worked * usd_per_hour;
// double decimal_withholding_percentage = federal_withholding_percent / 100.0;
// federal_tax_withholding_usd = gross_pay_usd * decimal_withholding_percentage;
// net_pay_usd = gross_pay_usd - federal_tax_withholding_usd;

// D. LOGIC and ALGORITHMS
// Design the logic of your program using pseudocode or flowcharts.
// Use conditionals, loops, functions or array constructs.
// List the steps in transforming inputs into outputs.
// https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

// MESSAGE "Welcome to my weekly payroll program"

// PROMPT "Enter your employee ID number (numbers only): "
// INPUT employee_id

// PROMPT Enter number of hours worked (whole numbers): 
// INPUT hours_worked

// PROMPT Enter the hourly rate: 
// INPUT usd_per_hour

// PROMPT Enter the federal withholding rate: 
// INPUT federal_withholding_percent

// DO CALCULATIONS

// MESSAGE "Your payroll calculations"

// LABEL "Total Gross Pay: $"
// DATA total_gross_pay_usd

// LABEL "Federal Tax Withholding: $"
// DATA federal_tax_withholding_usd

// LABEL "Net pay: $"
// DATA "net_pay_usd"


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: Yes
// (Optional) Additional tests count:
/*
SAMPLE RUNS
Copy from assignment document.
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!
- - - - - - - - - - - - -- - - - - - - - - - - - 
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!

*/


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
int employee_id = 0;
int hours_worked = 0;
int usd_per_hour = 0;
int federal_withholding_percent = 0;

int gross_pay_usd = 0;
double federal_tax_withholding_usd = 0.0;
double net_pay_usd = 0.0;

cout << "Welcome to my weekly payroll program" << endl;

cout << "Enter your employee ID number (numbers only): ";
cin >> employee_id;

cout << "Enter number of hours worked (whole numbers): ";  
cin >> hours_worked; 

cout << "Enter the hourly rate: "; 
cin >> usd_per_hour;

cout << "Enter the federal withholding rate: ";
cin >> federal_withholding_percent;

gross_pay_usd = hours_worked * usd_per_hour;
double decimal_withholding_percentage = federal_withholding_percent / 100.0;
federal_tax_withholding_usd = gross_pay_usd * decimal_withholding_percentage;
net_pay_usd = gross_pay_usd - federal_tax_withholding_usd;

cout << "Your payroll calculations" << endl;

cout << "Total Gross Pay: $";
cout << gross_pay_usd << endl;

cout << "Federal Tax Withholding: $";
cout << federal_tax_withholding_usd << endl;

cout << "Net pay: $";
cout << net_pay_usd << endl;
    return 0;
}