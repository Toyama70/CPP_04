/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:37:22 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/13 21:14:30 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	protected:
	std::string type;
	
	public:
	Dog();
	virtual ~Dog();
	Dog(const Dog&);
	Dog&	operator=(const Dog& rhs);
	Brain*	getBrain() const;

	virtual void	makeSound() const;

	private :
	Brain *dogBrain;
};

#endif