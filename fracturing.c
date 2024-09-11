#include <stdio.h>
#include <stdlib.h>

//Make Calcuulations go through
double calculateWidth();
double calculateHeight();
double calculateDistance();
double calculateArea();
double calculatePerimeter();
double askForUserInput();

int main(int argc, char **argv) 
{
    //Calling
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

//Asking input
double askForUserInput() 
{
    double value;
    printf("Enter value: ");
    scanf("%lf", &value);
    return value;
}

//Width function
double calculateWidth()
 {
    double x1, x2;

    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();

    double width = abs(x2 - x1);

    printf("Point #1 entered: x1 = %.2f; y1 = 0.00\n", x1);
    printf("Point #2 entered: x2 = %.2f; y2 = 0.00\n", x2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return width;
}

//Height function
double calculateHeight()
 {
    double y1, y2;

    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    double height = abs(y2 - y1); 

    //Print Height
    printf("Point #1 entered: x1 = 0.00; y1 = %.2f\n", y1);
    printf("Point #2 entered: x2 = 0.00; y2 = %.2f\n", y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return height;
}

//Calcute Distance
double calculateDistance() 
{
    double x1, y1, x2, y2;

    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    
    double distance = abs(x2 - x1) + abs(y2 - y1);


    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

//Area Function
double calculateArea()
 {
    double width = calculateWidth();
    double height = calculateHeight();

    double area = width * height;

    printf("Point #1 entered: x1 = 0.00; y1 = %.2f\n", height);
    printf("Point #2 entered: x2 = %.2f; y2 = 0.00\n", width);
    printf("The area of the city encompassed by your request is %.2f\n", area);

    return area;
}

//Perimeter
double calculatePerimeter()
 {
    double width = calculateWidth();
    double height = calculateHeight();

    double perimeter = 2 * (width + height);

    printf("Point #1 entered: x1 = 0.00; y1 = %.2f\n", height); 
    printf("Point #2 entered: x2 = %.2f; y2 = 0.00\n", width); 
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return perimeter;
}