#include <stdio.h>

int main()
{
int y;
int x;
x = 0;
y = 0;
while(x<100)
{
    x=x+2;
    y=x+y;
    printf("%d\n", x);
}
printf("%d\n", y);
}