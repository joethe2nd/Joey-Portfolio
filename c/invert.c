#include <stdio.h>

int main () {
	
	char str[20];
	printf("Type a word with uppercase and lowercase letters: ");
	scanf("%s", &str);  // "hello\0"
	
	for(int i = 0; str[i] != 0; i++) {
		if(str[i] <= 'z' && str[i] >= 'a') {
			str[i] = str[i] - 32;
		} 
	else if(str[i] <= 'Z' && str[i] >= 'A') {
			str[i] = str[i] + 32;
		}
	}

	printf("%s", str);
	return 0;
}
