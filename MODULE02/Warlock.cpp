/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:36:00 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 13:35:57 by anastruc         ###   ########.fr       */
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
    std::map<std::string, ASpell*>::iterator it = book.book.begin();
    while (it != book.book.end())
    {
        if (it->second != NULL)
        {
            delete(it->second);
        }
        std::map<std::string, ASpell*>::iterator toerase = it;
        ++it;
        book.book.erase(toerase);
    }
}

Warlock::Warlock(const Warlock &other) : name(other.name), title(other.title)
{
    std::cout << "Warlock copy constructor called" << std::endl;
}

Warlock &Warlock::operator=(const Warlock &other)
{
    std::cout <<"Warlock Assignation operator called" << std::endl;
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
    book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellname)
{
    book.forgetSpell(spellname);
}

void Warlock::launchSpell(std::string spellname, ATarget &other)
{
    std::map<std::string, ASpell*>::iterator it = book.book.find(spellname);
    if (it != book.book.end())
    {
        it->second->launch(other);
    }
    else
    {
        learnSpell(book.createSpell(spellname));
        launchSpell(spellname, other);
    }
}
