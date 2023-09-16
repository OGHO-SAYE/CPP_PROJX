/*Name: UYI ORONSAYE; JOSHUA OBIDUOH
  STUDENT ID: 40089481; 40109139
  FINAL PROJECT*/

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class Student
{
	// Define the student data information
	string firstName;
	string lastName;
	string id;
	string dob;
	double gpa;
	int startYear;
	double completedCredit;
	char program;

public:
	// Default constructor 
	Student()
	{
		firstName = lastName = id = dob = "";
		gpa = 0.0;
		startYear = 0;
		completedCredit = 0.0;
		program = ' ';
	}

	// Parameterized constructor
	Student(string fn, string ln, string id, string d, double g, int sy, double cc, char p)
	{
		firstName = fn;
		lastName = ln;
		dob = d;
		gpa = g;
		startYear = sy;
		completedCredit = cc;
		program = p;
	}

	// Set Getter function 
	string getGirstName()
	{
		return firstName;
	}
	string getLastName()
	{
		return lastName;
	}
	string getID()
	{
		return id;
	}
	string getDOB()
	{
		return dob;
	}
	double getGPA()
	{
		return gpa;
	}
	int getStartYear()
	{
		return startYear;
	}
	double getCompletedCredit()
	{
		return completedCredit;
	}
	char getProgram()
	{
		return program;
	}

	// Set setter functions
	void setFirstName(string fn)
	{
		firstName = fn;
	}
	void setLastName(string la)
	{
		lastName = la;
	}
	void setID(string i)
	{
		id = i;
	}
	void setDOB(string d)
	{
		dob = d;
	}
	void setGPA(double g)
	{
		gpa = g;
	}
	void setStartYear(int sy)
	{
		startYear = sy;
	}
	void setCompletedCredit(double cc)
	{
		completedCredit = cc;
	}
	void setProgram(char p)
	{
		program = p;
	}

	// Function to display each student's Info
	void Print_Std_Info()
	{
		cout << "\n First Name: " << firstName << "\n Last Name: " << lastName << "\n ID: " << id << "\n Date of birth: " << dob
			<< "\n GPA: " << gpa << "\n Start Year: " << startYear << "\n Completed Credit: " << completedCredit;
		if (program == 'B' || program == 'b')
			cout << "\n Program: Bachelor.";
		else if (program == 'M' || program == 'm')
			cout << "\n Program: Master's.";
		else if (program == 'P' || program == 'p')
			cout << "\n Program: Ph.D.";
		else
			cout << "\n Program: Invalid Program.";
		cout << endl;
	}

};