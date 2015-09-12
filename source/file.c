#include <stdio.h>

#define FILE_NAME "sp.in.txt"

int main(int argc, char const *argv[])
{
	FILE *fp = fopen(FILE_NAME, "r");
	if (fp) {
		int num;
		fscanf(fp, "%d", &num);
		printf("%d\n", num);
//		fprintf(fp, "%d", num);
		fclose(fp);
	} else {
		printf("Open file '%s' failed!\n", FILE_NAME);
	}
	return 0;
}