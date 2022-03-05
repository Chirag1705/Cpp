#include<iostream>
using namespace std;

int main(){
    
    // string chiru;
    // cin >> chiru;

    // cout << "The string i entered is: "<< chiru << endl;
    // So it will print only first whitespace character, and not the whole line.

   
    // To print the whole line: This is the way u can print a whole lot of paragraphs, getline is the function. 
    // string chiru;
    // getline(cin, chiru);
    // cout << chiru << endl;;

    // // Another way to create string.

    // string s1("chilu ");
    // string s2;
    // string s3;
  
//   Ways to copy string

    // s2 = s1;
    // s3.assign(s1);

    // cout << s1 << s2 << s3 << endl;

    // String is like array of characters

//    string a1 = "omgmybad";
//    cout << a1.at(5) << endl;

//    for(int x = 0; x < a1.size(); x++){
//        cout << a1.at(x);
//    }

//    String Functions
//    Substrings function is to create a smaller string from bigger string.

      string s1("I think you are preggy!!");
      cout << s1.substr(14, 10) << endl;
    //   In bracket (from where to start making substring, substr of how many characters)

    // Swap function

    string a1("banana");
    string a2("mango");
    cout << a1 << " " << a2 << endl;
    a1.swap(a2);
    cout << a1 << " " << a2 << endl;

    // Find function
    string a3("Chandan Ne Chandani ko Chandi ke Chammach Se Chatani Chatayi");
    cout << a3.find("Cha") << endl;  // Starts finding from left to right
    cout << a3.rfind("Cha") << endl; //---> This func is reverse find, that is from right to left

    // Erase Function

    string a4("Bacon i love u and ham i don't"); 
    cout << a4.erase(20) << endl; //----> (Character from where to start erasing)

    // Replace Function

    cout << a4.replace(14, 5, "hatim"); // ---> (Character from where to start replacing, till where, what to replace with)

    // Similarly we can use insert function ---> (Character from where to start inserting, what to insert)
    return 0;
}