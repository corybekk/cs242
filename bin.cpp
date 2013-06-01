//Author: Cory Bekker
//Title : Convert Bit string to Hex string and Vise versa
//Class: cs242

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void makeBitString(string hex);
void makeHexString(string bit);

int main(){

  int input = 0;
  string hex2bit;
  string bit2hex;
  string bitString;
 
  cout<<"Enter 1 for hex to bit, Enter 2 for bit to hex." <<endl;
  cin>>input;;
  
  if(input == 1){
    cout<<"please enter hex string "<<endl;
    cin>>hex2bit;
    cout<<"conversion into bit: ";
    makeBitString(hex2bit);
  }
  if(input == 2){
    cout<<"please enter bit string with spaces in between "<<endl;
    cout<<"example: 0001 0101"<<endl;   
    cin.ignore();
    getline(cin,bit2hex);
    cout<<endl;
    stringstream ss(bit2hex); 
    cout<<"hex conversion: ";
    while(ss>>bitString){
      makeHexString(bitString);
    }
  }
  cout<<endl;
  return 0;
}

void makeHexString(string bit){

  if(bit == "0000") cout<< '0';
  if(bit == "0001") cout<< '1';
  if(bit == "0010") cout<< '2';
  if(bit == "0011") cout<< '3';
  if(bit == "0100") cout<< '4';
  if(bit == "0101") cout<< '5';
  if(bit == "0110") cout<< '6';
  if(bit == "0111") cout<< '7';
  if(bit == "1000") cout<< '8';
  if(bit == "1001") cout<< '9';
  if(bit == "1010") cout<< 'a';
  if(bit == "1011") cout<< 'b';
  if(bit == "1100") cout<< 'c';
  if(bit == "1101") cout<< 'd';
  if(bit == "1110") cout<< 'e';
  if(bit == "1111") cout<< 'f';
}

void makeBitString(string hex){
 
  for(int hex_Idx = 0; hex_Idx< hex.length(); hex_Idx++){
    
    if(hex[hex_Idx] == '0') cout<< "0000 ";
    if(hex[hex_Idx] == '1') cout<< "0001 ";
    if(hex[hex_Idx] == '2') cout<< "0010 ";
    if(hex[hex_Idx] == '3') cout<< "0011 ";
    if(hex[hex_Idx] == '4') cout<< "0100 ";
    if(hex[hex_Idx] == '5') cout<< "0101 ";
    if(hex[hex_Idx] == '6') cout<< "0110 ";
    if(hex[hex_Idx] == '7') cout<< "0111 ";
    if(hex[hex_Idx] == '8') cout<< "1000 ";
    if(hex[hex_Idx] == '9') cout<< "1001 ";
    if(hex[hex_Idx] == 'a') cout<< "1010 ";
    if(hex[hex_Idx] == 'b') cout<< "1011 ";
    if(hex[hex_Idx] == 'c') cout<< "1100 ";
    if(hex[hex_Idx] == 'd') cout<< "1101 ";
    if(hex[hex_Idx] == 'e') cout<< "1110 "; 
    if(hex[hex_Idx] == 'f') cout<< "1111 ";
  }
}


