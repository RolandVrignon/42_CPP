/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:22:31 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/31 16:11:18 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T> {
    public : 
        MutantStack();
        MutantStack(MutantStack const &other);
        ~MutantStack();
        
        MutantStack &operator=(MutantStack const &other);
        T &operator[](const unsigned int &index);

        typedef typename std::deque<T>::iterator iterator;
        iterator begin() {
            return (this->c.begin());
        }
        iterator end() {
            return (this->c.end());
        }
};

#endif