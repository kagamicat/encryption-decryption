#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Decryption using Caesar cipher (finding the key)
 int main() {
 char message[1000];
 int key = 0;
 int ch;
 
 cout << "Enter a message" << endl;
 cin.getline(message, 1000);
     
 size_t len = strlen(message);
     
 while(key<26) {
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
 
     cout << key << " " << message << endl;
     key++;
 }
 cout << message << endl;
 
 return 0;
 }
 