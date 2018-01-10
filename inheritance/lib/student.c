#include <stdio.h>
#include <stdlib.h>
#include "../include/student.h"

struct Student{
	int age;
	int cls;
};

struct Student* newStudent(int age, int cls){
	struct Student* stu = malloc(sizeof(struct Student));
	stu->age = age;
	stu->cls = cls;
	return stu;
}
void setClass(struct Student* this, int cls){
	this->cls = cls;
}
int getClass(struct Student* this){
	return this->cls;
}
void delStudent(struct Student* this){
	free(this);
}