/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:16:07 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/13 21:08:29 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
	std::string type;
	
	public:
	Animal();
	virtual ~Animal();
	Animal(const Animal&);
	Animal&	operator=(const Animal& rhs);

	std::string	getType() const;
	void	setType(std::string type);
	virtual void	makeSound() const;
} ;



#endif