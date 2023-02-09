#include <string>
#include <storelogic.h>

using namespace std; 

Store::Store(){
    itemCount = 0;
};

string Store::GetName(){
    return name;
};

string Store::GetLocation(){
    return location;
};

void Store::AddNewItem(string item){
    itemCount += 1;
    new Item(item, itemCount);
};

void Store::RemoveItem(string item){

};
void Store::SetLocation(string storeLocation){

};
void Store::SetName(string storeName){

};



class Item {
    public: 
        string name; 
        string type; 
        int price;
        int reference; 

        Item(string itemName, int itemNumber){
            name =  itemName;
            reference = itemNumber; 
        };
};
