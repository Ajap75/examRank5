/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:36:00 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/11 16:18:07 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

/*C&C*/
Warlock::Warlock()
{
    std::cout << "Warlock default constructor called" << std::endl;
}

Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!" << std::endl;
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