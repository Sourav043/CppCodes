#include <iostream>
struct Address {
	const char* name; // "Jim Dandy"
	int number; // 61
	const char* street; // "South St"
	const char* town; //"New Providence"
	char state[2]; // 'N' 'J'
	const char* zip; //"07974"
};
void print_addr(Address* p)
{
	std::cout << p->name << '\n'
		<< p->number << ' ' << (*p).street << '\n'
		<< p->town << '\n'
		<< p->state[0] << p->state[1] << ' ' << p->zip << '\n';

}

int main()
{
	Address jd = {

	"Jim Dandy",
	61,
	"South St",
	"New Providence",
	{'N','J'},
	"07974"

	};
	print_addr(&jd);
	std::cout << jd.number;

	std::cin.get();
}