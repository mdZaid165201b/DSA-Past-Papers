
#include <iostream>
#include <cstring>
using namespace std;


bool checkPalidrom(string word){
    char chArr[word.length()];
    char chArr2[word.length()];
    for(int i = 0;i < word.length(); i++){
        chArr[i] = word[i];
    }
    for(int i = word.length(); i >= 0; i--){
        chArr2[i] = word[i];
    }
    for(int i = 0; i < word.length(); i++){
        if(chArr[i] != chArr2[word.length() - i]){
            return false;
        }
    }
    
    return true;
}


int main()
{
    string word = "zaid";
    checkPalidrom(word) ? cout<<"Palindrom" : cout<<"Not Palindrom";

    return 0;
}
