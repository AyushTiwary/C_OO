struct Person;

struct Person* newPerson(int age);
void delPerson(struct Person* this);
int getAge(struct Person* this);
void setAge(struct Person* this, int age);