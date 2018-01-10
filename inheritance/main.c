#include <stdio.h>
#include "include/person.h"
#include "include/student.h"

int main(void){
	struct Student* stu = newStudent(10, 4);
	printf("Age: %d, Class: %d\n", getAge((struct Person*)stu), getClass(stu));
	// inheritance, Student get method from Person
	setAge((struct Person*) stu, 15);
	setClass(stu, 9);

	printf("Age: %d, Class: %d\n", getAge((struct Person*)stu), getClass(stu));
	delStudent(stu);
}