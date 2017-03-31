#include <iostream>
#include "../include/leaf.h"

Leaf::Leaf(const std::string& name){

	this->name = new std::string(name);
}

Leaf::~Leaf(){
	delete this->name;

}

void Leaf::operation(){
	std::cout<<"leaf name is "<<*this->name<<std::endl;
}

void Leaf::addComponent(Component* component){
	
}

void Leaf::removeComponent(Component* component){
	
}