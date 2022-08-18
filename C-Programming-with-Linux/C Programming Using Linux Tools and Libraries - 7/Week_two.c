//Activity : Linking
/*
program.c:(.text+0x0): multiple definition of `main'
./myNewProgram
Average 10-day temp: 53.30
gcc -std=c11 -Wall -fmax-errors=10 -Wextra weatherstats.o myNewProgram.o -o program
*/


//Activity: Super Image Project


/*
gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c image.c  -o image.o
gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c superimage.c  -o superimage.o
gcc -std=c11 -Wall -fmax-errors=10 -Wextra  image.o superimage.o -o superimage
*/

//Activity: Makefile practice

/*
make: `program' is up to date.
rm -f weatherstats.o program.o program
-sh: ./program: not found
3
*/