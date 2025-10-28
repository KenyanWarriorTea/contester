#include <iostream>
#include <algorithm>

using namespace std;

struct Luggage {
    char *description;
    int count;
    double weight;
};

struct Passenger {
    int luggageSize;
    char *name;
    Luggage *luggage;
};

int main() {
    int size, indexMax, indexMax2;
    double MAX = 0;

    cin >> size;

    Passenger *inCar = new Passenger[size];

    for(int i = 0; i < size; i++) {
        inCar[i].name = new char[64];
        cin >> inCar[i].name;
        cin >> inCar[i].luggageSize;

        inCar[i].luggage = new Luggage[inCar[i].luggageSize];
        for(int j = 0; j < inCar[i].luggageSize; j++) {
            inCar[i].luggage[j].description = new char[64];
            cin >> inCar[i].luggage[j].description 
                >> inCar[i].luggage[j].count 
                >> inCar[i].luggage[j].weight;
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < inCar[i].luggageSize; j++) {
            double totalWeight = inCar[i].luggage[j].count * inCar[i].luggage[j].weight;
            if(totalWeight > MAX) {
                MAX = totalWeight;
                indexMax = i;
                indexMax2 = j;
            }
        }
    }

    cout << inCar[indexMax].name << endl;
    cout << inCar[indexMax].luggage[indexMax2].description << endl;

    for(int i = 0; i < size; i++) {
        delete [] inCar[i].name;
        for(int j = 0; j < inCar[i].luggageSize; j++) {
            delete [] inCar[i].luggage[j].description;
        }
        delete [] inCar[i].luggage;
    }

    delete [] inCar;

    return 0;
}
