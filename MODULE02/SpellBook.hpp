/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:22:40 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 14:08:37 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <map>

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP


class ASpell;
class ATarget;
class SpellBook
{
    public :
    
    SpellBook();
    ~SpellBook();
    
    void learnSpell(ASpell* spell);
    void forgetSpell(std::string const &spell);
    ASpell* createSpell(std::string const &spell);

    std::map<std::string, ASpell*> book;

    
    
    private :

    SpellBook(const SpellBook &other);
    SpellBook& operator= (const SpellBook &other);
    
};

#endif