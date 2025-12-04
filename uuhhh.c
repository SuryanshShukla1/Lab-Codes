#include <stdio.h>
#include <string.h>

// Define structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    // Declare array of 5 Employee structures
    struct Employee emp[5];
    int i;
    
    printf("=== Enter Employee Information ===\n\n");
    
    // Input data for 5 employees
    for(i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i+1);
        
        printf("Employee ID: ");
        scanf("%d", &emp[i].id);
        
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);  // Read string with spaces
        
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        
        printf("\n");
    }
    
    // Display all employee information
    printf("\n=== Employee Information ===\n\n");
    printf("ID\tName\t\t\tSalary\n");
    printf("--\t----\t\t\t------\n");
    
    for(i = 0; i < 5; i++) {
        printf("%d\t%-20s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    
    return 0;
}
