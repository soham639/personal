#include"headerr.h"

/*class Animal {  
public:  
  virtual ~Animal() {}  
};  
  
class Dog : public Animal {  
public:  
  void bark() {  
std::cout<< "Woof woof!" <<std::endl;  
  }  
};  
  
class Cat : public Animal {  
public:  
  void meow() {  
std::cout<< "Meow meow!" <<std::endl;  
  }  
};  
  
int main() {  
  Animal* animalPtr = new Dog;  
  Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);  
  if (dogPtr != nullptr) {  
dogPtr->bark();  
  }  
  delete animalPtr;  
  return 0;  
}  */

class A
{
  public: 
  virtual void show()=0;


};

class B: public A
{
  public:
  void show()
  {
    cout<<"display B"<<endl;

  }
  void disp()
  {
    cout<<"Class B"<<endl;

  }
};

int main()

{
  A* aptr;

  aptr=new B;

  B* bptr=dynamic_cast<B*>(aptr);

  aptr->show();

  if(bptr)
  {
    bptr->disp();
  }
  else
  cout<<"cannot cast"<<endl;
  
  }