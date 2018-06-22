/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 20:16:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/22 20:16:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon: public Victim {
public:
	Peon(std::string name);
	~Peon(void);
	Peon(Peon const &src);

	Peon	&operator=(Peon const &rhs);

	void	getPolymorphed(void) const;
};

#endif
