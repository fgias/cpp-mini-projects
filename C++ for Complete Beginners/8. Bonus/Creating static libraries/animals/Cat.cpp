/*
 * Cat.cpp
 *
 *  Created on: Mar 20, 2022
 *      Author: fgias
 */

#include "Cat.h"
#include <iostream>

namespace fgias {

void saySomething() {
	std::cout << "Hi, I'm a cat." << std::endl;
}

Cat::Cat() {
	// TODO Auto-generated constructor stub

}

void Cat::speak() {
	std::cout << "Meowww" << std::endl;
}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
}

} /* namespace fgias */
