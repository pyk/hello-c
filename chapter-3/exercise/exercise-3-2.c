/* Exercise 3-2
 * Write a function `escape(s,t)` that converts character like newline
 * and tab into visible escape squences like \n and \t as it copies
 * the string to t to s. Use switch. Write a function for the other
 * direction as well, converting escape squence into real characters. */
#include <stdio.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main() 
{
    char s[20];
    char t[10] = {'t', 'h', '\t', '\n', '1', 'g', 'g', 'h', 'k', '\0'};
    printf("t = %s\n", t);
    
    escape(s, t);
    printf("s = %s\n", s);
    
    char x[20];
    unescape(x, s);
    printf("x = %s\n", x);
}

/* escape: converts '\t' and '\n' in string T to corresponding visible 
 * escape squences. It copy the escaped string to S. It's assume that
 * S is big enough */
void escape(char s[], char t[])
{
    /* PROBLEM: we need to replace '\n' with character "\" and "n" to make
     * visible to escaped squence. The problem is, with every escaped squence
     * we need one more space to the char array S. Let just assume
     * that S is big enough */
    int i = 0;
    int j = 0;
    while(t[i] != '\0') {
        switch(t[i]) {
        case '\n':
            s[j] = '\\';
            j++;
            s[j] = 'n';
            break;
        case '\t':
            s[j] = '\\';
            j++;
            s[j] = 't';
            break;
        default:
            s[j] = t[i];
            break;
        }
        i++;
        j++;
    }
    s[j] = '\0';
}

/* unescape: converts \t and \n in string T to corresponding escape squences. 
 * It copy the unescaped string to S and assume that S is smaler than T */
void unescape(char s[], char t[])
{
    int i = 0;
    int j = 0;
    while(t[i] != '\0') {
        switch(t[i]) {
        case '\\':
            if(t[i+1] == 'n')
                s[j] = '\n';
            if(t[i+1] == 't')
                s[j] = '\t';
            i++;
            break;
        default:
            s[j] = t[i];
            break;
        }
        i++;
        j++;
    }
    s[j] = '\0';
}