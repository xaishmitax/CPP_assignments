
#include <iostream.h>

using namespace std;
using std::string;
class Area{
private:
int length;
 int breadth;
int area;

 public: 
 int CalculateArea(int length, int breadth){
area = length * breadth;
return area;
 }
};

int main() {
Area myobj;
§cout<< myobj.CalculateArea(5,4);
return 0;

}
