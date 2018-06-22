/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 20:15:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/22 20:15:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:
	Sorcerer(const std::string &_name, const std::string &_title);
	~Sorcerer();
	Sorcerer(Sorcerer const &src);

	const std::string	&getName() const;
	const std::string	&getTitle() const;
	Sorcerer			&operator=(Sorcerer const &rhs);

	void				polymorph(Victim const &victim) const;

private:
	std::string _name;
	std::string _title;
};

std::ostream			&operator<<(std::ostream &os, Sorcerer const &rhs);

#endif
