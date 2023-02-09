#include <string>
#include "storelogic.h"

using namespace std; 

Store::~Store(){};

Store::Store(string storeName){
    itemCount = 0;
    name = storeName;
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

Item::Item(string itemName, int itemNumber){
    name =  itemName;
    reference = itemNumber; 
};
