#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int units;
    char status[40];

    printf("=============================================\n");
    printf("   STUDENT REGISTRATION STATUS CHECKER\n");
    printf("=============================================\n");

    printf("\nEnter student name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; /* strip trailing newline */

    printf("Enter number of registered units: ");
    scanf("%d", &units);

    if (units > 7) {
        strcpy(status, "Overload - Approval Required");
    } else {
        strcpy(status, "Registration Accepted");
    }

    printf("\n=============================================\n");
    printf("           REGISTRATION SUMMARY\n");
    printf("=============================================\n");
    printf("  Student Name : %s\n", name);
    printf("  Units        : %d\n", units);
    printf("  Status       : %s\n", status);
    printf("=============================================\n");
   

    return 0;
}
