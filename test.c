#include <stdio.h>

class CA{
public:
  CA(){ printf("------1--------\n"); }
  ~CA(){ printf("------2--------\n"); }
};

int main()
{
    CA* ca;  
    ca = (CA*)::operator new(sizeof(CA));
    CA* tmp = new (ca) CA();
    delete tmp;
    return 0;
}
