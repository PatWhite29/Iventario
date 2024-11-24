#ifndef IVENTORY_H
#define IVENTORY_H
#include <string>
#include <unordered_map>
using namespace std;

class Inventory {
private:
    unordered_map<string, int> products;
public:
    void addProduct(string& name, int quantity);
    int getProduct(string& name);
    bool removeProduct(string& name);
    
};
#endif //IVENTORY_H
