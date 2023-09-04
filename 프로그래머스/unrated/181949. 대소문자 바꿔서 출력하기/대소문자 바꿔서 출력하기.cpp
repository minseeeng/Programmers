#include <iostream>
#include <string>
#define LEN_INPUT 10
using namespace std;

int main(void) {
    string str;
    cin >> str;

for(int i=0; i<str.length(); i++) {
        if(str[i]>='A' && str[i]<='Z') {
            str[i] = tolower(str[i]);
        }
        else if(str[i]>='a' && str[i]<='z') {
            str[i] = toupper(str[i]);
        } 
    }
    
    cout << str << endl;
}