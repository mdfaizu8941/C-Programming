 #include <stdio.h>
 #include<string.h>

void removeSpaces(char *str) {
    int i, j = 0;
    for (i = 0; str[i]!='\0'; i++) {
        if (str[i]!= ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);
    
    removeSpaces(str);
    
    printf("String after removing spaces: %s\n", str);
    
    return 0;
}