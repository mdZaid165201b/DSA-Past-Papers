#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char str[20];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'a';
    str[3] = 'b';
    str[4] = 'a';
    str[5] = 'b';
    int count = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] != '\0'){ count++; }
    }
    bool check1, check2 = false;
    for(int i = 0; i < count / 2 - 1; i++){
        if(str[i] == str[i + 1]){ check1 = true; }
        else{
            check1 = false;
            break;
        }
    }
    for(int i = (count / 2); i <count - 1; i++){
        if(str[i] == str[i + 1]){
            check2 = true;
        }
        else{
            check2 = false;
            break;
        }
    }
    
    if(check1 && check2){ cout<<"Yes it's in correct form"; }
    else{ cout<<"No it's not in correct form"; }
    
    return 0;
}
