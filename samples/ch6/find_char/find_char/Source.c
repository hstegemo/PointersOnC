#include <stdio.h>
int find_char(char** string, char value);
int find_char_v2(char** string, int value);

int main() {
	char* words[] = { "AC Revelations", "The Room 2", "Raiden IV", "Raiden 3", "Tetris", NULL };
	if (find_char(words, '3')) printf("Contains '3'\n");
	else printf("No character '3' found\n");

	if (find_char(words, '4')) printf("Contains '4'\n");
	else printf("No character '4' found\n");

	// Checking find_char_v2 / destroys the array
	char* words2[] = {"The Room", "AC5 - Unity", "Monkey Island 3 - The Curse of Monkey Island", NULL};
	// First call removes {"The Room", "AC5"} from the array
	if (find_char_v2(words2, '5')) printf("Contains '5'\n");
	else printf("No character '5' found\n");

	if (find_char_v2(words2, '3')) printf("Contains '3'\n");
	else printf("No character '3' found\n");

	if (find_char_v2(words2, '3')) printf("Contains '3'\n");
	else printf("No character '3' found\n");

	return 0;
}