/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:38:32 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 14:16:56 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter!") {}

Polymorph::~Polymorph() {}

Polymorph::Polymorph(const Polymorph &other) : ASpell(other) {}

Polymorph& Polymorph::operator =(const Polymorph &other)
{
    if (this != &other)
    {
        name = other.name;
        effects = other.effects;
    }
    return (*this);
}

ASpell* Polymorph::clone() const 
{
    ASpell* clone;
    clone = new Polymorph();
    return(clone);
}