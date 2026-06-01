#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

// klass tokoelektronik
class tokoElektronik
{
private:
    // array
    string Rak[3];
    // constructor
    tokoElektronik()
    {
        Rak[0] = "Kipas Angin";
        Rak[1] = "Iphone 17 proMax";
        Rak[2] = "Laptop ROG";
    }

public:
    void ambilProduk()
    {
    }
}
