#include<iostream>

/*void func(int* pi) {
	void* pv = pi; 
	*pv; 
	++pv; 
		int* pi2 = static_cast<int*>(pv); 
		double* pd1 = pv; 
	double* pd2 = pi; 
	double* pd3 = static_cast<double*>(pv); 
}
*/
/*int main() {
	//func(5);
        int i = 42;
        double d = 3.14;

        // Declare void* pointer and initialize it with the address of an int.
        void* pv = &i;

        // Cast void* to int* and dereference it to get the value of i.
        int* pi = static_cast<int*>(pv);
        std::cout << "Value of i: " << *pi << std::endl;

        // Increment the int pointer and print the next value.
        ++pi;
        std::cout << "Next int value: " << *pi << std::endl;

        // Revert the pointer to the original address.
        --pi;

        void* pt = &d;
        // Cast void* to double* and dereference it to get the value of d.
        double* pd = static_cast<double*>(pt);
        std::cout << "Value of d: " << *pd << std::endl;

        // Increment the double pointer and print the next value.
        ++pd;
        std::cout << "Next double value: " << *pd << std::endl;


        int a = 10, b = 20, c = 30,dd=4;

        int* ap[4];

        // Assign the addresses of integers to the array elements.
        ap[0] = &a;
        ap[1] = &b;
        ap[2] = &c;
        //ap[3] = &dd;
        // Access the values of integers through the array elements.
        std::cout << "Value of a: " << *ap[0] << std::endl;
        std::cout << "Value of b: " << *ap[1] << std::endl;
        std::cout << "Value of c: " << *ap[2] << std::endl;
        //std::cout << "Value of dd: " << *ap[3] << std::endl;

        return 0;


}*/