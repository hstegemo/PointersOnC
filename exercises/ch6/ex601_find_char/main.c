/*
 * find_char.c
 *
 *  Created on: Jul 21, 2022
 *      Author: helge
 */
#include <stdio.h>
#include <string.h>

char *find_char( char const *source, char const *chars);
char *find_char2( char const *source, char const *chars);

int main(){
    const char *source = "ABCDEFG";
    const char *chars = "XRCQEF";
    char *mysearch = find_char(source, chars);
    printf("Search found at %p: %s\n", mysearch, mysearch);

    char *mysearch2 = find_char(source, "OLLTTT");
    printf("Search found at %p: %s\n", mysearch2, mysearch2);

    const char *chars2 = "XRQEF";
    const char *chars3 = "OLLTRY";
    char *mysearch3 = find_char2(source, chars2);
    printf("Search found at %p: %s\n", mysearch3, mysearch3);

    char *mysearch4 = find_char2(source, chars3);
    printf("Search found at %p: %s\n", mysearch4, mysearch4);

    return 0;
}

char *find_char(char const *source, char const *chars){
    for(int i=0; *(chars+i)!= '\0';i++){
        for(int j=0; *(source+j) != '\0';j++){
            if(*(chars+i)==*(source + j)){
                return (unsigned char*) source + j; // Cast to avoid "warning: return discards ‘const’ qualifier from pointer target type"
            }
        }
    }
    return NULL;
}

char *find_char2(char const *source, char const *chars){
    char *c = (unsigned char*)chars;
    char *s = (unsigned char*)source;
    for(; *c!= '\0';c++){
        for(; *s++ != '\0';s++){
            if(*c==*s){
                return (char*) s; // Cast to avoid "warning: return discards ‘const’ qualifier from pointer target type"
            }
        }
    }
    return NULL;
}