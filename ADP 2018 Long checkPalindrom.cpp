#include <iostream>
#include <cstring>
using namespace std;


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


int main()
{
    string word = "abba";
    checkPalidrom(word) ? cout<<"Palindrom" : cout<<"Not Palindrom";

    return 0;
}
