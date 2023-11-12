#include <stdio.h>

int main() {
    int seats[10] = {0};
    int choice, seat, section;

    do {
        printf("Please type 1 for \"first class\"\n");
        printf("Please type 2 for \"economy\"\n");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2) {
            if (choice == 1) {
                for (seat = 0; seat < 5; seat++) {
                    if (seats[seat] == 0) {
                        seats[seat] = 1;
                        section = 1;
                        break;
                    }
                }
            } else {
                for (seat = 5; seat < 10; seat++) {
                    if (seats[seat] == 0) {
                        seats[seat] = 1;
                        section = 2;
                        break;
                    }
                }
            }

            if (seat < 10) {
                printf("Boarding Pass\n");
                printf("Seat Number: %d\n", seat + 1);
                printf("Section: %s class\n", (section == 1) ? "First" : "Economy");
            } else {
                printf("The section is full. Would you like to be placed in the other section? (1 for yes, 0 for no): ");
                int switchSection;
                scanf("%d", &switchSection);

                if (switchSection == 1) {
                    choice = (choice == 1) ? 2 : 1;
                } else {
                    printf("Next flight leaves in 3 hours.\n");
                    break;
                }
            }
        } else {
            printf("Invalid choice. Please type 1 for \"first class\" or 2 for \"economy\".\n");
        }

    } while (1);

    return 0;
}