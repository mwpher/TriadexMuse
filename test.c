/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  0.1
 *        Created:  06/15/17 16:36:49
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

int main(int argc, const char *argv[]) {
    char c1 = getChar();
    printf("Test! %c", c1);
    return EXIT_SUCCESS;
}
