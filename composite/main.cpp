#include <iostream>
#include "./include/component.h"
#include "./include/leaf.h"
#include "./include/container.h"


int main(){
	Leaf leaf("xiaoming");
	// leaf.operation();

	Leaf* leaf2 = new Leaf("daming");
	Leaf* leaf3 = new Leaf("daqiang");
	Container container("big container");

	container.addComponent(leaf2);
	container.addComponent(leaf3);

	container.operation();

	container.removeComponent(leaf2);
	container.operation();

    return 0;


}