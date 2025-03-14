/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:50:04 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 11:10:09 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"


BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::~BrickWall(){}

BrickWall::BrickWall(const BrickWall &other) : ATarget(other) {}

BrickWall& BrickWall::operator =(const BrickWall &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

ATarget* BrickWall::clone() const
{
    ATarget* clone;

    clone = new BrickWall();
    return (clone);
}
 

