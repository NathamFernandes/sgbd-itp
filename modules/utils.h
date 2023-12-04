#include "enums.h"
#include <string.h>

void get_string(unsigned long max_size, char text[max_size], char* message);
void trim(unsigned long size, char text[size]);
void clear_terminal();
void pause_terminal();
bool include_char(char * text, char target);
int sum(int size, int vector[size]);