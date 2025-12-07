/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:09:02 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/27 21:55:47 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	ft_file_access(char *file){
	std::fstream _file(file, std::ios::in | std::ios::out);
	return (_file.good());
}

void	ft_search_and_replace(std::string line, std::ofstream &outfile, char *argv[]){
	int start =  0;
	while (line.find(argv[2]) != std::string::npos){
		start = line.find(argv[2]);
		std::string s1 = argv[2];
		line.erase(start, s1.length());
		line.insert(start, argv[3]);
		if (line.find(argv[2]) == std::string::npos)
			outfile << line << std::endl;
	}
}

int main(int argc, char *argv[]){
	std::string s1(argv[1]);
	std::string s2(argv[2]);
	std::string outfile_name = s1 + ".replace";
	std::remove(outfile_name.c_str());
	if (argc != 4){
		std::cerr << "invalid number of arguments " << std::endl;
		return (1);
	}
	if (ft_file_access(argv[1]) != 1){
		std::cerr << "no permission" << std::endl;
		return (1);
	}
	if (s1.empty() || s2.empty()){
		std::cerr << "invalid strings" << std::endl;
		return (1);
	}
	std::ifstream infile(argv[1]);
	std::ofstream outfile(outfile_name.c_str(), std::ios::app);
	std::string line;
	while (std::getline(infile, line)){
		//std::cout << "line: " << line << std::endl;
		if (line.find(argv[2]) == std::string::npos)
			outfile << line << std::endl;
		else
			ft_search_and_replace(line, outfile, argv);
	}	
}