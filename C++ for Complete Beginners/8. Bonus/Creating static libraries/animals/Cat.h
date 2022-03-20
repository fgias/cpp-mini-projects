/*
 * Cat.h
 *
 *  Created on: Mar 20, 2022
 *      Author: fgias
 */

#ifndef CAT_H_
#define CAT_H_

namespace fgias {

void saySomething();

class Cat {
public:
	Cat();
	void speak();
	virtual ~Cat();
};

} /* namespace fgias */

#endif /* CAT_H_ */
