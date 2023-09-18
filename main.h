#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int printc(char c);
void prints(char *s);
int _printf(const char *format, ...);
int numc(int n);

#endif
