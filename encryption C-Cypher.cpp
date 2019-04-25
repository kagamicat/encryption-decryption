#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Encryption using Caesar cipher (shifting number by choosen key)
// we used an ASCII Table
 int main() {
 char message[1000];
 int key,ch;
 
 cout << "Enter a message" << endl;
 cin.getline(message, 1000);
 cout << "Enter a key" << endl;
 cin >> key;
 
 // Size of message
 size_t len = strlen(message);
 
 // read all elements in message and encrypt it
 for(int i = 0; i<len; ++i) {
 ch = message[i];
 
 if((ch>='a')&& (ch <='z')) {
     ch = ch + key;
 
     if(ch>'z') {
         ch = ch - 26;
     }
     
 message[i] = char(ch);
 
    }
 }
 
 cout << message << endl;
 
 return 0;
 }


 




