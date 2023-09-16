/*Name: UYI ORONSAYE; JOSHUA OBIDUOH
  STUDENT ID: 40089481; 40109139
  FINAL PROJECT*/



#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#include "Student.h"
#include"Faculty.h"


using namespace std;



	// Creates a pointer type object for ECE students
	Student* ECE;
	// Creates a pointer type object for ME students
	Student* ME;
	// Creates a pointer type object for CE students
	Student* CE;
	// Counter for each branch
	int countECE, countME, countCE;



	// Function to display highest GPA for ECE, ME and CE

	void Highest_GPA()
	{


		// To store the index position
		int pos;
		// To store the highest GPA
		double highestGPA;

		// Check is counter for ECE is not zero then students are available
		if (countECE != 0)
		{
			// Sets the position to 0 for first student
			pos = 0;
			// Stores the first students GPA as highest student
			highestGPA = ECE[0].getGPA();

			// Loops till number of ECE students starting from 1
			// because 0th index position as considered as highest initially
			for (int c = 1; c < countECE; c++)
			{
				// Checks if current student GPA is greater then the earlier highest GPA
				if (ECE[c].getGPA() > highestGPA)
				{
					// Assigns the current student GPA to highest GPA
					highestGPA = ECE[c].getGPA();
					// Assigns the loop variable as the highest index position for student
					pos = c;
				}
			}
			// Displays the pos index position for the highest student
			cout << "\n Highest GPA for ECE student \n";
			ECE[pos].Print_Std_Info();
		}
		else
			cout << "\n No ECE students available.";

		// Check is counter for ME is not zero then students are available
		if (countME != 0)
		{
			// Sets the position to 0 for first student
			pos = 0;
			// Stores the first students GPA as highest student
			highestGPA = ME[0].getGPA();

			// Loops till number of ME students starting from 1
			// because 0th index position as considered as highest initially
			for (int c = 1; c < countME; c++)
			{
				// Checks if current student GPA is greater then the earlier highest GPA
				if (ME[c].getGPA() > highestGPA)
				{
					// Assigns the current student GPA to highest GPA
					highestGPA = ME[c].getGPA();
					// Assigns the loop variable as the highest index position for student
					pos = c;
				}
			}
			// Displays the pos index position for the highest student
			cout << "\n Highest GPA for ME student \n";
			ME[pos].Print_Std_Info();
		}
		else
			cout << "\n No ME students available.";

		// Check is counter for CE is not zero then students are available
		if (countCE != 0)
		{
			// Sets the position to 0 for first student
			pos = 0;
			// Stores the first students GPA as highest student
			highestGPA = CE[0].getGPA();

			// Loops till number of CE students starting from 1
			// because 0th index position as considered as highest initially
			for (int c = 1; c < countCE; c++)
			{
				// Checks if current student GPA is greater then the earlier highest GPA
				if (CE[c].getGPA() > highestGPA)
				{
					// Assigns the current student GPA to highest GPA
					highestGPA = CE[c].getGPA();
					// Assigns the loop variable as the highest index position for student
					pos = c;
				}
			}
			// Displays the pos index position for the highest student
			cout << "\n Highest GPA for CE student \n";
			CE[pos].Print_Std_Info();
		}
		else
			cout << "\n No CE students available.";
	}

	// Function to count and return number of under graduates based on parameter branch
	int N_of_UnderGrad(char branch)
	{
		int counter = 0;

		// Checks if branch is 'E' or 'e' for ECE
		if (branch == 'E' || branch == 'e')
		{
			// Loops till number of ECE students
			for (int c = 0; c < countECE; c++)
				// Checks if current student program is either 'B' or 'b' for bachelor
				if (ECE[c].getProgram() == 'B' || ECE[c].getProgram() == 'b')
					// Increase the counter by one
					counter++;
			return counter;
		}

		// Checks if branch is 'M' or 'm' for ME
		if (branch == 'M' || branch == 'm')
		{
			// Loops till number of ME students
			for (int c = 0; c < countME; c++)
				// Checks if current student program is either 'B' or 'b' for bachelor
				if (ME[c].getProgram() == 'B' || ME[c].getProgram() == 'b')
					// Increase the counter by one
					counter++;
			return counter;
		}

		// Checks if branch is 'C' or 'c' for CE
		if (branch == 'c' || branch == 'C')
		{
			// Loops till number of CE students
			for (int c = 0; c < countCE; c++)
				// Checks if current student program is either 'B' or 'b' for bachelor
				if (CE[c].getProgram() == 'B' || CE[c].getProgram() == 'b')
					// Increase the counter by one
					counter++;
			return counter;
		}
	}

	// Function to count and return number of graduates based on parameter branch
	int N_of_Grad(char branch)
	{
		int counter = 0;

		// Checks if branch is 'E' or 'e' for ECE
		if (branch == 'E' || branch == 'e')
		{
			// Loops till number of ECE students
			for (int c = 0; c < countECE; c++)
				// Checks if current student program is either 'M' or 'm' for Master
				// and 'P' or 'p' for Ph.D
				if (ECE[c].getProgram() == 'M' || ECE[c].getProgram() == 'm' ||
					ECE[c].getProgram() == 'P' || ECE[c].getProgram() == 'p')
					// Increase the counter by one
					counter++;
			return counter;
		}

		// Checks if branch is 'M' or 'm' for ME
		if (branch == 'M' || branch == 'm')
		{
			// Loops till number of ME students
			for (int c = 0; c < countME; c++)
				// Checks if current student program is either 'M' or 'm' for Master
				// and 'P' or 'p' for Ph.D
				if (ME[c].getProgram() == 'M' || ME[c].getProgram() == 'm' ||
					ME[c].getProgram() == 'P' || ME[c].getProgram() == 'p')
					// Increase the counter by one
					counter++;
			return counter;
		}

		// Checks if branch is 'C' or 'c' for CE
		if (branch == 'C' || branch == 'c')
		{
			// Loops till number of CE students
			for (int c = 0; c < countCE; c++)
				// Checks if current student program is either 'M' or 'm' for Master
				// and 'P' or 'p' for Ph.D
				if (CE[c].getProgram() == 'M' || CE[c].getProgram() == 'm' ||
					CE[c].getProgram() == 'P' || CE[c].getProgram() == 'p')
					// Increase the counter by one
					counter++;
			return counter;
		}
	}

	// Function to return average for under graduate based on specified branch as parameter
	double Avg_UnderGrad(char branch)
	{
		double total = 0;
		int counter = 0;

		// Checks if branch is 'E' or 'e' for ECE
		if (branch == 'E' || branch == 'e')
		{
			// Calls the function to get number of under graduate students from ECE
			counter = N_of_UnderGrad('E');

			// Loops till number of ECE students
			for (int c = 0; c < countECE; c++)
				// Checks if current student program is either 'B' or 'b' for bachelor
				if (ECE[c].getProgram() == 'B' || ECE[c].getProgram() == 'b')
					// Calculates total
					total += ECE[c].getGPA();

			// Calculates and returns average
			return total / (double)counter;
		}

		// Checks if branch is 'M' or 'm' for ME
		if (branch == 'M' || branch == 'm')
		{
			// Calls the function to get number of under graduate students from ME
			counter = N_of_UnderGrad('M');

			// Loops till number of ME students
			for (int c = 0; c < countME; c++)
				// Checks if current student program is either 'B' or 'b' for bachelor
				if (ME[c].getProgram() == 'B' || ME[c].getProgram() == 'b')
					// Calculates total
					total += ME[c].getGPA();
			// Calculates and returns average
			return total / (double)counter;
		}

		// Checks if branch is 'C' or 'c' for CE
		if (branch == 'C' || branch == 'c')
		{
			// Calls the function to get number of under graduate students from CE
			counter = N_of_UnderGrad('C');

			// Loops till number of CE students
			for (int c = 0; c < countCE; c++)
				// Checks if current student program is either 'B' or 'b' for bachelor
				if (CE[c].getProgram() == 'B' || CE[c].getProgram() == 'b')
					// Calculates total
					total += CE[c].getGPA();
			// Calculates and returns average
			return total / (double)counter;
		}
	}

	// Function to return average for graduate based on specified branch as parameter
	double Avg_Grad(char branch)
	{
		double total = 0;
		int counter = 0;

		// Checks if branch is 'E' or 'e' for ECE
		if (branch == 'E' || branch == 'e')
		{
			// Calls the function to get number of graduate students from ECE
			counter = N_of_UnderGrad('E');

			// Loops till number of ECE students
			for (int c = 0; c < countECE; c++)
				// Checks if current student program is either 'M' or 'm' for Master
				// and 'P' or 'p' for Ph.D
				if (ECE[c].getProgram() == 'M' || ECE[c].getProgram() == 'm' ||
					ECE[c].getProgram() == 'P' || ECE[c].getProgram() == 'p')
					// Calculates total
					total += ECE[c].getGPA();
			// Calculates and returns average
			return total / (double)counter;
		}

		// Checks if branch is 'M' or 'm' for ME
		if (branch == 'M' || branch == 'm')
		{
			// Calls the function to get number of graduate students from ME
			counter = N_of_UnderGrad('M');

			// Loops till number of ME students
			for (int c = 0; c < countME; c++)
				// Checks if current student program is either 'M' or 'm' for Master
				// and 'P' or 'p' for Ph.D
				if (ME[c].getProgram() == 'M' || ME[c].getProgram() == 'm' ||
					ME[c].getProgram() == 'P' || ME[c].getProgram() == 'p')
					// Calculates total
					total += ME[c].getGPA();
			// Calculates and returns average
			return total / (double)counter;
		}

		// Checks if branch is 'C' or 'c' for CE
		if (branch == 'C' || branch == 'c')
		{
			// Calls the function to get number of under graduate students from CE
			counter = N_of_UnderGrad('C');

			// Loops till number of CE students
			for (int c = 0; c < countCE; c++)
				// Checks if current student program is either 'M' or 'm' for Master
				// and 'P' or 'p' for Ph.D
				if (CE[c].getProgram() == 'M' || CE[c].getProgram() == 'm' ||
					CE[c].getProgram() == 'P' || CE[c].getProgram() == 'p')
					// Calculates total
					total += CE[c].getGPA();
			// Calculates and returns average
			return total / (double)counter;
		}
	};// End of class Faculty