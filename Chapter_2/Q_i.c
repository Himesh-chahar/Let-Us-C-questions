/* i) Consider a currency system in which there are notes of seven
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs.
N. */


#include <stdio.h>
#include <math.h>

int main()
{
    int sum_rupee;

    printf("Enter the sum of rupees : ");
    scanf("%d", &sum_rupee);

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    a = sum_rupee / 100;
    b = sum_rupee % 100;
    c = b / 50;
    d = b % 50;
    e = d / 10;
    f = d % 10;
    g = f / 5;
    h = f % 5;
    i = h / 2;
    j = h % 2;
    k = j / 1;
    l = j % 1;

    int count = a + c + e + g + i + k;

    printf("The total number of notes required for %d is %d", sum_rupee, count);

    return 0;
}