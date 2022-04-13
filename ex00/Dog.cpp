/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:44:24 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 18:15:40 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = other;
}

Dog& Dog::operator=(Dog const &rhs)
{
	this->setType(rhs.getType());
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "The dog is BAAARKING" << std::endl;
}