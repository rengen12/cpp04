/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 21:15:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/22 21:15:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"


int		main(void) {
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	return (0);
}
