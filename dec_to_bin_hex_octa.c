#include <stdio.h>

void binary(int c) {
    int n[50];
    int i = 0;
    while (c> 0) {
        n[i] = c % 2;
        c = c / 2;
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", n[j]);
    }
    printf("\n");
}
void octal(int c) {
    int n[50];
    int i = 0;

    while (c> 0) {
        n[i] = c % 8;
        c = c / 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i-1 ; j >=0; j--) {
        printf("%d", n[j]);
    }
    printf("\n");
}
void hexadecimal(int c) {
    int n[50];
    int i = 0;
    while (c> 0) {
        n[i] = c % 16;
        c = c / 16;
        i++;
    }
    printf("Hexadecimal equivalent: ");
    for (int j = i-1 ; j >= 0; j--) {
        if(n[j]==10){
            printf("A");
        }
        else if(n[j]==11){
            printf("B");
        }
         else if(n[j]==12){
            printf("C");
        }
         else if(n[j]==13){
            printf("D");
        }
         else if(n[j]==14){
            printf("E");
        }
      #include <stdio.h>

void binary(int c) {
    int n[50];
    int i = 0;
    while (c> 0) {
        n[i] = c % 2;
        c = c / 2;
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", n[j]);
    }
    printf("\n");
}
void octal(int c) {
    int n[50];
    int i = 0;

    while (c> 0) {
        n[i] = c % 8;
        c = c / 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i-1 ; j >=0; j--) {
        printf("%d", n[j]);
    }
    printf("\n");
}
void hexadecimal(int c) {
    int n[50];
    int i = 0;
    while (c> 0) {
        n[i] = c % 16;
        c = c / 16;
        i++;
    }
    printf("Hexadecimal equivalent: ");
    for (int j = i-1 ; j >= 0; j--) {
        if(n[j]==10){
            printf("A");
        }
        else if(n[j]==11){
            printf("B");
        }
         else if(n[j]==12){
            printf("C");
        }
         else if(n[j]==13){
            printf("D");
        }
         else if(n[j]==14){
            printf("E");
        }
         else if(n[j]==15){
            printf("F");
        }
        else if (n[j]<10){
        printf("%d", n[j]);            
        }
    }
    printf("\n");
}

int main() {
    int c;
    scanf("%d", &c);
if(c<1){
    printf("Error: Value should be greater than 0");
}
else{
    binary(c);
    octal(c);
    hexadecimal(c);
}
    return 0;
}   else if(n[j]==15){
            printf("F");
        }
        else if (n[j]<10){
        printf("%d", n[j]);            
        }
    }
    printf("\n");
}

int main() {
    int c;
    scanf("%d", &c);
if(c<1){
    printf("Error: Value should be greater than 0");
}
else{
    binary(c);
    octal(c);
    hexadecimal(c);
}
    return 0;
}
