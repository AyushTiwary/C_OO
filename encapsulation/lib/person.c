#include <stdio.h>
#include <stdlib.h>
#include "../include/person.h"

struct Person {
	int age;
};

struct Person* newPerson(int age){
	struct Person* p = malloc(sizeof(struct Person));
	p->age = age;
	return p;
}

void delPerson(struct Person* this){
	free(this);
}

int getAge(struct Person* this){
	return 
	this->age;
}
void setAge(struct Person* this, int age){
	this->age = age;
}