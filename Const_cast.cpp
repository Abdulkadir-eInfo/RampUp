// const_cast
#include <iostream>
using namespace std;

void print (char * str)
{
  cout << str << endl;
}

int main () {
  const char * c = "sample text";
  // This type of casting manipulates the constness of an object, either to be set or to be removed.
  //print ( c ); //argument of type "const char *" is incompatible with parameter of type "char *"
  print ( const_cast<char *> (c) );
  return 0;
}