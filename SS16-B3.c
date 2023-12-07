#include <stdio.h>

int main() {
    FILE *pointerFile;
    char *text[100]; 
    pointerFile = fopen("C:\\Users\\Admin\\Desktop\\BT01.txt", "rb");
    if (pointerFile == NULL) {
        printf("Khong mo duoc file\n");
        return 1;
    }
    int numStrings = fread(text, sizeof(char*), 100, pointerFile);  
    for (int i = 0; i < numStrings; i++) {  
        printf("%s\n", text[i]);
    }
    fclose(pointerFile); 
    return 0;
}
