/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:16:07 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/14 13:02:27 by ybestrio         ###   ########.fr       */
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
	virtual void	makeSound() const = 0;
} ;



#endif