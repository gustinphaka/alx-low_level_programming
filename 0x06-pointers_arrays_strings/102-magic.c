#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[p] = 1024;
p = &n;

/**
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - You are not allowed to modify p
 * - only one statement
 * = You are not allowed to code anything else than this line of code
 */

*(p + 5) = 98;
 /** ...so that this print 98\n */
print("a[2] = %d\n", a[2]);
return (0);
}
