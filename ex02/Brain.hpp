/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:58:52 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/13 20:18:18 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>

class Brain {
	protected :
	std::string _ideas[100];

	public :
	Brain();
	virtual ~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& rhs);

	std::string getIdea(int n) const;
	void	setIdea(int n, std::string idea);
	void	setIdeas(std::string* ideas);

};


#endif