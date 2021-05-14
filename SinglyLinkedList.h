//Kyle Luster
//This is my own work
//1-30-21
using namespace std;

struct node {
   int data;
   node* next;
};

struct LinkedList {
private:
    node* head;
public:
    LinkedList() {                                          // Starts the head of a linked list
        head = nullptr;
    }

  //access to front
  void getFront() {   //this will provide the first value
    struct node* temp;
    temp = head;
    //this for loop is O(n)
    for (int i = 1; i<=1; i++) {
        cout<< temp->data <<" ";  
        temp = temp -> next;
    }
    cout << endl;
  }

  //access to back
  void getBack() {    //this will provide the last value
    struct node* temp = head;
    struct node* previous = new node;
    //this while loop is O(n)
  while(temp != NULL){
    previous = temp;
  temp = temp -> next;
  }
  cout<<previous->data<<endl;
  }

  //insert value
  void insertValue(int newData) { //this will put a new value at the front
    struct node* newNode = new node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
  }


  //remove value at front
  void deleteFront() {    //this will delete the value at the front
    struct node* temp;
    temp = head;
    //this for loop is O(n)
    for (int i = 1; i<=1; i++) {
    head = temp -> next;
    delete(temp);
    }
  }

  //delete value at tail
  void deleteBack() {   //this will delete the value at the back
    struct node* temp = head;
    struct node* previous = new node;
    struct node* cleanUp = new node;
  while(temp != NULL){    //cleanUp trails previous which trails temp
    cleanUp = previous;   //this trailing allows us to identify NULL
    previous = temp;      //delete the last value, and point to NULL again
  temp = temp -> next;
  }
    delete(previous);
    cleanUp -> next = NULL;

  }

  //determine if empty
  void checkEmpty(){  //simply checks if the head is pointing to NULL
  if(head == NULL){
  cout<<"Empty!"<<endl;
  }
  else{
  cout<<"Not empty!"<<endl;
  }
  }

  //return number of elements
  void returnSize(){    //counts the number of elements as it seeks NULL
  struct node* temp = head;
  int counter = 0;
    while (temp != NULL) { //figuring out how long the SLL is
      temp = temp -> next;
      counter++;
    }
  cout<< counter << endl;
  }

  //reverse
  void reverse() {  //rearranging the order to be reversed
    struct node *next = nullptr, *prev = nullptr;
    struct node* temp = head;   
    while(temp != nullptr) {  
      next = temp->next;  
      temp->next = prev;
      prev = temp;
      temp = next;
    }
    head = prev;
  }

  //merge
  void merge(LinkedList &list) {  //pointing the tail of the first list
    struct node* temp = head;     //to the head of the second list
    while(temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = list.head;
  }

  void display() {    //prints out our SLL
    struct node* temp;
    temp = head;
    while (temp != NULL) {
        cout<< temp->data <<" ";
        temp = temp -> next;
    }
    cout << endl;
  }

};
