to check whether the alphabet is vowel or consonant



  #include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
        ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
        printf("%c is a Vowel\n", ch);
    } else {
        printf("%c is a Consonant\n", ch);
    }

    return 0;
}
