#include "main.h"

int _atoi(char *s) {
    int result = 0;
    bool isNegative = false;
    
    while (*s == ' ') {
        s++;
    }
    
    if (*s == '-' || *s == '+') {
        isNegative = (*s == '-');
        s++;
    }
    
    while (*s >= '0' && *s <= '9') {
    
        if (!isNegative && (result > (INT_MAX - (*s - '0')) / 10)) {
            return INT_MAX; 
        } else if (isNegative && (result < (INT_MIN + (*s - '0')) / 10)) {
            return INT_MIN; 
        }
        
        result = result * 10 + (*s - '0');
        s++;
    }
    
    if (isNegative) {
        result = -result;
    }
    
    return result;
}
