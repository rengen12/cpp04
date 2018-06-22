/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 21:14:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/22 21:14:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
private:
	std::string		_name;
	int				_apcost;
	int				_damage;

	AWeapon(std::string const &name, int apcost, int damage);
	~AWeapon(void);
	AWeapon(AWeapon const &src);

public:
	AWeapon				&operator=(AWeapon const &rhs);

	std::string	const	&getName(void) const;
	int					getAPCost() const;
	int					getDamage() const;

	virtual void		attack() const = 0;
};

#endif
