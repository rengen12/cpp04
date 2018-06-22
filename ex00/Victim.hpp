/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 20:16:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/22 20:16:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {

public:
	Victim(std::string name);
	Victim(Victim const &src);
	~Victim(void);

	Victim				&operator=(Victim const &rhs);

	virtual void		getPolymorphed(void) const;

	const std::string	&getName() const;

protected:
	std::string _name;

};

std::ostream			&operator<<(std::ostream &os, Victim const &rhs);

#endif
