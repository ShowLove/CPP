#include <iostream>
// g++ basicCPPMainClass.cpp -o basicCPPMainClass.out && ./basicCPPMainClass.out
class fooClass
{
 public: 
  fooClass(){}
  fooClass(int x){}
  void fooPublicFunction()
  {
    fooPrivateFunction();
  } 
 private:
  void fooPrivateFunctDeclartion(int x);
  void fooPrivateFunction()
  {
    std::cout << " Hello World " << std::endl;
  }
};

int main()
{
  fooClass* pClassObject = new fooClass();
  pClassObject->fooPublicFunction();
  fooClass  classObject;
  classObject.fooPublicFunction();
  delete pClassObject;
  pClassObject = NULL; 
}
