#include<bits/stdc++.h>
using namespace std;

void replacePi(char input[]) {
	if(input[0] == '\0' || input[1] == '\0') return;
    if(input[0] == 'p' && input[1] == 'i') {
        int size = strlen(input);
        while(size > 1) {
            input[size+2] = input[size];
            size--;
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input+4);
    }
    replacePi(input+1);
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}