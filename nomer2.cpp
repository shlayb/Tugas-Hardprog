#include <iostream>
#include <cmath>
using namespace std;

int main(){
  string input;
  cout << "Input : ";cin >> input;
  int index = 0, hasil[3];
  bool start = false;
  int len = 0;
  for (char i : input){
    if(i == '^'){
      len++;
    }
  }
  len += 1;
  string data[len];
  for(int i : input){
    if(start){
      if(char(i) == '^'){
        index++;
      }else if(char(i)== '&'){  
        break;}
      else{
        data[index] += string(1, char(i));
      }
    }else{
      if(char(i) == '%'){
        start = !start;
      }
    }
  }
  // string to int
  for(int i = 0; i < len; i++){
    hasil[i] = stoi(data[i]);
  }

  // print data
  for(int i = 0; i < len; i++){
    cout << "data[" << i << "] : " << hasil[i] << endl;
  }

  return 0;
}