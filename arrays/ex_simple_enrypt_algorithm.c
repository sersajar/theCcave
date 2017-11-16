#include <stdio.h>

int main(int argc, char *argv[])
{
    int mask = 163; /* Declare an int and assign it a value less than 256 */
    char c;  /* Declare a character (1 bit, maximum value 255) */
    FILE *inputfile = 0, *outputfile = 0;  /* declare two file pointers */

    if(argc!=3) {  /* Check the num of args */
        printf(" Usage: %s <input file> <output file>\n", argv[0]);
        return 1; /* report error*/
    }

    inputfile = fopen(argv[1], "r");  /* open the input file */
    if(!inputfile) return 2;  /* if file pointer is null return error */

    outputfile = fopen(argv[2], "w");  /* open the output file */
    if(!outputfile) return 3;  /* if file pointer is null return error */

    c = fgetc(inputfile);  /* get the first character */
    while(c != EOF) {  /* loop until end-of-file is reached */
        c ^= mask;  /* Exclusive-OR with the mask */
        fputc(c, outputfile);  /* write to the output file */
        c = fgetc(inputfile);  /* get another character */
    }

    fclose(inputfile);  /* close input file */
    fclose(outputfile); /* close output file */

    return 0;
}

