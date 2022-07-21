/*	Given a pointer to a NULL-terminated list of pointers, search
	the strings in the list for a particular character: This 
	version destroys the pointers so it can only be used when
	the collection will be examined only once.
*/
#include <stdio.h>
#include <assert.h>
#define TRUE	1
#define FALSE	0

int find_char_v2(char** strings, int value) {
	assert(strings != NULL);

	while (*strings != NULL) {
		while (**strings != '\0') {	// This destroys the pointer
			if (*(*strings)++ == value)
				return TRUE;
		}
		strings++;
	}
	return FALSE;
}