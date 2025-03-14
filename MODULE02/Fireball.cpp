/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:25:41 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 14:17:06 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp!") {}

Fireball::~Fireball(){}

Fireball::Fireball(const Fireball &other) : ASpell(other) {}

Fireball& Fireball::operator =(const Fireball &other)
{
    if (this != &other)
    {
        name = other.name;
        effects = other.effects;
    }
    return (*this);
}

ASpell* Fireball::clone() const
{
    ASpell* clone;
    clone = new Fireball();
    return (clone);
}


