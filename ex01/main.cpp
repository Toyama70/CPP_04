/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:14:48 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/13 21:45:25 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main() 
{
	/*Animal *Lot[4];

	for(int i = 0; i < 2; i++)
		Lot[i] = new Dog();
	for (int i = 2; i < 4; i++)
		Lot[i] = new Cat();

	std::cout << std::endl << "DESTRUCTORS INCOMING" << std::endl << std::endl;

	for (int i = 0; i < 4; i++)
		delete Lot[i];
*/
/*	Dog basic;
	{	
		Dog tmp = basic;
	}

	std::cout << std::endl;
*/
	Cat simple;
	{	
		Cat dbl = simple;
	}

/* MAIN FOURNI *//*
	const Animal* j = new Dog(); 
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();

	delete j;//should not create a leak 
	delete i;

	//system("leaks a.out"); //No leaks :)
	return 0;*/
}