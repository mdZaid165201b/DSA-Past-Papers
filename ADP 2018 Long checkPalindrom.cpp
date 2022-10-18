#include <iostream>
#include <cstring>
using namespace std;

// Method #1
bool checkPalidrom(string word){
    char chArr[word.length()];
    
    for(int i = 0;i < word.length(); i++){
        chArr[i] = word[i];
    }
    for(int i = 0; i < word.length(); i++){
        // cout<<"chArr :"<<chArr[i]<<" "<<"word :"<<word[word.length()-i];
        if(chArr[i] != word[word.length() - 1 - i]){ return false; }
    }
    return true;
}

// Method #2
bool checkPalindrom2(string word){
    for(int i = 0; i < word.length(); i++){
        if(word[i] != word[word.length() - 1 - i]){ return false; }
    }
    return true;
}


int main()
{
    string word = "abba";
    checkPalidrom(word) ? cout<<"Palindrom" : cout<<"Not Palindrom";

    return 0;
}
