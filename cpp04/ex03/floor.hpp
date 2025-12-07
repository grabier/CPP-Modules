/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:38:43 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/09 20:47:01 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
class AMateria;

typedef struct s_floor{
	AMateria *node;
	struct s_floor *next;
}			t_floor;


void ft_add_to_floor(t_floor **floor, AMateria *n);
void ft_delete_floor(t_floor **floor);