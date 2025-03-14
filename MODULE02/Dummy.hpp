/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:12:41 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/12 18:34:18 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

#ifndef DUMMY_HPP
#define DUMMY_HPP


class Dummy : public ATarget
{
    /*C&D*/
    public :

    Dummy();
    ~Dummy();
    Dummy(const Dummy &other);
    Dummy& operator =(const Dummy &other);

    virtual ATarget* clone() const;
    
};

#endif