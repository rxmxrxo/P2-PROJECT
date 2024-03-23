#include <stdio.h>

struct inventory
{
    char partName[30];
    int partNumber;
    float price;
    int stock;
    int reorder;
};

union data
{
  char c;
  short s;
  long b;
  float f;
  double d;0
};

int main()
{
    return 0;
}


