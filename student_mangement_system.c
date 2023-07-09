#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 3

enum grade {
    A, B, C, D, F
};

struct student {
    char name[30];
    int age;
    enum grade score;
};

void addstudent(struct student s[], int i) {
    char tempgrade;

    
    scanf("%s", s[i].name);

    
    scanf("%d", &s[i].age);

   
    scanf(" %c", &tempgrade);

    if (tempgrade == 'A') {
        s[i].score = A;
    } else if (tempgrade == 'B') {
        s[i].score = B;
    } else if (tempgrade == 'C') {
        s[i].score = C;
    } else if (tempgrade == 'D') {
        s[i].score = D;
    } else if (tempgrade == 'F') {
        s[i].score = F;
    } else {
        printf("Invalid grade!\n");
        return;
    }

    
    printf("Student added successfully.\n");
}

void displaystudentdetails(struct student s[],int i){
     if (strlen(s[i].name) > 0) {
                        printf("Student %d\n",(i+1));
                        printf("Name: %s\n", s[i].name);
                        printf("Age: %d\n", s[i].age);
                        printf("Grade: ");
                        switch (s[i].score) {
                            case A:
                                printf("A\n");
                                break;

                            case B:
                                printf("B\n");
                                break;

                            case C:
                                printf("C\n");
                                break;

                            case D:
                                printf("D\n");
                                break;

                            case F:
                                printf("F\n");
                                break;

                            default:
                                printf("Invalid grade");
                        }
                        printf("\n");
                    } else {
                        printf("Nothing to display.\n");
                    }
                }

void findhighestscoringstudent(struct student s[],int i){
    int highscore;
highscore = s[0].score;
                for(i=1;i<MAX_STUDENTS;i++){
                    if(s[i].score<highscore){
                        highscore = i;
                    }
                }
                printf("Highest-scoring student:\n");
                displaystudentdetails(s,highscore);
}
int main() {
    struct student s[MAX_STUDENTS];
    int i = 0;
    int choice;
    

    do {
       
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (i < MAX_STUDENTS) {
                    addstudent(s, i);
                    i++;
                } else {
                    printf("Student limit exceeded.\n");
                }
                break;

            case 2:
            if (i==0){
                printf("no students to display");
            }
            else{
                for (i = 0; i < MAX_STUDENTS; i++) {
                displaystudentdetails(s,i);
                }
                    
                }
                break;

            case 3:
            findhighestscoringstudent(s,i);
                
                
                break;

            case 4:
                printf("Exiting the program\n");
                break;

            default:
                printf("Invalid choice! Choose again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
