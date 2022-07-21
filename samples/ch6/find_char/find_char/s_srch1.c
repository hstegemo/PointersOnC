/* Given a pointer to a NULL-terminated list of pointers, search
   the strings in the list for a particular character. */
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int find_char(char** strings, char value)
{
	char* string;

	while ((string = *strings++) != NULL) {	// copies a pointer
		while (*string != '\0'){
		if (*string++ == value)
			return TRUE;
		}
	}
	return FALSE;
}