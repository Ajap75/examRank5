/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:50:01 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 14:06:28 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

class BrickWall : public ATarget

{
    public : 
    BrickWall();
    ~BrickWall();
    BrickWall(const BrickWall &other);
    BrickWall& operator =(const BrickWall &other);
    
    virtual ATarget* clone() const;
};

#endif
