#include "Student.h"
#include "Header.h"

void main()
{	

	/*1.Student: �������, ���, ��������, ���� ��������, �����, �������, ���������, ����.
		������� ������ ��������.������� :
		a) ������ ��������� ��������� ����������;
		b) ������ ��������� ��� ������� ���������� � �����;
		c) ������ ���������, ���������� ����� ��������� ����.*/
	
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	Students student[4];
	NameCreation(student, 4);
	Faculty(student, 4);
	CourseNumb(student, 4);
	DateOfBirth(student, 4);
	printf("������ ����!!!\n");
	printf("������� 1, ����� ������� ��������� ���-�� ��������������\n");
	printf("������� 2, ����� ������� ��������� ���-�� ������������\n");
	int n;
	cin >> n;
	printStudents(student, 4, &n);
	printAllStudents(student, 4);
	
	system("pause");
}