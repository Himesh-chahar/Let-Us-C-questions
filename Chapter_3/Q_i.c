/* i) Given the length and breadth of a rectangle, 
write a program to find whether the area of the rectangle is greater than its perimeter. 
For example, the area of the rectangle with length = 5 and 
breadth = 4 is greater than its perimeter. */


#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter the length of the rectangle (in metres) : ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle (in metres) : ");
    scanf("%f", &breadth);

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        printf("The area of the rectangle is greater than its perimeter.");
    }
    else
    {
        printf("The area of the rectangle is not greater than its perimeter.");
    }
    
    return 0;
}