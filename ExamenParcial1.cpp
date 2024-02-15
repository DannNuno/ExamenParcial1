#include <bits/stdc++.h>
using namespace std;

class Circulo{
    float radio;

    public:
    int x;
    int y;

    Circulo();
    Circulo(int x2, int y2);
    Circulo(int x2, int y2, float r);

    float getRadio();
    void setRadio(float r);
    float getArea();
    void intersects(Circulo circulo);

};

int main(){

    Circulo c1;
    c1.x = 3;
    c1.y = 7;
    c1.setRadio(5.5);

    Circulo c2(15,10);
    c2.setRadio(3.5);

    Circulo c3(5,6,4.5);

    cout << "area del circulo 1: " << c1.getArea() << endl;
    cout << "area del circulo 2: " << c2.getArea() << endl;
    cout << "area del circulo 3: " << c3.getArea() << endl;

    c1.intersects(c2);
    c1.intersects(c3);
    c2.intersects(c3);

    return 0;
}

Circulo::Circulo(){
    radio = 0.0;
    x = 0;
    y = 0;
};

Circulo::Circulo(int x2, int y2){
    radio = 0.0;
    x = x2;
    y = y2;
};

Circulo::Circulo(int x2, int y2, float r){
    if(r>=0){
        radio = r;
    } else {
        radio = 0.0;
    }

    x = x2;
    y = y2;
};

float Circulo::getRadio(){
    return radio;
};

void Circulo::setRadio(float r){
    if(r>=0){
        radio = r;
    } else {
        radio = 0.0;
    }
};

float Circulo::getArea(){
    return 3.1416*(radio*radio);
};

void Circulo::intersects(Circulo circulo){

    int distA,distB;
    float dist;
    distA = x - circulo.x;
    distB = y - circulo.y;
    dist = sqrt((distA*distA)+(distB*distB));

    if(dist < (radio + circulo.getRadio())){
        cout << "Los circulos intersectan" << endl;
    } else {
        cout << "Los circulos no intersectan" << endl;
    }

};