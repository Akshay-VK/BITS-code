/**
 * Student Name: Akshay Vijaykumar Karuvathil
 * BITS_ID: 2025ACPS0817G
 * Date: 21-08-2025
 */

#include <stdio.h>

/**
 * Returns the day of the year for 2025.
 *
 * Requires: the input is a valid date
 *
 * Examples:
 *    day_of_the_year(1, 1) -> 1
 *    day_of_the_year(31, 12) -> 365
 */
int day_of_the_year(int day, int month)
{
  // TODO: Implement this function to match its specifications
  //DAYS = 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
  int days = 0;
  if (month > 1){
    days += 31;
  }
  if (month > 2){
    days += 28;
  }
  if (month > 3){
    days += 31;
  }
  if (month > 4){
    days += 30;
  }
  if (month > 5){
    days += 31;
  }
  if (month > 6){
    days += 30;
  }
  if (month > 7){
    days += 31;
  }
  if (month > 8){
    days += 31;
  }
  if (month > 9){
    days += 30;
  }
  if (month > 10){
    days += 31;
  }
  if (month > 11){
    days += 30;
  }
  days += day;
  
  return days;
}

/**
 * Prints the day of the week for the given date.
 *
 * Requires: the input is a valid date
 *
 * Examples:
 *    print_day_of_week(1, 1) -> prints "Wednesday"
 *    print_day_of_week(15, 8) -> prints "Friday"
 */
void print_day_of_week(int dd, int mm)
{
  // TODO: Implement this function to match its specifications
  int days = day_of_the_year(dd, mm);
  // 1=1,2=2,3=3,4=4,5=5,6=6,7=0,8=1
  int day = (days) % 7;
  if (day == 0){
    printf("Tuesday");
  }
  if (day == 1){
    printf("Wednesday");
  }
  if (day == 2){
    printf("Thursday");
  }
  if (day == 3){
    printf("Friday");
  }
  if (day == 4){
    printf("Saturday");
  }
  if (day == 5){
    printf("Sunday");
  }
  if (day == 6){
    printf("Monday");
  }
}

int main()
{
  printf("This program takes a date in the year 2025 and can perform two operations.\n");

  int day, month;
  printf("Enter day (1-31): ");
  scanf("%d", &day);

  printf("Enter month (1-12): ");
  scanf("%d", &month);

  printf("\n\nThe operations are:\n");
  printf("\t1. Find what day of the year it is (e.g., Jan 1 is day 1, Dec 31 is day 365)\n");
  printf("\t2. Find what day of the week it is (Monday, Tuesday, etc.)\n");
  printf("Choose an option (1-2): ");

  int op = 0;
  scanf("%d", &op);

  if (op == 1)
  {
    printf("\n ~~~ The day of the year is: %d", day_of_the_year(day, month));
  }
  else if (op == 2)
  {
    printf("\n ~~~ The day of the week is: ");
    print_day_of_week(day, month);
  }
  printf(" ~~~\n\n");

  return 0;
}
