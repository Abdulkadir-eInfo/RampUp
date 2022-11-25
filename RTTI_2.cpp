#include <iostream>
#include <typeinfo>
#include <cassert>
using namespace std;


class GrandParent
{
   public:
   GrandParent() { cout << "GrandParent Constructed" << endl; }
   virtual void work()
   {
      cout << "I used to work at the Royal Palace" << endl;
   }
   ~GrandParent() { cout << "GrandParent Destructed" << endl; }
};

class Father:public GrandParent
{
public:
   Father() { cout << "Father Constructed" << endl; }
   virtual void work()
   {
      cout << "I work at Bank" << endl;
   }
   ~Father() { cout << "Father Destructed" << endl; }
};
class Mother: public GrandParent
{
public:
   Mother() { cout << "Mother Constructed" << endl; }
   virtual void work()
   {
      cout << "I work at Salon" << endl;
   }
   ~Mother() { cout << "Mother Destructed" << endl; }
};
class Child: public Father, public Mother
{
   public:
   Child() { cout << "Child Constructed" << endl; }
   void work()
   {
      cout << "I am a Student" << endl;
   }
   void hello()
   {
      cout << "Child saying hello" << endl;
   }
   ~Child() { cout << "Child Destructed" << endl; }
};

int main()
{
   Mother *ptr_mother = new Child;
   ptr_mother->work();
   Child *ptr_child = dynamic_cast<Child*>(ptr_mother);
   ptr_child->work();
   Father *ptr_father = dynamic_cast<Father *>(ptr_mother);
   ptr_father->work();
   assert(typeid(ptr_mother) != typeid (Child*));
   assert(typeid (ptr_mother) == typeid (Mother*));
   Mother *ptr_mother2 = new Mother;
   Child *ptr_child2=(Child*)(ptr_mother2); //Will work fine but at runtime is not useful as will give error
   // ptr_child->work(); //Will give segmentation fault as dervied class pointer is pointing to its parent class object
   if(ptr_child2)
   {
      cout << "";
   }
   ptr_child2->hello();

   return 0;
}
