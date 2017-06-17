/*
 * =====================================================================================
 *
 *       Filename:  muse.c
 *
 *    Description:  Triadex Muse
 *
 *        Version:  0.1
 *        Created:  06/14/17 20:10:51
 *       Revision:  none
 *       Compiler:  Clang
 *
 *         Author:  Matthew Pherigo (mwp), hybrid120@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <errno.h>
#include <matt.h>
#include <string.h>
#include <limits.h>

#define FALSE 0
#define TRUE 1
#define CH 2
#define C1 3
#define C2 4
#define C4 5
#define C8 6
#define C3 7
#define C6 8
#define B1 9
#define B2 10
#define B3 11
#define B4 12
#define B5 13
#define B6 14
#define B7 15
#define B8 16
#define B9 17
#define B10 18
#define B11 19
#define B12 20
#define B13 21
#define B14 22
#define B15 23
#define B16 24
#define B17 25
#define B18 26
#define B19 27
#define B20 28
#define B21 29
#define B22 30
#define B23 31
#define B24 32
#define B25 33
#define B26 34
#define B27 35
#define B28 36
#define B29 37
#define B30 38
#define B31 39

extern short IntA, IntB, IntC, IntD, ThemeA, ThemeB, ThemeC, ThemeD;
extern unsigned long long clock;

bool GetBit (char slider);

int main (int argc, char *argv[]) {
    int i; unsigned long long clock;
    if (argc < 3) { quit("Needs a setting and a clock position!"); }
    char sliderval = stringtochar(argv[1]);
    i = stringtoint(argv[2]);
    printf("%d", i);
    clock = (unsigned long long)i;
    printf("your bit is %d", GetBit(sliderval));
}

bool GetBit(char slider) {
    switch (slider) {
        case 0:
            return 0;
        case 1:
            return 1;
        case CH:
            return clock & 1;
        case C1:
            return (clock & 2) >> 1;
        case C2:
            return (clock & 4) >> 2;
        case C4:
            return (clock & 8) >> 3;
        case C8:
            return (clock & 16) >> 4;
        case C3:
            return (int)(clock / 3) % 2;
        case C6:
            return (int)(clock >= 6);
        default:
            if ((slider >= 9) && (slider <= 39)) {
                printf("gonna do this later");
            }
            else {
                quit("Error in GetBit switch case!");
            }
    }
    quit("GetBit failed?");
    return EXIT_FAILURE;
}
