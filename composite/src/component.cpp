#include "../include/component.h"

Component::Component(){
	this->container = new std::vector<Component*>();
}

Component::~Component(){
	delete this->container;
}
