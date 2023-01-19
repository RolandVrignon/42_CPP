/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:49:43 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 17:24:12 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Global.hpp"

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain {
    public:
        Brain();
        Brain(Brain const &other);
        Brain(Brain *other);
        Brain &operator=(Brain const &other);
        ~Brain();
        std::string getIdea(int nb) const;
        void setIdea(std::string idea, int nb);
        
    private :
        std::string _ideas[100];
};

#endif