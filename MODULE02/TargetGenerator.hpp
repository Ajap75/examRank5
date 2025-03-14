/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:36:43 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/14 13:50:17 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ATarget.hpp"
#include "map"

#ifndef TARGETGENERATOR_HPP 
#define TARGETGENERATOR_HPP


class TargetGenerator
{
    public :
    
    TargetGenerator();
    ~TargetGenerator();


    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &);
    ATarget* createTarget(std::string const &);

    std::map<std::string, ATarget*> targetbook;

    private :
    
    TargetGenerator(const TargetGenerator &other);
    TargetGenerator& operator = (const TargetGenerator &other) const;
    
};

#endif 