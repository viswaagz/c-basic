#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
// declare integer type variable  
int x, y, z;  
printf (" Enter the first number: ");  
scanf ("%d", &x);  
printf (" Enter the second number: ");  
scanf ("%d", &y);  
printf (" Enter the third number: ");  
scanf ("%d", &z);  
  
// use logical AND operator to validate the condition  
if ( x >= y && x >= z )  
{  
printf (" %d is the largest number of all. ", x);  
}  
else if ( y >= x && y >= z)  
{  
printf (" %d is the largest number of all. ", y);  
}  
else  
{  
    printf ( " %d is the largest number of all. ", z);  
}  
return 0;  
}  
/* Output

Enter the first number: 20
Enter the second number: 10
Enter the third number: 50
50 is the largest number of all
*/
