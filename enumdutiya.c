#include <stdio.h>

// Define an enum for days of the week
enum Day {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main() {
    // Declare a variable of enum type
    enum Day today;
    int choice;
    
    // Ask user to input a day
    printf("Enter a day number (0-6):\n");
    printf("0=Sunday, 1=Monday, 2=Tuesday, 3=Wednesday, 4=Thursday, 5=Friday, 6=Saturday\n");
    scanf("%d", &choice);
    
    // Assign the enum value based on user input
    today = (enum Day) choice;
    
    printf("\nYou selected day number: %d\n", today);
    
    // Use enum in a switch statement
    switch(today) {
        case SUNDAY:
            printf("It's Sunday - Weekend!\n");
            break;
        case MONDAY:
            printf("It's Monday - Start of work week\n");
            break;
        case WEDNESDAY:
            printf("It's Wednesday - Midweek\n");
            break;
        case FRIDAY:
            printf("It's Friday - Almost weekend!\n");
            break;
        case SATURDAY:
            printf("It's Saturday - Weekend!\n");
            break;
        default:
            printf("It's another weekday\n");
    }
    
    return 0;
}
