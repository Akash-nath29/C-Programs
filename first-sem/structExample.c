//Student management system
#include <stdio.h>
#include <string.h>

struct Student {
	int id;
	char name[50];
	int marks;
};

void showStudentCredentials(struct Student student){
	printf("%d\n", student.id);
	printf("%s\n", student.name);
	printf("%d\n", student.marks);
}

int main(){
	struct Student student;
	student.id = 1;
	strcpy(student.name, "Akash");
	student.marks = 450;
	showStudentCredentials(student);
//	printf("%d", student.id);
//	printf("%s", student.name);
//	printf("%d", student.marks);
	return 0;
}