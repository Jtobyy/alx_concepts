#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

int main(void)
{
size_t n;
char *l;
n = 10;
l = malloc(sizeof(*l) * 20);
n = getline(&l, &n, stdin);
fwrite(l, sizeof(*l), n, stdout);
free(l);
return (0);
}
