#include "stack.h"

Stack::Stack() :
  Index(0), MaxSize(DEFAULT_MAX_SIZE), Data(new int[MaxSize])
{
}

Stack::~Stack()
{
  delete [] Data;
}

void
Stack::push(int value)
{
  if (Index >= MaxSize) {
    resize(DEFAULT_GROW_SIZE * MaxSize);
  }

  Data[Index++] = value;
}

void
Stack::pop()
{
  if (Index) {
    --Index;
  }
}

int
Stack::top() const
{
  return Data[Index - 1];
}

bool
Stack::empty() const
{
  return !Index;
}

void
Stack::resize(size_t newSize)
{
  int* tmpData = new int[MaxSize = newSize];
  for (size_t i = 0; i < Index; ++i) {
    tmpData[i] = Data[i];
  }
  
  delete [] Data;
  Data = tmpData;
}

