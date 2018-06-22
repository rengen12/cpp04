/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 20:16:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/22 20:16:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name) {
	std::cout << "Some random victim called " << this->_name
			  << " just popped !" << std::endl;
}

Victim::Victim(Victim const &src) {
	*this = src;
	std::cout << "Some random victim called " << this->_name
			  << " just popped !" << std::endl;
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name
			  << " just died for no apparent reason !" << std::endl;
}

Victim				&Victim::operator=(Victim const	&rhs) {
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

std::ostream		&operator<<(std::ostream &os, Victim const &rhs) {
	os << "I'm " << rhs.getName() << " and i like otters !" << std::endl;
	return (os);
}

void				Victim::getPolymorphed(void) const {
	std::cout << this->_name
			  << " has been turned into a cute little sheep !" << std::endl;
}

const std::string &Victim::getName() const {
	return _name;
}