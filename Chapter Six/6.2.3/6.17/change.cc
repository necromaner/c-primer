#include "Chapter6.h"

void change(string &word){
    for(auto &c:word){
        c=tolower(word);
    }
}