/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:15:19 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 18:15:32 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = other;
}

Cat& Cat::operator=(Cat const &rhs)
{
	this->setType(rhs.getType());
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "The cat is MEOOOOOOWING" << std::endl;
}