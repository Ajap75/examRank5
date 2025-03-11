/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:41:56 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/11 19:25:15 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() : type("Unknown"){}

ATarget::ATarget(std::string type) : type(type){}

ATarget::~ATarget(){}

ATarget::ATarget(const ATarget &other) : type(other.type) {}

ATarget &ATarget::operator =(const ATarget &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

const std::string &ATarget::getType() const
{
    return (this->type);
}

void ATarget::setType (std::string type)
{
    this->type = type;
}

void ATarget::getHitBySpell(const ASpell &other) const
{
    std::cout << this->getType() << " has been " << other.getEffect() << std::endl;
}