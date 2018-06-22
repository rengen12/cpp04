/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 20:16:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/22 20:16:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src): Victim(src) {
	*this = src;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=(Peon const	&rhs) {
	if (this != &rhs)
		Victim::operator=(rhs);
	return (*this);
}

void	Peon::getPolymorphed(void) const {
	std::cout << this->_name
			  << " has been turned into a pink pony !" << std::endl;
}
