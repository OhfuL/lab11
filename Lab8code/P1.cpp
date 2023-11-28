//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"

using namespace std;

int main(){
    Library library;
    
    //ask for commands and execute
    string command;
    // look for commands a, r, p, q
    // dont print anything if added or removed successfully
    // say "Cannot add the book." or "Cannot remove the book." if unsuccessful
    // say "Exiting." if command is q
    while(cin >> command){
        if(command == "a"){
            string bookName;
            cin >> bookName;
            if(!library.addBook(bookName)){
                cout << "Cannot add the book." << endl;
            }
        }
        else if(command == "r"){
            string bookName;
            cin >> bookName;
            if(!library.removeBook(bookName)){
                cout << "Cannot remove the book." << endl;
            }
        }
        else if(command == "p"){
            library.print();
        }
        else if(command == "q"){
            cout << "Exiting." << endl;
            break;
        }
    }
}
