/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:46:40 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/12 19:17:09 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

#ifndef FWOOSH_HPP
#define FWOOSH_HPP

class Fwoosh : public ASpell
{
    public :
    
    Fwoosh();
    ~Fwoosh();
    Fwoosh(const Fwoosh &other);
    Fwoosh& operator=(const Fwoosh &other);
    virtual ASpell* clone() const;
};

#endif