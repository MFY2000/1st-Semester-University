#include <iostream>
#include<iomanip>
using namespace std;

int main (void) {
 
//	Task # 1
 
printf("Muhammad Fahad \nMuhammad Fahad \nMuhammad Fahad\n");
	
//Task # 2

//printf("Hello ,%cworld!", 0x0A);

//just used for line break also used as

printf("Hello ,\nworld!\n");

 
 
// Task # 3
  
// Just used for removal of back space/Letter (/b)

printf("Geeks Hub\b\b\b\bF\n");

// Task # 4

// Just used for white space (\t)

printf("Welcome\tto\tComputer\tProgramming\n\tCourse\n"); 
 
// Task # 5
 
	int m = 1234;
	float no = 12.3400;
	string wooo = "Hello";	

	std::cout.width(40);std::cout << std::right << "Output" << '\n';
	std::cout.width(60);std::cout << std::right << wooo << '\n';
	std::cout.width(20);std::cout << std::right << wooo << '\n';

	std::cout.width(60);std::cout << std::right << m << '\n';
	std::cout.width(20);std::cout << std::right << m << '\n';

	std::cout.width(20);std::cout << std::right << "00001234" << '\n';	
	std::cout.width(60);std::cout << std::right << "12.3400" << '\n';  
	std::cout.width(60);std::cout << std::right << wooo << '\n';

}

