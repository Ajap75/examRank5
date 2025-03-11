/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:41:54 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/11 19:25:44 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


#ifndef ATarget_HPP
#define ATarget_HPP

class ASpell;
class ATarget
{
    public : 

    ATarget();
    ATarget(std::string type);
    virtual ~ATarget();
    ATarget(const ATarget &other);
    ATarget& operator =(const ATarget &other);
    
    const std::string &getType() const;
    void setType(std::string type);
    virtual ATarget* clone() const = 0;
    void getHitBySpell(const ASpell &other) const;

    protected : 
    
    std::string type;

};
#endif