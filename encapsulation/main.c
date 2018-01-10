#include "include/person.h"
#include <stdio.h>
// don't know the implementation of Person.c
int main(void){
	struct Person* p = newPerson(21);
	printf("%d\n", getAge(p));

	setAge(p, 30);
	printf("%d\n", getAge(p));

	delPerson(p);
}