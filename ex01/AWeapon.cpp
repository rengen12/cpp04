/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 21:14:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/22 21:14:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name),
		_apcost(apcost), _damage(damage) {}

AWeapon::AWeapon(AWeapon const &src) {
	*this = src;
}

AWeapon::~AWeapon(void) {}


AWeapon				&AWeapon::operator=(AWeapon const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
	}
	return (*this);
}

std::string	const	&AWeapon::getName(void) const {
	return (this->_name);
}

int					AWeapon::getAPCost(void) const {
	return (this->_apcost);
}

int					AWeapon::getDamage(void) const {
	return (this->_damage);
}
