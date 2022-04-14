/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:09:15 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/14 13:01:57 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been implemented" << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain has been erased" << std::endl;
	return;	
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy has been deeply implemented" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& rhs)
{
	if (rhs.getIdea(0)[0] == '\0')
		return *this;
	else
	{
		for (int i = 0; i < 100; i++)
			this->setIdea( i ,rhs.getIdea(i));
	}
	//this->setIdeas(rhs.getIdea());
	return *this;
}

std::string Brain::getIdea(int n) const
{
	return (_ideas[n]);
}

void Brain::setIdea(int n, std::string idea)
{
	this->_ideas[n] = idea;
}

void Brain::setIdeas(std::string* ideas)
{
	for (int i = 0; i < 100 ; i++)
	{
		this->setIdea(i, getIdea(i));
	}
	(void)(ideas);
}
