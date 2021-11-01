#include <iostream>
using namespace std;

template <class T>
class Point {
//private書いてなくても、何も書いてなかったらprivateなる。
    T x;
    T y;

public:
 Point() {
    x = 0;
    y = 0;
 }

 Point(int x, int y) {
    set(x, y);
 }

void set(int x, int y) {
    this->x = x;
    this->y = y;
 }

 T getx() {
    return x;
 }

 T gety() {
    return y;
 }

};
