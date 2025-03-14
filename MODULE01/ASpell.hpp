/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:42:46 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/12 19:16:52 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ASPELL_HPP
#define ASPELL_HPP

class ATarget;
class ASpell
{
    public :
    /*C&D*/
    ASpell(std::string name, std::string effect);
    virtual ~ASpell();
    ASpell(const ASpell &other);
    ASpell& operator=(const ASpell &other);
    
    const std::string& getName() const;
    const std::string& getEffect() const;
    virtual ASpell* clone() const = 0; 
    void launch(const ATarget &other) const;
    
    protected :
    
    std::string name;
    std::string effects;
    ASpell();
    
    private :
    
    
    /*Attributs*/
    /*methods*/
    
};

#endif

/*inally, add to your ASpell class a launch function that takes a reference to
constant ATarget.

This one will simply call the getHitBySpell of the passed object, passing the
current instance as parameter.*/