#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
char bloques[3] = {'A','B','C'};
 char *ptr = &bloques[0];
 char temp;
 temp = bloques[0]; // __________
 temp = *(bloques + 2); // __________
 temp = *(ptr + 1); // __________
 temp = *ptr; // __________
 ptr = bloques + 1; // __________
 temp = *ptr; // __________
 temp = *(ptr + 1); // __________
 ptr = bloques; // __________
 temp = *++ptr; // __________
 temp = ++*ptr; // __________
 temp = *ptr++; // __________
 temp = *ptr; // __________
}
