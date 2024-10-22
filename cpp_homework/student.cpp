#include <stdio.h>
int main()
{ 
    char s[81], i;
    char *max, *p, t; /* 用指针p访问数组s */
    gets(s);
    
    max = s;           
    p = s;             
    while (*p) {       
        if (*p > *max) 
            max = p;  
        p++;          
    }
    
    t = *s;            
    *s = *max;         
    *max = t;          
    
    puts(s);
    return 0;
}