#include <iostream>

using namespace std;
#define SIZE 5

int head = 0 ,tail = 0;
int buf[SIZE] = {0};
bool IsFull()
{
    return tail - head == SIZE;
}
bool IsEmpty()
{
    return tail == head;
}
int BufferSize()
{
    return SIZE;
}
void AddValue(int value)
{
    if(IsFull())
    {
        cout << "Buffer is is full" << endl;
    }
    else
    {
        buf[tail++ % SIZE] = value;   
    }
}
int GetValue()
{
    int ret = -1;
    if(IsEmpty())
    {
        cout << "Buffer is is empty" << endl;
    }
    else
    {
        ret = buf[head % SIZE];
        buf[head % SIZE] = 0;
        head++;
    }
    cout << "GetValue:" << ret << endl;
    return ret;
}
void printBuf()
{
  cout << "Buffer:";
  for (int i = 0; i < SIZE; i++) 
  {
      cout << buf[i] << " ";
  }
  cout << endl;
}
int main()
{
    AddValue(5);
    AddValue(1);
    AddValue(2);
    AddValue(3);
    AddValue(4);
    printBuf();
    
    AddValue(6);
    GetValue();
    AddValue(7);
    printBuf();
    
    
    GetValue();
    GetValue();
    GetValue();
    GetValue();
    GetValue();
    printBuf();
    AddValue(8);
    AddValue(9);
    AddValue(10);
    printBuf();
GetValue();
GetValue();
AddValue(1);
AddValue(2);
printBuf();
    return 0;
}