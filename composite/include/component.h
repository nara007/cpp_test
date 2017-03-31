#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <vector>
class Component{
protected:

	std::vector<Component*>* container;
public:

	Component();
	virtual void operation() = 0;
	virtual void addComponent(Component*) = 0;
	virtual void removeComponent(Component*) = 0;
	virtual ~Component();

};

#endif