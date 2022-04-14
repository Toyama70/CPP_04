/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:44:24 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/13 21:37:56 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	setType("Dog");
	dogBrain = new Brain();
}

Dog::~Dog()
{
	delete dogBrain;
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor" << std::endl;
	dogBrain = new Brain(*(other.getBrain())); /* THIS LINE MAKES THE DEEP COPY - IMPORTANT*/
	*this = other;
}

Dog& Dog::operator=(Dog const &rhs)
{
	this->setType(rhs.getType());
	*dogBrain = *(rhs.getBrain());
	return *this;
}

Brain*	Dog::getBrain() const
{
	return dogBrain;
}

void	Dog::makeSound() const
{
	std::cout << "The dog screams wanwanwan" << std::endl;
}