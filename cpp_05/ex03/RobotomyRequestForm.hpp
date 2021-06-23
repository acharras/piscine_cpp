/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:15:16 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 16:55:31 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>

#include "Form.hpp"
#include <time.h>

class RobotomyRequestForm : public Form
{
	private :
		std::string const Target;
        RobotomyRequestForm();


	public:
        RobotomyRequestForm(std::string const& target);
        RobotomyRequestForm(const RobotomyRequestForm & cpy);
		virtual ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm & cpy);
		
        void    execute(Bureaucrat const& executor) const;
};

#endif