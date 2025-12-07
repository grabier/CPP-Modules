/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:41:13 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/09 20:26:57 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++){
		minventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource & other){
	*this = other;
}

MateriaSource::~MateriaSource(){
	for (int i = 0;  i < 4; i++){
		if (minventory[i] != NULL){
			std::cout << "delete materia source" << std::endl;
			delete minventory[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource & other){
	for (int i = 0; i < 4; i++){
		if (minventory[i] != NULL)
			this->setInventoryM(other.getInventoryM(i), i);
		else
			this->minventory[i] = NULL;
	}
	return *this;
}

void MateriaSource::setInventoryM(AMateria *m, int i){
	if (i >= 0 && i < 4){
		if (minventory[i] != NULL)
			delete minventory[i];
		minventory[i] = m->clone();
		delete m;
	}
	else
		std::cout << "setInventoryM: slot not valid" << std::endl;
}

AMateria *MateriaSource::getInventoryM(int i) const{
	if (i >= 0 && i < 4)
		return (minventory[i]);
	std::cout << "getInventoryM: slot not valid" << std::endl;
	return (NULL);
}

void MateriaSource::learnMateria(AMateria *m){
	for (int i = 0; i < 4; i++){
		if (minventory[i] == NULL){
			//std::cout << "m type: " << m->getType() << std::endl;
			setInventoryM(m, i);
			//std::cout << "inventary type: " << minventory[i]->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Minventory full" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &t){
	for(int i = 0; i < 4; i++){
		//std::cout << "inventary type: " << minventory[i]->getType() << std::endl;
		if(minventory[i] != NULL && t == minventory[i]->getType()){
			//std::cout << "type create: " << t << std::endl;
			return (minventory[i]->clone());
		}
	}
	std::cout << "Materia type doesnt match any in minventory" << std::endl;
	return (0);
}