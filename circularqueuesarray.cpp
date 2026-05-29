#include <iostream>     //library
using namespace std;

class Queues //membuat class queues
{
private:
static const int max = 3;
  int FRONT, REAR;
  int queue_array[max];
public:
    Queues()     
    {
        FRONT = -1;
        REAR = -1;

 }
    void insert()
    {
        int num;
        cout << "Enter a number : ";
        cin >> num;