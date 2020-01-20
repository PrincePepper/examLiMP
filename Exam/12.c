#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d/%d\n", a, b);
    printf("%d/%d", a/gcd(a, b), b/gcd(a, b));
} 