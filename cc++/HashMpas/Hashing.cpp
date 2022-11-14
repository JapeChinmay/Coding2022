#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>


using namespace std;

template <typename V> 

class Map{

    public:
      string key;
      V value;

      Map* next;

      Map(string key, V value) {
          this->key  = key;
          this->value  = value;
          next = NULL;


      }

      ~Map() {
         delete next;

      }


};

template <typename V>

class ourmap{


    Map<V>** buckets;
    int count;
    int numBuckets;


    public :
     

     ourmap() {
          count=  0;
          numBuckets = 5;
          buckets = new Map<V>*[numBuckets];
          for(int i=0;i<numBuckets;i++) {
                 buckets[i] = NULL;

          }
     }


     ~ourmap() {
           for(int i=0;i<numBuckets;i++) {
                  delete buckets[i];

           }

           delete [] buckets;
     }





int size () {

    return count;
    
      
}

private:
    int getBucketIndex(string key) {

        int hashCode = 0;

        int coeff = 1;
        for(int i= key.length()-1 ;i>=0; i--) {
               hashCode = hashCode + (key[i] * coeff);
               hashCode = hashCode % numBuckets;
               coeff = coeff * 37;
               coeff  = coeff % numBuckets;

        }


          return hashCode % numBuckets;


    }
public:



void insert(string key, V value) {

    int bucketIndex = getBucketIndex(string key);
    Map<V>* head=  buckets[bucketIndex];

    while(head != NULL) {
          if(head->key == key) {
                head->value = value;

                return;

          }

          head = head->next;
    

    }

    head=  buckets[bucketIndex];
    Map<V>* node = new Map<V>(key , value);
    node->next = head;
    buckets[bucketIndex] = node;
    count++;






      
}


V getValue(string key) {

    int buckerIndex = getBucketIndex(string key);
    Map<V>* head = buckets[buckerIndex];
    while(head != NULL) {
          if(head->key == key) {

            return head->value;


          }

          head = head->next;

    }

    return 0;
    

}


V remove(string key) {

    int bucketIndex = getBucketIndex(string key);
    Map<V>* head=  buckets[bucketIndex];

    Map<V>* prev = NULL;
    while(head != NULL) {
          if(head->key == key) {
            if(prev == NULL) {
                  buckets[bucketIndex] = head->next;
            }else {
                  prev->next= head->next;
            }

            V value1 = head->value;


            head->next=  NULL;
            delete head;
            count--;

            return value1;



                
          }

          prev=  head;
          head=  head->next;


    }


    return 0;


}
};


       
       





int main() {


}