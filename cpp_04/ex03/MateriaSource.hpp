/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:16:08 by acharras          #+#    #+#             */
/*   Updated: 2021/06/10 14:28:45 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP
#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copy);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource& str);
        
        virtual void learnMateria(AMateria* learn);
        virtual AMateria* createMateria(std::string const& type);

    private:
        AMateria *learned[4];
        int _size;
};

#endif