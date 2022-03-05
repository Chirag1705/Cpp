// POINTERS AND STRING
#include<iostream>
using namespace std;

int main(){
    char name[] = "Chigs";
    char *ptr;
    ptr = name;

    while(*ptr != '\0'){
        cout<< *ptr;
        ptr++;
    }
    return 0;
}
/* In the above example, since ptr stores the address of name[0], therefore the value of *ptr equals the value of name[0] i.e., 'S'.
So in while loop, the first character gets printed and ptr++ increases the value of ptr by 1 so that now ptr+1 points to name[1].
This continues until the pointer reaches the end of the string i.e., before *ptr becomes equal to '\0' */