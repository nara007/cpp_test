#ifndef CONTAINER_H_
#define CONTAINER_H_

#include <string>
#include "./component.h"

class Container:public Component{
private:
	std::string* name;
public:

	Container(const std::string& name);
	virtual void operation();
	virtual void addComponent(Component*);
	virtual void removeComponent(Component*);
	virtual ~Container();

};

#endif