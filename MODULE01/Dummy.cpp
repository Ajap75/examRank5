/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:12:54 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/12 17:11:37 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget()
{   
}

Dummy::~Dummy(){}

Dummy::Dummy(const Dummy &other) : ATarget(other)
{}

Dummy& Dummy::operator =(const Dummy &other)
{
    if (this != &other)
    {
        ATarget::operator=(other);
    }
    return(*this);
}

ATarget* Dummy::clone() const
{
    ATarget *clone;
    clone = new Dummy();
    return (clone);
}

