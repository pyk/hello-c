/* Exercise 3-3
 * Write a function expand(s1, s2) that expand shorthand notation like a-z in
 * the string s1 into equivalent complete list abc...xyz in s2. Allow for 
 * letters of either case and digits and be prepared to handle cases like
 * a-b-c and a-z and -a-z. Arrange that leading or trailing - is taken
 * literally. */
#include <stdio.h>
#include <assert.h>
#include <string.h>

#define MAXWRITE 50

int expand(char res[], int n, char src[]);

int main()
{
    /* invalid pattern */
    char case1[] = " ";
    char res1[MAXWRITE];
    int errexp1 = expand(res1, MAXWRITE, case1);
    assert(errexp1 == -1);

    char case6[] = "--------b--c-------------";
    char res6[MAXWRITE];
    int errexp6 = expand(res6, MAXWRITE, case6);
    assert(errexp6 == -1);

    /* valid pattern */
    char case2[] = "a-z";
    char expe2[] = "abcdefghijklmnopqrstuvwxyz";
    char res2[MAXWRITE];
    int errexp2 = expand(res2, MAXWRITE, case2);
    assert(errexp2 != -1);
    assert(strcmp(expe2, res2) == 0);

    char case3[] = "a-b-c";
    char expe3[] = "abc";
    char res3[MAXWRITE];
    int errexp3 = expand(res3, MAXWRITE, case3);
    assert(errexp3 != -1);
    assert(strcmp(expe3, res3) == 0);

    char case4[] = "-b-c";
    char expe4[] = "bc";
    char res4[MAXWRITE];
    int errexp4 = expand(res4, MAXWRITE, case4);
    assert(errexp4 != -1);
    assert(strcmp(expe4, res4) == 0);

    char case5[] = "b-c-";
    char expe5[] = "bc";
    char res5[MAXWRITE];
    int errexp5 = expand(res5, MAXWRITE, case5);
    assert(errexp5 != -1);
    assert(strcmp(expe5, res5) == 0);

    return 0;
}

/* expand expands pattern of ASCII character into complete list.
 * Complete list is 'abcdefghijklmnopqrstuvwxyz'. It accepts pattern 
 * 'c1-c2' which mean show all char from c1 until c2. Leading and trailing 
 * '-' is ignored.
 *
 * For example pattern 'a-d' will expanded into 'abcd'. 
 *
 * The first parameter is where to write complete list into. The second 
 * parameter is the maximum number of bytes allowed to write. And the last one
 * is a source of the pattern to expand. 
 *
 * It returns the number of bytes written into res. And -1 is returned if source
 * pattern is invalid.
 */
int expand(char res[], int n, char src[])
{
    int shorthand = 0;
    int resi = 0;
    int start, finish;

    /* start reading src, stop if null char found */
    for(int i = 0; src[i] != '\0'; i++) {
        /* save a current char */
        char c = src[i];

        /* Validation:
         * - array bound-check; make sure we don't overflow res
         * - make sure the pattern is valid */
        if(resi >= (n-1)) break;
        if(!((c >= 'a' && c <= 'z') || c == '-')) goto invalid;

        /* expand the pattern */
        if(shorthand == 1) {
            if(c == '-') goto invalid;
            finish = c;
            for(int j = start+1; j < finish; j++) {
                res[resi] = j;
                resi++;
            }
            shorthand = 0;
        }

        /* capture valid pattern */
        if(c == '-' && i != 0) {
            shorthand = 1;
            start = src[i-1];
        } else if(c != '-') {
            res[resi] = c;
            resi++;
        }
    }

    res[resi] = '\0';
    return resi;

invalid:
    res[0] = '\0';
    return -1;
}
