/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:42:35 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/11 19:52:29 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ATarget.hpp"
#include "ASpell.hpp"

ASpell::ASpell(){}


ASpell::~ASpell(){}

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects)
{}


ASpell::ASpell(const ASpell &other) : name(other.name), effects(other.effects)
{}

ASpell &ASpell::operator=(const ASpell &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->effects = other.effects;
    }
    return (*this);
}

/*methods*/

const std::string& ASpell::getName() const
{
    std::cout << this->name << std::endl;
    return (this->name);
}
const std::string& ASpell::getEffect() const
{
    std::cout << this->effects << std::endl;
    return (this->effects);
}

void ASpell::launch(const ATarget &other) const
{
    other.getHitBySpell(*this);
}

