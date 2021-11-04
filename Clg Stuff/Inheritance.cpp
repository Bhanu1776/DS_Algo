#include <iostream>
using namespace std;

//* Single Inheritance

// class Car {
// public:
//   void get() { cout << "This is a Car" << endl; }
// };

// class Bike : public Car {
// public: void sq() { cout << "This is a Bike" << endl; }
// };

// int main() {
//   Bike obj;
//   obj.get();
//   obj.sq();
//   return 0;
// }

//* Hierarchical Inheritance :

// #include <iostream>
// using namespace std;

// class Shape {
// public:
//   int x, y;

//   void get_data(int n, int m) {
//     x = n;
//     y = m;
//   }
// };

// class Rectangle : public Shape {
// public:
//   int area_rect() {
//     int area = x * y;
//     return area;
//   }
// };

// class Triangle : public Shape {
// public:
//   int triangle_area() {
//     float area = 0.5 * x * y;
//     return area;
//   }
// };

// class Square : public Shape {
// public:
//   int square_area() {
//     float area = x * x;
//     return area;
//   }
// };

// int main() {
//   Rectangle r;
//   Triangle t;
//   Square s;
//   int length, breadth, base, height, side;
//   std::cout << "Enter the length and breadth of a rectangle: ";
//   cin >> length >> breadth;

//   r.get_data(length, breadth);

//   int rect_area = r.area_rect();

//   std::cout << "Area of the rectangle = " << rect_area << std::endl;

//   std::cout << "\nEnter the base and height of the triangle: ";
//   cin >> base >> height;

//   t.get_data(base, height);

//   float tri_area = t.triangle_area();

//   std::cout << "Area of the triangle = " << tri_area << std::endl;

//   std::cout << "\nEnter the length of one side of the square: ";
//   cin >> side;

//   s.get_data(side, side);

//   int sq_area = s.square_area();

//   std::cout << "Area of the square = " << sq_area << std::endl;

//   return 0;
// }

//*  Hybrid Inheritance = multilevel + multiple

// #include <iostream>
// #include <string>
// using namespace std;

// class student {
//   int id;
//   string name;

// public:
//   void getstudent() {
//     cout << "\nEnter student Id and student name : ";
//     cin >> id >> name;
//   }
// };

// class marks : public student {
// protected:
//   int marks_math, marks_phy, marks_chem;

// public:
//   void getmarks() {
//     cout << "\nEnter 3 subject marks:";
//     cin >> marks_math >> marks_phy >> marks_chem;
//   }
// };
// class drawing {
// protected:
//   int drmarks;

// public:
//   void getdrawing() {
//     cout << "\nEnter drawing marks:";
//     cin >> drmarks;
//   }
// };

// class result : public marks, public drawing {
//   int total_marks;
//   float avg_marks;

// public:
//   void display() {
//     total_marks = marks_math + marks_phy + marks_chem;
//     avg_marks = total_marks / 3.0;
//     cout << "\nTotal marks =" << total_marks << endl;
//     cout << "Average marks =" << avg_marks << endl;
//     cout << "Average + drawing marks =" << avg_marks + drmarks;
//   }
// };
// int main() {
//   result res;
//   res.getstudent();
//   res.getmarks();
//   res.getdrawing();
//   res.display();
//   return 0;
// }

//* Multiple Inheritance :

// #include <iostream>
// using namespace std;

// class Mammal {
// public:
//   Mammal() { cout << "Mammals can give direct birth." << endl; }
// };

// class WingedAnimal {
// public:
//   WingedAnimal() { cout << "Winged animal can flap." << endl; }
// };

// class Bat : public Mammal, public WingedAnimal {};

// int main() {
//   Bat b1;
//   return 0;
// }

//* Multilevel Inheritance : 

// #include <iostream>
// using namespace std;

// class Vehicle {
// public:
//   Vehicle() { cout << "This is a Vehicle" << endl; }
// };

// class fourWheeler : public Vehicle {
// public:
//   fourWheeler() { cout << "Objects with 4 wheels are vehicles" << endl; }
// };

// class Car : public fourWheeler {
// public:
//   Car() { cout << "Car has 4 Wheels" << endl; }
// };

// int main() {
//   Car obj;
//   return 0;
// }
