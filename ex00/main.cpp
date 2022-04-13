/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:14:48 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 19:18:24 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
const Animal* meta = new Animal(); 
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl; 
std::cout << i->getType() << " " << std::endl; 
i->makeSound(); //will output the cat sound! 
j->makeSound();
meta->makeSound();

//added tests
/*const WrongAnimal* f = new WrongAnimal();
const WrongAnimal* g = new WrongCat();

f->makeSound();
g->makeSound();
*/
	delete meta;
	delete j;
	delete i;
/*	delete f;
	delete g;*/
}