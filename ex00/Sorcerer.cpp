/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 20:15:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/22 20:15:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(
		name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born !";
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title
			  << ", is dead. Consequences will never be the same !";
}

Sorcerer::Sorcerer(Sorcerer const &src) {
	*this = src;
	std::cout << this->_name << ", " << this->_title
			  << ", is born !" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, Sorcerer const &rhs) {
	os << "I am " << rhs.getName() << ", " << rhs.getTitle()
	   << ", and I like ponies !" << std::endl;
	return (os);
}

Sorcerer			&Sorcerer::operator=(Sorcerer const	&rhs) {
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return (*this);
}

const std::string &Sorcerer::getName() const {
	return _name;
}

const std::string &Sorcerer::getTitle() const {
	return _title;
}

void				Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}
