//Activity: pass numbers to a program from the command line
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *arg[]) {
	int numPlants;
	double price;
	
	if (argc != 3) {
		printf("Invalid input\n");
	} else {
		numPlants = atoi(arg[1]);
		price = atof(arg[2]);
		printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n",
		            numPlants, price, numPlants*price);
	}
	
	return 0;
}


*/


//Activity: read numbers from a file


/*

#include <stdio.h>

int main(void) {
	
	FILE *file;
	int count, grade, i;
	double sum = 0;
	
	file = fopen("studentGrades.txt", "r");
	fscanf(file, "%d", &count);
	
	for (i=0; i<count; i++) {
		fscanf(file, "%d", &grade);
		sum += grade;
	}
	
	fclose(file);
	printf("%.2lf\n", sum/count);
}
*/

//Activity: find the end of the file

/*
#include <stdio.h>

int main(void) {
	
	FILE *file;
	double input_avr, num_avr;
	int count = 1;
	int  high = 1;
	
	file = fopen("gradeComparison.txt", "r");
	fscanf(file, "%lf", &input_avr);
	
	while (fscanf(file, "%lf", &num_avr) != EOF) {
		count++;
		if (num_avr > input_avr) {
			high = 0;
			printf("No %d\n", count);
			break;
		}
	}
	
	fclose(file);
	
	if (high)
		printf("Yes\n");
	return 0;
}
3
*/

///Activity: write numbers to a file

/*

#include <stdio.h>

int main(void) {
	
	FILE *file;
	int input_num, last_num;
	char filename[] = "myGrades.txt";
	
	scanf("%d", &input_num);
	
	file = fopen(filename, "r");
	
	while (fscanf(file, "%d", &last_num) != EOF) 
		printf("%d ", last_num);

	
	if (last_num != input_num)	{
	    
		fclose(file);
		file = fopen(filename, "a");
		fprintf(file, "%d", input_num);
		fclose(file);
		
		printf("%d", input_num);
	}
	
	printf("\n");
	
	return 0;
}

*/