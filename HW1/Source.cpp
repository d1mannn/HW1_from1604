#include "Student.h"
#include "Header.h"

void main()
{	

	/*1.Student: Фамилия, Имя, Отчество, Дата рождения, Адрес, Телефон, Факультет, Курс.
		Создать массив объектов.Вывести :
		a) список студентов заданного факультета;
		b) списки студентов для каждого факультета и курса;
		c) список студентов, родившихся после заданного года.*/
	
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	Students student[4];
	NameCreation(student, 4);
	Faculty(student, 4);
	CourseNumb(student, 4);
	DateOfBirth(student, 4);
	printf("Добрый день!!!\n");
	printf("Введите 1, чтобы увидеть студентов фак-та Ориенталистики\n");
	printf("ВВедите 2, чтобы увидеть студентов фак-та Журналистики\n");
	int n;
	cin >> n;
	printStudents(student, 4, &n);
	printAllStudents(student, 4);
	
	system("pause");
}