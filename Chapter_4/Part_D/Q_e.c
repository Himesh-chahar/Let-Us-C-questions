/* e) In digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow- Black (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:

White = Max(Red/255, Green/255, Blue/255) Cyan = Magenta = Yellow = White-Red/255 White White-Green/255 White White-Blue/255 White Black-1-White Note that if the RGB values are all 0, then the CMY values are all O and the K value is 1. */


#include <stdio.h>

int main()
{
    int R, G, B;
    float C, M, Y, K;
    float white;

    printf("Enter the values of R, G, B respectively : ");
    scanf("%d %d %d", &R, &G, &B);
    printf("The Value of (R, G, B) = (%d, %d, %d)\n", R, G, B);

    if (R >= G && R >= B)
    {
        white = R / 255.0;
    }
    else if (G > R && G >= B)
    {
        white = G / 255.0;
    }
    else
    {
        white = B / 255.0;
    }

    K = 1 - white;

    if (K < 1)
    {
        C = (1 - (R / 255.0) - K) / (1 - K) * 100;
        M = (1 - (G / 255.0) - K) / (1 - K) * 100;
        Y = (1 - (B / 255.0) - K) / (1 - K) * 100;
    }
    else
    {
        C = M = Y = 0;
    }

    K *= 100;

    printf("CMYK = (%.2f%%, %.2f%%, %.2f%%, %.2f%%)\n", C, M, Y, K);

    return 0;
}