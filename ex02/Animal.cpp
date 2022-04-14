/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:19:43 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/14 13:01:29 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
	std::cout << "Animal constructor has been called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	*this = other;
}

Animal& Animal::operator=(const Animal& rhs)
{
	(void)(rhs);
	//change attributes if required by rhs.attribute;
	return *this;
}

std::string	Animal::getType() const
{
	return type;
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound() const
{
	std::cout << "A noise hase been made by an animal..." << std::endl;
}