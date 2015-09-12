#include <stdio.h>
#include "student.h"

void get(Student stu[], int number);
int save(Student stu[], int number);

int main(int argc, char const *argv[])
{
	int number = 0;
	printf("Input number of students: ");
	scanf("%d", &number);
	Student stu[number];

	get(stu, number);
	if (save(stu, number)) {
		printf("Save succeed!\n");
	} else {
		printf("Save failed!\n");
	}
	return 0;
}

void get (Student stu[], int number)
{
	char format[STR_LEN];
	sprintf(format, "%%%ds", STR_LEN - 1);

	int i;
	for (i = 0; i < number; i++) {
		printf("Student %d:\n", i + 1);
		printf("\tName: ");
		scanf(format, stu[i].name);
		printf("\tGender(0: male, 1: female, 2: others): ");
		scanf("%d", &stu[i].gender);
		printf("\tAge:");
		scanf("%d", &stu[i].age);
	}
}

int save(Student stu[], int number)
{
	int ret = -1;
	FILE *fp = fopen(FILE_NAME, "w");
	if (fp) {
		ret = fwrite(stu, sizeof(Student), number, fp);
		fclose(fp);
	}
	return ret = number;
}