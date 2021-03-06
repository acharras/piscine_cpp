/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:17:17 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 15:13:05 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    try
    {
        Bureaucrat test1("test1", 1);
        Bureaucrat test2("test2", 2);
        Bureaucrat test3("test3", 149);
        Bureaucrat test4("test4", 150);
        
        test2.incrementGrade();
        std::cout << "new grade test2 : " << test2.getGrade() << std::endl;
        test3.decrementGrade();
        std::cout << "new grade test3 : " << test3.getGrade() << std::endl;
        test1.incrementGrade();
        test4.decrementGrade();
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
}
