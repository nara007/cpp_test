#ifndef LEAF_H_
#define LEAF_H_
#include <string>
#include "component.h"


class Leaf:public Component{

private:
	std::string* name;
public:
	Leaf(const std::string& name);
	virtual void operation();
	virtual void addComponent(Component*);
	virtual void removeComponent(Component*);
	virtual ~Leaf();
};

#endif