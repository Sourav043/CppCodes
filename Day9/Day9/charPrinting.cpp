#include<iostream>

void use(char a) { 
	std::cout << a ;
}
void fi(char v[]) {
	for (int i = 0; v[i] != 0; ++i) use(v[i]);
}

void fp(char v[]) {
	for (char* p = v; *p != '\0'; ++p) use(*p);
}
/*int main() {
	char arr[] = "souravkitkat043";
	fi(arr);
	std::cout << std::endl;
	fp(arr);
}*/