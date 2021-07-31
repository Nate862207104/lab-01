#include <iostream>
#include "/class/classes/nbern014/lab-01/header/rectangle.hpp"

using namespace std;

int main(){
	Rectangle rect,rect2;
	
	rect.set_width(3);
	rect.set_height(4);

	rect2.set_width(4);
	rect2.set_height(2);

	std::cout<< "Rectangle 1 area: " << rect.area()<< endl;
	std::cout<< "Rectangle 2 area: "<<rect2.area()<<endl;
 
	return 0;
}
