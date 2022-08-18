//Activity: function declaration versus definition

/*
#include <stdio.h>

// insert prototype for function ftoc() here
double ctof(int x);
// insert prototype for function ctof() here
double ftoc(int x);

int main(void) {

    int usertemp;
    char unit;
    double convertedtemp;

    scanf("%d %c", &usertemp, &unit);
    if (unit=='C'){
        // insert function call here to convert usertemp 
        convertedtemp = ctof(usertemp);
           // from Celsius to Fahrenheit and store the result in convertedtemp 
        printf("%.1lf F", convertedtemp);
        // complete this line to print out the conversion result

    } else if (unit=='F'){

        // insert function call here to convert usertemp 
           // from Fahrenheit to Celsius and store the result in convertedtemp 
        convertedtemp = ftoc(usertemp);
        printf("%.1lf C", convertedtemp);
        // complete this line to print out the conversion result
        
    }

    return 0;

}

// Activity: use the math library

#include <stdio.h>
#include <math.h>

int main(void) {
	
	double num;
	scanf("%lf", &num);
	printf("%.8lf\n", sqrt(num));
	printf("%.10lf\n", exp(1));
	printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -lm program.c -o program\n");
	
	return 0;
}

//Activity: using the JPEG library


#include <stdio.h>

int main(void) {
	printf("gcc -std=c11 -Wall -Wextra vizplus.c -o vizplus -ljpeg\n");
}
*/