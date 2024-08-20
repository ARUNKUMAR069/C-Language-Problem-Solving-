
// Q1. Write a program to calculate the area and perimeter of a rectangle using length and width input by the user.

#include <stdio.h>
int main()
{
    float length;
    float width;
    printf("Enter the Length of Rectangle=");
    scanf("%f", &length);
    printf("Enter the Width of Rectangle=");
    scanf("%f", &width);
    float area = length * width;
    printf("Area of Rectangle = %f", area);
    float perimeter = 2 * (length + width);
    printf("\n Perimeter of Rectangle = %f", perimeter);
    return 0;
}
// Q2.Create a program that converts temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
   float Temp_Celsius;
   printf("Enter the Temperature in Celsius =");
   scanf("%f", &Temp_Celsius);
   float Temp_Fahrenheit = (Temp_Celsius * 9/5) + 32;
   printf("Temperature in Fahrenheit = %f", Temp_Fahrenheit);
   
    return 0;
}
