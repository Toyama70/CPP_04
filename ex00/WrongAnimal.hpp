/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:23:58 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 18:23:58 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
	std::string type;
	
	public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	WrongAnimal&	operator=(const WrongAnimal& rhs);

	std::string	getType() const;
	void	setType(std::string type);
	void	makeSound() const;
} ;



#endif