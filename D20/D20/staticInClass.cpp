#include<iostream>

class Entity {
    // p :
    static int x, y;
public:
    static void set(int a, int b) {
        x = a;
        y = b;
    }
    static void print() {
        std::cout << x << " " << y << std::endl;
    }
};
int Entity::x;
int Entity::y;

/*int main() {
    Entity e2;
    // e2.x = 10;
    // e2.y = 20;
    e2.set(10, 2);
    Entity::print();
    Entity::set(4, 8);
    e2.print();

}*/