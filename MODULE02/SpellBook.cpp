/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:22:36 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 14:12:03 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell*>::iterator it = book.begin();
    while (it != book.end())
    {
        if (it->second != NULL)
            delete(it->second);
        ++it;
    }
    book.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
    {
        book[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(std::string const &spell)
{
    std::map<std::string, ASpell *>::iterator it = book.find(spell);
    if (it != book.end())
    {
        delete (it->second);
        book.erase(it->first);
    }
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
    ASpell* newSpell;
    newSpell = NULL;
    std::map<std::string, ASpell*>::iterator it = book.find(spell);
    if (it->second != NULL)     
    {
        newSpell = it->second->clone();
    }
    return (newSpell);
    
}
