#include <iostream>

/* this is a quick and dirty main that uses fooClass */
// g++ basicCPPMainClass.cpp -o basicCPPMainClass.out && ./basicCPPMainClass.out

class fooClass
{

 public: // dont forget the :
 
  fooClass(){} /* Default constructor : Note,  if (and only if) there are no constructors for a structure (struct or class), the compiler will automatically create one for you.*/ 
  fooClass(int x){} // Note there is no ";" at the end of function definitions

  void fooPublicFunction()
  {
    fooPrivateFunction();
  }
 
 private:

  void fooPrivateFunctDeclartion(int x); // Note there is ";" at the end of function declarations

  void fooPrivateFunction() const
  {
    std::cout << " Hello World " << std::endl;
  }


}; // dont forget the ; /* This is a vestige of a C Struct that must end with a semicolon.*/


int main()
{

  fooClass* pClassObject = new fooClass();
  pClassObject->fooPublicFunction();

  fooClass  classObject;
  classObject.fooPublicFunction();

  delete pClassObject;
  pClassObject = NULL; 
}
