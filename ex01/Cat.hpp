/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:41:48 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/13 21:41:37 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	protected:
	std::string type;
	
	public:
	Cat();
	virtual ~Cat();
	Cat(const Cat& other);
	Cat&	operator=(const Cat& rhs);
	Brain*	getBrain() const;

	virtual void	makeSound() const;
	
	private :
	Brain *catBrain;
};

#endif