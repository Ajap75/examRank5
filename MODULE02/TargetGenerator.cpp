/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:36:41 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 14:02:39 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() 
{
    std::map<std::string, ATarget *>::iterator it = targetbook.begin();
    while (it != targetbook.end())
    {
        if (it->second !=NULL)
            delete (it->second);
        ++it;
    }
    targetbook.clear();
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    targetbook[target->getType()] = target->clone(); 
}


void TargetGenerator::forgetTargetType(std::string const &target) 
{
    std::map<std::string, ATarget *>::iterator it = targetbook.find(target);
    if (it != targetbook.end())
    {
        delete(it->second);
        targetbook.erase(it->first);
    }
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
    ATarget *newTarget;
    std::map<std::string, ATarget *>::iterator it = targetbook.find(target);
    if (it != targetbook.end())
    {
        return(newTarget = it->second->clone());
    }
    else 
        return(NULL);
}