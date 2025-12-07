/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:37:50 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/09 20:46:56 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "floor.hpp"

void ft_add_to_floor(t_floor **floor, AMateria *n){
	//t_floor *nfloor = new t_floor;
	//t_floor *head = floor;
	if (!(*floor)){
		*floor = new t_floor;
		(*floor)->node = n;
		(*floor)->next = NULL;
		
	}
	else{
		t_floor *head = (*floor);
		t_floor *nfloor = new t_floor;
		while ((*floor)->next)
			(*floor) = (*floor)->next;
		(*floor)->next = nfloor;
		nfloor->node = n;
		nfloor->next = NULL;
		(*floor) = head;
	}
	/* if (floor == NULL)
		std::cout << "ADDTOFLOOR: floor is NULL\n"; */
	//floor = head;
}


void ft_delete_floor(t_floor **floor){
	t_floor *aux;

	//std::cout << "type in floor: " << floor->node->getType() << std::endl;
	//aux = floor->next;
	while (*floor){
		std::cout << "deleted materia from floor\n";
		aux = (*floor)->next;
		delete (*floor)->node;
		delete (*floor);
		(*floor) = aux;
	}
	delete(floor);
}