/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:36:00 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/12 18:29:02 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "ASpell.hpp"
#include "map"



/*C&C*/
Warlock::Warlock()
{
    std::cout << "Warlock default constructor called" << std::endl;
}

Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!" << std::endl;
    std::map<std::string, ASpell*>::iterator it = spellbook.begin();
    while (it != spellbook.end())
    {
        if (it->second != NULL)
        {
            delete(it->second);
        }
        it++;
        spellbook.erase(it);
    }
}

Warlock::Warlock(const Warlock &other) : name(other.name), title(other.title)
{
    std::cout << "Warlock copy constructor called" << std::endl;
}

Warlock &Warlock::operator=(const Warlock &other)
{
    std::cout <<"Animal Assignation operator called" << std::endl;
    if (this != &other) // check for auto assignation
    {
        this->name = other.name;
        this->title = other.title;
    }
    return (*this);
}


/*Methods*/

Warlock::Warlock(std::string name, std::string title) : name (name), title(title)
{
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}
const std::string& Warlock::getName() const 
{
    return (this->name);
}

const std::string& Warlock::getTitle() const
{
    return (this->title);
}

void Warlock::setTitle(const std::string title)
{
    this->title = title;
    return ;
}

void Warlock::introduce() const
{
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl; 
}


/*Vector :: Map, Methods*/

void Warlock::learnSpell(ASpell* spell)
{
    if (spell)
    {
        spellbook[spell->getName()] = spell->clone();
    }
}

void Warlock::forgetSpell(std::string spellname)
{
    std::map<std::string, ASpell*>::iterator it = spellbook.find(spellname);
    if (it != spellbook.end())
    {
        delete it->second;
        spellbook.erase(it);
    }
}

void Warlock::launchSpell(std::string spellname, ATarget &other)
{
    std::map<std::string, ASpell*>::iterator it = spellbook.find(spellname);
    if (it != spellbook.end())
    {
        it->second->launch(other);
    }
}
