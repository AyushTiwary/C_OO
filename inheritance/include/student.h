struct Student;

struct Student* newStudent(int age, int cls);
void setClass(struct Student* this, int cls);
int getClass(struct Student* this);
void delStudent(struct Student* this);