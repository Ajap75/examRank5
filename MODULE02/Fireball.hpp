/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:25:43 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 10:27:52 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ASpell.hpp"

#ifndef FIREBALL_HPP
#define FIREBALL_HPP


class Fireball : public ASpell
{
    /*C&D*/
    public :

    Fireball();
    ~Fireball();
    Fireball(const Fireball &other);
    Fireball& operator =(const Fireball &other);

    virtual ASpell* clone() const;
    
};

#endif