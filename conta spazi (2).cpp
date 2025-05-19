#include<stddef.h>
size_t conta_spazzi(const char *s){
    size_t n_spazzi = 0;
    while(*s != '\0'){
        if (*s == ' ')
        n_spazi++;
        s++;
    }
    return n_spazi;
}