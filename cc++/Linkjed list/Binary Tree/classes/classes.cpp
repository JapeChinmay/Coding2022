#include<iostream>
#include <string>
using namespace std;


class vechile {
    public:
      int speed;

      int num;


      private:
        int price;


        public:

            vechile() {
                  
                  cout << "Defaul v called" << endl;
            }

            vechile(int z) {
                   num = z;

            }

            ~vechile() {
                  cout <<"Destructor called for vechile" << endl;
                  
            }

};

class car: public vechile{
      public:
        int newC;

        car()  {

            cout << "Defaul c called ex" << endl;

        }

        ~car() {
              cout << "Destrictor called for car" << endl;

        }
       


};

class Truck : public vechile {
       public:
         Truck() {
               cout <<"Truck is called" << endl;

         }


};


class Bus : public car, public Truck {
      public:
         Bus () {
               cout <<" Bus is called" << endl;

         }

         ~Bus () {
              cout << "Destructor is called" <<  endl;

         }
};


class Honda : public car {
        
        public:
          Honda() {
              
              cout << " honda city c " << endl;


          }

          ~Honda() {
              cout <<"honda city destructor" << endl;

          }
};


class Teacher {

    public:
      string name;
      string age;

      void print() {

        cout << "teacher" << endl;

          
           
      }

};

class Student  {
      
        public:

        void print() {
               
               cout <<"student" << endl;

        }


};

class TA : public Teacher, public Student {
      
        public : 
    
         void print() {
              cout << "TA"  << endl;

         }
};





int main() {

   // Honda h1;


    // vechile v1;

    // v1.speed = 12;
    // v1.num = 45;

    // car c;
    // c.newC = 445;
    // c.speed = 456;
    // c.num = 100;

    // TA a;

    // a.Teacher :: print();
    // a.print();

    Bus b1;













     
}