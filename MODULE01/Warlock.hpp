/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:36:52 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/12 18:29:32 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "string"
#include <map>

#ifndef WARLOCH_HPP
#define WARLOCH_HPP



class ASpell;
class ATarget;
class Warlock
{
    /*C&D*/
    public :
    
    Warlock(std::string name, std::string title);
    ~Warlock();
    
    /*methods*/
    
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string title);
    void introduce() const;
    void learnSpell(ASpell *spell);
    void forgetSpell(std::string spellname);
    void launchSpell(std::string spellname, ATarget &other);
    
    
    private :
    /*attribut */ 
    
    std::map<std::string, ASpell*> spellbook;
    std::string name;
    std::string title;
    /*C&D : our Warlock
    will not be able to be copied, instantiated by copy, or instantiated without a
    name and a title.*/ 
    Warlock();
    Warlock(const Warlock &other);
    Warlock &operator=(const Warlock &other);
    
};

#endif

/*
Position de const	Signification
Avant le type de retour	La valeur retournée est constante
Après les parenthèses	La fonction ne modifie pas l'objet (this est const)
Dans les paramètres	Empêche la modification du paramètre passé en argument
*/