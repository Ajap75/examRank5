/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:38:35 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 14:06:44 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

#ifndef POLYMORP_HPP
#define POLYMORPH_HPP

class Polymorph : public ASpell
{
    public : 
    
    Polymorph();
    ~Polymorph();
    Polymorph(const Polymorph &other);
    Polymorph& operator= (const Polymorph &other);

    virtual ASpell* clone() const ;
};

#endif 