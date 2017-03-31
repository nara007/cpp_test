#include <string>
#include <iostream>
#include "../include/container.h"

Container::Container(const std::string& name){

	this->name = new std::string(name);
}

Container::~Container(){
	delete this->name;
	// for(std::vector<Component*>::const_iterator iter=this->container->cbegin();iter!=this->container->cend();iter++){
	for(auto iter=this->container->cbegin();iter!=this->container->cend();iter++){
		delete *iter;
	}
}

void Container::operation(){
	std::cout<<"this is container "<<*this->name<<std::endl;
	for(std::vector<Component*>::const_iterator iter=this->container->cbegin();iter!=this->container->cend();iter++){
		(*iter)->operation();
	}

}

void Container::addComponent(Component *component){
	this->container->push_back(component);
}

void Container::removeComponent(Component *component){
	for(auto iter=this->container->begin(); iter!=this->container->end();iter++){
		if(*iter == component){
			this->container->erase(iter);
			delete component;
			// *component = NULL;
			// *iter = NULL;
			break;
		}
	}
}