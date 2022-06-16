#include <iostream>
using namespace std;

int main() {
  //make char for input
  char a;
  cin>>a;
  //make loop to convert upper to lowercase
  if(a>='A' and a<='Z'){
    a = a+32;
    cout<<a;
  }
  //make loop to convert lower to uppercase
  else if(a>='a' and a<='z'){
    a = a-32;
    cout<<a;
  }
  //make loop to add 100 to whatever number the user inputs as well as making the intergerbe equal to what the user inpputed
  if(a>='0' and a<='9'){
    a=a-48;
    cout<<a+100;
  }
}