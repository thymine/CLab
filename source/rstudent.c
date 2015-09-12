#include <stdio.h>
#include "student.h"

void read(FILE *fp, int index);

int main(int argc, char const *argv[])
{
	FILE *fp = fopen(FILE_NAME, "r");
	if (fp) {
		fseek(fp, 0L, SEEK_END);
		long size = ftell(fp);
		int number = size / sizeof(Student);
		int index = 0;
		printf("There are %d students, preview which one?\n", number);
		scanf("%d", &index);
		read(fp, index - 1);
		fclose(fp);
	}
	return 0;
}

void read(FILE *fp, int index) 
{
	fseek(fp, index * sizeof(Student), SEEK_SET);
	Student stu;
	if (fread(&stu, sizeof(Student), 1, fp)) {
		printf("Student %d:\n", index + 1);
		printf("\tName: %s\n", stu.name);
		printf("\tGender: ");
		switch (stu.gender) {
			case 0: printf("Male\n"); break;
			case 1: printf("Female\n"); break;
			case 2: printf("Others\n"); break;
		}
		printf("\tAge: %d\n", stu.age);
	}
}