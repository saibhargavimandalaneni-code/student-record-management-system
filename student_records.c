
#include <stdio.h>

int main(void) {
    int choice;
    int id;
    char name[50];
    float marks;

    printf("\n=== Student Record Management System ===\n");
    printf("1. Add Student\n");
    printf("2. Display All Students\n");
    printf("3. Search Student by ID\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter Student ID: ");
        scanf("%d", &id);

        printf("Enter Student Name: ");
        scanf(" %49[^\n]", name);

        printf("Enter Student Marks: ");
        scanf("%f", &marks);

        printf("\n--- Student Details ---\n");
        printf("ID: %d\n", id);
        printf("Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
    }
    else if (choice == 2) {
        printf("Display feature is coming next!\n");
    }
    else if (choice == 3) {
        printf("Search feature is coming next!\n");
    }
    else if (choice == 4) {
        printf("Exiting program. Goodbye!\n");
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
