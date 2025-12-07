/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:45:41 by gmontoro          #+#    #+#             */
/*   Updated: 2025/10/06 18:25:35 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MuntantStack.hpp"
#include <list>
int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
		//return(0);
	}

	{
		std::list<int> mstack;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << mstack.front() << std::endl;
		mstack.pop_front();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(34);
		mstack.push_back(51);
		mstack.push_back(731);
		mstack.push_back(308);
		mstack.push_back(566);
		mstack.push_back(884);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		//std::stack<int> s(mstack);
		return(0);
	}
}