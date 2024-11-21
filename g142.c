/*Kim, a proficient software developer, is working on a text manipulation task. Her objective is to replace all instances of the character 'a' with 'b' and 'A' with 'B' in a lengthy text document. 



Design a program to achieve this precise transformation, ensuring accuracy in both case sensitivity and character encoding.

Input format :
The input consists of a string, representing the text in the document.

Output format :
The output displays the string, representing the modified text.

*/

#include <stdio.h>

int main() {
    char text[100], new_text[100];
    scanf("%[^\n]s", text);

    int i;
    for (i = 0; text[i] != '\0'; ++i) {
        if (text[i] == 'a') {
            new_text[i] = 'b';
        } else if (text[i] == 'A') {
            new_text[i] = 'B';
        } else {
            new_text[i] = text[i];
        }
    }

    new_text[i] = '\0';

    printf("%s\n", new_text);

    return 0;
}
