/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:22:15 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 18:22:15 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
	std::string type;
	
	public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat&	operator=(const WrongCat& rhs);

	void	makeSound() const;
};

#endif