#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

#include "errors.h"
#include "Enigma.h"

using namespace std;

int main(int argc, char** argv){

  if(argc < 3 || argc == 4){
    cout << "usage: enigma plugboard-file reflector-file (<rotor-file>* rotor-positions)?" << endl;
    return INSUFFICIENT_NUMBER_OF_PARAMETERS;
  }

  Enigma enigma(argc, argv);
  // What is the maximum length of this?
  char message[200];
  char encrypted_message[200];

  cin >> message;
  for(int i = 0; message[i] != '\0'; i++){
    if(message[i] - 'A' < 0 || 25 < message[i] - 'A'){
      cout << message[i] << " is not a valid input character (input characters must be upper case letters A-Z)!";
      return INVALID_INPUT_CHARACTER;
    }
  }

  enigma.encryptMessage(message, encrypted_message);
  cout << encrypted_message;

  return NO_ERROR;
}
