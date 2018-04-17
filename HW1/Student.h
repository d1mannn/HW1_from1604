#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct DOB
{
	int day;
	int month;
	int year;
};

class Students
{
public:
	void setFname(const string &fName) {
		this->fName = fName;
	}
	void setlname(const string &lName) {
		this->lName = lName;
	}
	void setMname(const string &mName) {
		this->mName = mName;
	}
	void setDate(const int &date) {
		this->date.day = date;
	}
	void setMonth(const int &month) {
		this->date.month = month;
	}
	void setYear(const int &year) {
		this->date.year = year;
	}
	void setFaculty(const string &faculty) {
		this->faculty = faculty;
	}
	void setCourse(const int &course) {
		this->course = course;
	}
	void show()
	{
		cout << lName << "\t" << fName << "\t" << mName << "\t" << faculty << "\t" << course <<"\t"<< date.year<<endl;
	}
	void show2(string faculty)
	{
		if (this->faculty == faculty)
		{
			cout << lName << "\t" << fName << "\t" << mName << "\t" << faculty << "\t" << course << "\t" << date.year << endl;
		}
	}

	void show3(int n)
	{
		if(this->course == n)
			cout << lName << "\t" << fName << "\t" << mName << "\t" << faculty << "\t" << course << "\t" << date.year << endl;
	}
	void show4(int year)
	{
		if (this->date.year > year)
			cout << lName << "\t" << fName << "\t" << mName << "\t" << faculty << "\t" << course << "\t" << date.year << endl;
	}
private:
	string lName;
	string fName;
	string mName;
	DOB date;
	string addres;
	int phonenumb;
	string faculty;
	int course;
	int countOfStudents;
};


