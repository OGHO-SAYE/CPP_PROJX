/*Name: UYI ORONSAYE; JOSHUA OBIDUOH
  STUDENT ID: 40089481; 40109139
  FINAL PROJECT
  
  We certify that this submission is the original work of members of the group and meetS the Faculty's Expectations of Originality*/


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


#include"Faculty.h"



using namespace std;

int main()
{
	int counter;
	double average;
	

	// Creates an object of class Faculty
	Faculty f;

	// Calls the functions and displays result
	cout << "\n\n  Highest GPA ";
	f.Highest_GPA();

	cout << "\n\n  Number of Under Graduate Students ";
	counter = f.N_of_UnderGrad('E');
	cout << "\n Number of Under Graduate Students from ECE: " << counter;
	counter = f.N_of_UnderGrad('M');
	cout << "\n Number of Under Graduate Students from ME: " << counter;
	counter = f.N_of_UnderGrad('C');
	cout << "\n Number of Under Graduate Students from CE: " << counter;

	cout << "\n\n Number of Graduate Students ";
	counter = f.N_of_Grad('E');
	cout << "\n Number of Graduate Students from ECE: " << counter;
	counter = f.N_of_Grad('M');
	cout << "\n Number of Graduate Students from ME: " << counter;
	counter = f.N_of_Grad('C');
	cout << "\n Number of Graduate Students from CE: " << counter;

	cout << "\n\n *********** Average GPA of Under Graduate Students Branch Wise *********** ";
	average = f.Avg_UnderGrad('E');
	cout << "\n Average GPA for ECE: " << average;
	average = f.Avg_UnderGrad('M');
	cout << "\n Average GPA for ME: " << average;
	average = f.Avg_UnderGrad('C');
	cout << "\n Average GPA for CE: " << average;

	cout << "\n\n *********** Average GPA of Graduate Students Branch Wise *********** ";
	average = f.Avg_Grad('E');
	cout << "\n Average GPA for ECE: " << average;
	average = f.Avg_Grad('M');
	cout << "\n Average GPA for ME: " << average;
	average = f.Avg_Grad('C');
	cout << "\n Average GPA for CE: " << average;
	return 0;
}