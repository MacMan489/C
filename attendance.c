/*Assignment: 
 * Write a C program that appends your student identification 
 * number to a file called attendance.dat located in a 
 *folder c:\programming\exam
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int SID = 1000;
	FILE *fp;	
	fp = fopen("c:\\programming\\exam", "a");
	if (fp == NULL) {
		printf("error opening file.\n");
		exit(0);
	}
	fprintf(fp, "%d", SID);
	fclose(fp);

	return 0;
}

