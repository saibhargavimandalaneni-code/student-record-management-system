
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main(void) {
    struct Student students[100];
    int count = 0;
    int choice;
    int i;
    int search_id;
    int found;

    do {
        printf("\n=== Student Record Management System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            return 1;
        }

        if (choice == 1) {
            if (count >= 100) {
                printf("Student limit reached!\n");
                continue;
            }

            printf("Enter Student ID: ");
            scanf("%d", &students[count].id);

            printf("Enter Student Name: ");
            scanf(" %49[^\n]", students[count].name);

            printf("Enter Student Marks: ");
            scanf("%f", &students[count].marks);

            count++;
            printf("Student added successfully!\n");
        }
        else if (choice == 2) {
            if (count == 0) {
                printf("No student records available.\n");
            } else {
                printf("\n--- All Student Records ---\n");

                for (i = 0; i < count; i++) {
                    printf("\nStudent %d\n", i + 1);
                    printf("ID: %d\n", students[i].id);
                    printf("Name: %s\n", students[i].name);
                    printf("Marks: %.2f\n", students[i].marks);
                }
            }
        }
        else if (choice == 3) {
            printf("Enter Student ID to search: ");
            scanf("%d", &search_id);

            found = 0;

            for (i = 0; i < count; i++) {
                if (students[i].id == search_id) {
                    printf("\nStudent Found!\n");
                    printf("ID: %d\n", students[i].id);
                    printf("Name: %s\n", students[i].name);
                    printf("Marks: %.2f\n", students[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Student not found.\n");
            }
        }
        else if (choice == 4) {
            printf("Exiting program. Goodbye!\n");
        }
        else {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
