#include <stdio.h>
#include <string.h>

// Define a simple structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student s1;
    
    // Declare a pointer to structure
    struct Student *ptr;
    
    // Point the pointer to the structure variable
    ptr = &s1;
    
    // Method 1: Accessing using dot operator (.)
    printf("Enter student details:\n");
    printf("ID: ");
    scanf("%d", &s1.id);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Marks: ");
    scanf("%f", &s1.marks);
    
    // Method 2: Accessing using pointer with arrow operator (->)
    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    
    // Method 3: Accessing using pointer with (*ptr).member
    printf("\nUsing (*ptr) notation:\n");
    printf("ID: %d\n", (*ptr).id);
    printf("Name: %s\n", (*ptr).name);
    printf("Marks: %.2f\n", (*ptr).marks);
    
    return 0;
}
