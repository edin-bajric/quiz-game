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
    int prog_score = 0;
    char prog_ans;

    printf("Programming Quiz\n");
    printf("Choose your answer by typing the appropriate letter\n");

    //1.
    printf("\n1. How to display output in Java?\n");
    printf("a) print()\n");
    printf("b) System.out.println()\n");
    printf("c) printf()\n");
    printf("d) cout>>\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'b'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: b) System.out.println()\n", prog_ans);
    }

    //2.
    printf("\n2. Which programming language is the predecessor of C?\n");
    printf("a) C++\n");
    printf("b) B++\n");
    printf("c) B\n");
    printf("d) Mini C\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'c'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: c) B\n", prog_ans);
    }

    //3.
    printf("\n3. Which of the following is not a programming language?\n");
    printf("a) TypeScript\n");
    printf("b) Python\n");
    printf("c) Anaconda\n");
    printf("d) Java\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'c'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: c) Anaconda\n", prog_ans);
    }

    //4.
    printf("\n4. What word is missing from the SQL line below?\n");
    printf("SELECT *\n______ CUSTOMER\n");
    printf("a) FROM\n");
    printf("b) SELECT\n");
    printf("c) WHERE\n");
    printf("d) ORDER BY\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'a'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: a) FROM\n", prog_ans);
    }

    //5.
    printf("\n5. Python is a ______ programming language.\n");
    printf("a) low-level\n");
    printf("b) mid-level\n");
    printf("c) high-level\n");
    printf("d) none of the above\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'c'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: c) high-level\n", prog_ans);
    }

    //6.
    printf("\n6. Which command will stop an infinite loop?\n");
    printf("a) Alt + C\n");
    printf("b) Shift + C\n");
    printf("c) Esc\n");
    printf("d) Ctrl + C\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'd'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: d) Ctrl + C\n", prog_ans);
    }

    //7.
    printf("\n7. Which of the following is the correct way of making a string in Java?\n");
    printf("a) String \"Text\";\n");
    printf("b) String text = 'text';\n");
    printf("c) String text = \"text\";\n");
    printf("d) String text = \"text\";\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'd'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: d) String text = \"text\";\n", prog_ans);
    }

    //8.
    printf("\n8. Which of the following is a valid define statement?\n");
    printf("a) #define MAX=200\n");
    printf("b) #define MAX 200\n");
    printf("c) # define MAX 200\n");
    printf("d) #define MAX 200;\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'b'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: b) #define MAX 200\n", prog_ans);
    }

    //9.
    printf("\n9. How many keywords are recognized by standard ANSI C?\n");
    printf("a) 30\n");
    printf("b) 24\n");
    printf("c) 32\n");
    printf("d) 36\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'c'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: c) 32\n", prog_ans);
    }

    //10.
    printf("\n10. What is the process of finding and fixing errors within a program called?\n");
    printf("a) Debugging\n");
    printf("b) Compiling\n");
    printf("c) Executing\n");
    printf("d) Scanning\n");
    printf("Your answer: \n");
    scanf("%s", &prog_ans);

    if(prog_ans == 'a'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Your answer: %c\nCorrect answer: a) Debugging\n", prog_ans);
    }

    //score
    int prog_correct = prog_score / 10;
    printf("\nYour score: %d / 100\n", prog_score);
    printf("%d / 10 correct\n", prog_correct);
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
                printf("Programming Quiz selected\n");
                while (1){
                    char option;
                    printf("\nPress 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        programming_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("\nProgramming Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 2:
                printf("Computer Science Quiz selected\n");
                while(1){
                    char option;
                    printf("\nPress 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        computer_science_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("\nComputer Science Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 3:
                printf("Mathematics Quiz selected\n");
                while(1){
                    char option;
                    printf("\nPress 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        mathematics_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("\nMathematics Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 4:
                printf("Physics Quiz selected\n");
                while(1){
                    char option;
                    printf("\nPress 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        physics_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("\nPhysics Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
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
                printf("Error: Select a valid option [1-8]");
                break;
        }

    }

    return 0;
}