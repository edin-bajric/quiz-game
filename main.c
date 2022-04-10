#include <stdio.h>

void print_menu(){
    printf("+--------------Quiz Game--------------+");
    printf("\n| Options:                            |");
    printf("\n+-------------------------------------+");
    printf("\n| 1. Programming Quiz                 |");
    printf("\n| 2. Computer Science Quiz            |");
    printf("\n| 3. Mathematics Quiz                 |");
    printf("\n| 4. Physics Quiz                     |");
    printf("\n| 5. Show Last Score                  |");
    printf("\n| 6. Show Highest Score               |");
    printf("\n| 7. Show Options                     |");
    printf("\n| 8. Exit                             |");
    printf("\n+-------------------------------------+");
}
void programming_quiz(){
    printf("Programming Quiz\n");
}

void computer_science_quiz(){
    printf("Computer Science Quiz\n");
}

void mathematics_quiz(){
    printf("Mathematics Quiz\n");
}

void physics_quiz(){
    printf("Physics Quiz\n");
}

int main(void) {
    int choice, loop = 1;
    print_menu();

    while (loop) {
        printf("\nEnter your choice [1-8]: \n");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                programming_quiz();
                break;

            case 2:
                computer_science_quiz();
                break;

            case 3:
                mathematics_quiz();
                break;

            case 4:
                physics_quiz();
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                print_menu();
                break;

            case 8:
                loop = 0;
                break;

            default:
                printf("Error: Select a valid option");
                break;
        }

    }

    return 0;
}