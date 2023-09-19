#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int printp(char c);
int printc(char c);
void prints(char *s);
int _printf(const char *format, ...);
int numc(int n);
int _strlen(char *str);

#endif
