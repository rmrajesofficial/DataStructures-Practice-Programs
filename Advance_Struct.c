#include <stdio.h>
struct test
{
    int i;
    char *c;
};
struct test st[] = {
    5, "become",
    4, "better",
    6, "jungle",
    7, "ancestor",
    8, "brother"};
int main()
{
    struct test *p = st;
    p += 1;
    printf("%s\n", ++(p++->c));
    printf("%c\n", *++p->c);
    printf("%d\n", p[0].i);
    printf("%s\n", p->c);
    return 0;
}