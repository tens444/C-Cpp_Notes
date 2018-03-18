#include <stdio.h>

void move(char x, char y)
{
    printf("%c -> %c", x, y);
}

void hanoi(int n,char a,char b,char c)    //move n plates from a to c by b.
{
    if(n == 1)
        move(a, c);
    else
    {
        hanoi(n - 1, a, c, b);
        move(a, c);
        hanoi(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    printf("How many levels?\n");
    scanf("%d",&n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}