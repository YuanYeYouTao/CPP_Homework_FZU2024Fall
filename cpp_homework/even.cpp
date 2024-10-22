#include<stdio.h>
void even(char s[], char t[]);
int main()
{
    char s[81] , t[41];
    gets(s);
    even(s,t);
    puts(t);
    return 0;
}
void even(char s[],char t[])
{
    int i = 0 ,j = 0;
    for(i = 0 ; i < 81 ; i++ )
    {
        if( i%2 == 0 && s[i]%2 == 0 )
        {
            t[j] = s[i];
            j++;
        }
    }
}