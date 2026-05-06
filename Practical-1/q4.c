#include <stdio.h>
#include <stdlib.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
    float fee;
};

int main() {
    int n, i, searchId, found = 0;

    printf("Enter number of patients: ");
    scanf("%d", &n);
    struct Patient *p = (struct Patient *)malloc(n * sizeof(struct Patient));
    for (i = 0; i < n; i++) {
        printf("\nEnter details of patient %d\n", i + 1);

        printf("Patient ID: ");
        scanf("%d", &p[i].id);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Age: ");
        scanf("%d", &p[i].age);

        printf("Disease: ");
        scanf("%s", p[i].disease);

        printf("Consultation Fee: ");
        scanf("%f", &p[i].fee);
    }
    printf("\n--- Patient Records ---\n");
    for (i = 0; i < n; i++) {
        printf("\nID: %d", p[i].id);
        printf("\nName: %s", p[i].name);
        printf("\nAge: %d", p[i].age);
        printf("\nDisease: %s", p[i].disease);
        printf("\nFee: %.2f\n", p[i].fee);
    }
    printf("\nEnter Patient ID to search: ");
    scanf("%d", &searchId);

    for (i = 0; i < n; i++) {
        if (p[i].id == searchId) {
            printf("\nPatient Found!");
            printf("\nName: %s", p[i].name);
            printf("\nAge: %d", p[i].age);
            printf("\nDisease: %s", p[i].disease);
            printf("\nFee: %.2f", p[i].fee);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nPatient not found.");
    }
    free(p);

    return 0;
}