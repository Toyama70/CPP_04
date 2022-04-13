/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:15:19 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 18:15:32 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <string>
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor" << std::endl;
	setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(WrongCat const &rhs)
{
	this->setType(rhs.getType());
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "The cat is MEOOOOOOWING" << std::endl;
}