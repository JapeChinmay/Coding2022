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

            // vechile() {
                  
            //       cout << "Defaul v called" << endl;
            // }

            vechile(int z) {
                cout << "constructor called " << z << endl;

                   num = z;

            }

            ~vechile() {
                  cout <<"Destructor called for vechile" << endl;
                  
            }

            void modify() {
                   cout << "Modify called" << endl;

            }

};

class car:  virtual public vechile{
      public:
        int newC;

        car()  : vechile(2) {

            cout << "Defaul c called ex" << endl;

        }
        void modify() {
                   cout << "Modify called from car" << endl;
                   
            }

        ~car() {
              cout << "Destrictor called for car" << endl;

        }


       


};

class Truck : virtual  public vechile {
       public:
         Truck() : vechile(34) {
               cout <<"Truck is called" << endl;

         }

        //  void modify() {
        //            cout << "Modify called from truck" << endl;
                   
        //     }

            ~Truck () {
                   cout << "truck destructor called "  << endl;

            }


};


class Bus : public car, public Truck {
      public:
         Bus ()  : vechile(99){
               cout <<" Bus is called" << endl;

         }

         ~Bus () {
              cout << "Destructor is called" <<  endl;

         }
};


class Honda : public car {
        
        public:
          Honda() : vechile(34) {
              
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

    cout << "///////////////////////////////////////////////////////////////////////////" << endl;

    // b1.car :: modify();
    // // calling modify of car .

    // b1.Truck :: modify();














     
}