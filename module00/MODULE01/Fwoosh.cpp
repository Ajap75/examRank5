/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:46:38 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/11 19:48:03 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "Fwooshed"){}

Fwoosh::~Fwoosh(){}

Fwoosh::Fwoosh(const Fwoosh& other) : ASpell(other) {}

Fwoosh& Fwoosh::operator=(const Fwoosh& other) 
{
    if (this != &other)
    {
        ASpell::operator=(other);
    }
    return (*this);
}

ASpell* Fwoosh::clone() const
{
    Fwoosh *clone;
    clone = new Fwoosh();
    return(clone);
}

