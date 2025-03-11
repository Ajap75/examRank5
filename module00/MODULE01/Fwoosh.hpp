/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:46:40 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/11 19:32:07 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    public :
    
    Fwoosh();
    ~Fwoosh();
    Fwoosh(const Fwoosh &other);
    Fwoosh& operator=(const Fwoosh &other);
    virtual ASpell* clone() const;
};