#include <iostream>
struct PPN {

	unsigned int PFN : 22; 
	int : 3; // unused
	unsigned int CCA : 3; 
	bool nonreachable : 1;
	bool dirty : 1;
	bool valid : 1;
	bool global : 1;
	int a : 1;
	int b : 1;
};
int main()
{
	std::cout << sizeof(PPN) << "\n";
}