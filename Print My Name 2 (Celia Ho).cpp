// Description: This program 
//		customizes the title bar,
//		customizes the color of the cmp window,
//		prints a centered banner using the WYSIWYG approach, and
//		prints my name in double quotes. 
// Title: Print My Name 2
// Programmer: C. Ho
// Last Modified: Mon. Sept. 18, 2023 @ 4:50 PM

// PREPROCESSOR DIRECTIVE SECTION
#include <iostream>
using namespace std;

// FUNCTION DECLARATION SECTION, INCLUDING FUNCTION PROTOTYPES - N/A IN THIS LAB

// MAIN SUB-SECTION
int main()
{
	// SET UP SECTION
	// System function call to change the text in title bar
	system("title .          Print My Name 2     by C. Ho");
	// System function call to change the color of the cmp window
	system("color b1");

	// VARIABLE DECLARATION SECTION - N/A IN THIS LAB

	// INPUT SECTION - N/A IN THIS LAB

	// PROCESSING SECTION - N/A IN THIS LAB

	// Centered banner using the WYSIWYG approach
	cout << "\n"
		<< "\t\t This lab prints my name on the monitor \n"
		<< "\t\t          within double quotes          \n"
		<< "\t\t                Lab #1                  \n"
		<< "\t\t               by C. Ho                 \n\n\n";

	// OUTPUT SECTION
	// Last name printed in double quotes
	cout << "\"Ho\"\n\n";

	// CLEAN UP SECTION
	system("pause");
	return 0;
// MAIN ENDS
}