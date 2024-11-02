#include <iostream>
using namespace std;

int checklen(string str){
  int len = 0;
  for(char i : str){
    len += (i == ',' ? 1 : 0);
  }
  return len+1;
}

int* stringtoarray(string str){
  bool isStart = false;
  int len = 0, idx = 0;
  for(char i : str){
    len += (i == ',' ? 1 : 0);
  }
  int* arr = new int[len+1]();
  for(char i : str){
    if(i == ','){
      idx++;
    }else{
      arr[idx] = (arr[idx] * 10) + (i - '0');
    }
  }
  return arr;
}

int FindIntSelection(string stringarray[2]){
  string temp = "";
  int* arr1 = stringtoarray(stringarray[0]);
  int* arr2 = stringtoarray(stringarray[1]);
  int len1 = checklen(stringarray[0]);
  int len2 = checklen(stringarray[1]);
  int idx1 = 0, idx2 = 0;
  for(int i = 0; i < len1; i++){
    for(int j = 0; j < len2; j++){
      if(arr1[i] == arr2[j]){
        if(temp == ""){
          temp = to_string(arr1[i]);
        }else{
          temp += "," + to_string(arr1[i]);
        }
      }
    }
  }
  int* result = stringtoarray(temp);
  int len = checklen(temp);
  for(int i = 0; i < len; i++){
    cout << result[i] << (i == len-1 ? "" : ",");
  }
  cout << endl;
  return 0;
}

int main(){
  string stringarray[2];
  for(int i = 0; i < 2; i++){
    cout << "Input " << i+1 << " : ";
    cin >> stringarray[i];
  }
  if(stringarray[0] == "" || stringarray[1] == ""){
    cout << "False" << endl;
    return 0;
  }else{
    FindIntSelection(stringarray);
  }
  return 0;
}