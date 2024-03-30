#include<iostream>
#include<vector>
#include<string>

class IntArray {
private:
	std::string m_name;
	int* m_data;
public:

	IntArray(std::string name) : m_data(new int[10]), m_name(name) {
		std::cout <<name<< " Constructor\n";
	};
	~IntArray() {
		std::cout << m_name<<" Destructor\n";
		delete[] m_data;
	}
	IntArray(const IntArray& rhs) {
		m_name = rhs.m_name;
		m_data = new int[10];
		for (int i = 0; i < 10; i++) {
			m_data[i] = rhs.m_data[i];
		}
		std::cout << m_name<<" Copy Constructor\n";
	}
	IntArray& operator=(const IntArray& rhs) {
		
		if (this != &rhs) {
			delete[] m_data;
			m_name = rhs.m_name;
			std::cout <<m_name <<" Copy Assignment\n";
			m_data = new int[10];
			for (int i = 0; i < 10; i++) {
				m_data[i] = rhs.m_data[i];
			}
		}
		return *this;
	}

	IntArray(IntArray&& source) noexcept{
		m_name = source.m_name;
		source.m_name = "";
		m_data = source.m_data;
		source.m_data = nullptr;
		std::cout << m_name << " Move Copy Called\n";
	}

	IntArray& operator=(IntArray&& source) noexcept{
		m_name = source.m_name;
		source.m_name = "";
		m_data = source.m_data;
		source.m_data = nullptr;
		std::cout << m_name << " Move Assignment Called\n";
		return *this;
	}
};

IntArray foo() {
	IntArray temp("Vishal");
	//std::cout << &temp<<std::endl;
	return temp;
}
/*
int main() {

	//IntArray a1("Sourav");
	//IntArray a2 = a1;
	//IntArray a3 = foo();   // return value optimization
	//std::cout << &a2;
	
	std::vector<IntArray> v1;
	v1.reserve(10);
	for (int i = 0; i < 10; i++) {
		IntArray temp(std::to_string(i));
		v1.push_back(std::move(temp));
	}

	return 0;
}*/