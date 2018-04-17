#include "Student.h"

void NameCreation(Students *student, int countOfPeople)
{
	int length;
	char *name;
	for (int i = 0; i < countOfPeople; i++)
	{
		length = 4 + rand() % 2;
		name = new char[length];
		for (int j = 0; j < length; j++)
		{
			name[j] = (char)97 + rand() % 26;
		}
		name[length] = '\0';
		name[0] = toupper(name[0]);
		student[i].setFname(name);

		length = 4 + rand() % 2;
		//name = new char[length];
		for (int j = 0; j < length; j++)
		{
			name[j] = (char)97 + rand() % 26;
		}
		name[length] = '\0';
		name[0] = toupper(name[0]);
		student[i].setlname(name);

		length = 4 + rand() % 2;
		//name = new char[length];
		for (int j = 0; j < length; j++)
		{
			name[j] = (char)97 + rand() % 26;
		}
		name[length] = '\0';
		name[0] = toupper(name[0]);
		student[i].setMname(name);
	}
}

void Faculty(Students *student, int countofPeople)
{	
	int n;
	for (int i = 0; i < countofPeople; i++)
	{
		n = 0 + rand() % 2;
		switch (n)
		{
		case 0: { student[i].setFaculty("Orientalistik");
		}break;
		case 1: {student[i].setFaculty("Journalist");
		}break;
		}
	}
}

void CourseNumb(Students *student, int countofPeople)
{
	int n;
	for (int i = 0; i < countofPeople; i++)
	{
		n = 0 + rand() % 2;
		switch (n)
		{
		case 0: { student[i].setCourse(1);
		}break;
		case 1: {student[i].setCourse(2);
		}break;
		}
	}
}

void DateOfBirth(Students *student, int countofPeople)
{	
	int day;
	int month;
	int year;
	for (int i = 0; i < countofPeople; i++)
	{
		day = 1 + rand() % 30;
		student[i].setDate(day);
		month = 1 + rand() % 12;
		student[i].setMonth(month);
		year = 1985 + rand() % 20;
		student[i].setYear(year);
	}
}

void printStudents(Students *student, int countofPeople, int *n)
{
	string Or = "Orientalistik";
	string Jour = "Journalist";
	cout << endl;
	switch (*n)
	{
	case 1:
	{
		for (int i = 0; i < 4; i++)
		{
			student[i].show2(Or);
		}
	} break;
	case 2:
	{
		for (int i = 0; i < 4; i++)
		{
			student[i].show2(Jour);
		}
	} break;
	}
}
void printAllStudents(Students *student, int countofPeople)
{
	string Or = "Orientalistik";
	string Jour = "Journalist";
	cout << endl << endl;
	cout << "Студенты первого курса:\n";
	for (int i = 0; i < countofPeople; i++)
		student[i].show3(1);
	cout << "\nСтуденты второго курса:\n";
	for (int i = 0; i < countofPeople; i++)
		student[i].show3(2);
	cout << endl << endl;
	cout << "Студенты фак-та Ориенталистики:\n";
	for (int i = 0; i < countofPeople; i++)
	{
		student[i].show2(Or);
	}
	cout << endl << endl;
	cout << "Студенты фак-та Журналистики:\n";
	for (int i = 0; i < countofPeople; i++)
	{
		student[i].show2(Jour);
	}
	cout << endl << endl;
	cout << "Студенты родившиеся после 1990:\n";
	for (int i = 0; i < countofPeople; i++)
	{
		student[i].show4(1990);
	}

}

