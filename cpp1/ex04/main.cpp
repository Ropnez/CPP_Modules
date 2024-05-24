/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:13:16 by buryilma          #+#    #+#             */
/*   Updated: 2024/02/20 17:38:17 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceFile( std::string str,
                  std::string s1,
                  std::string s2,
                  std::string file_name ) {

    std::ofstream new_file(file_name + ".replace");
    size_t        pos = str.find(s1);
    while (pos != std::string::npos) {

        str.erase( pos, s1.length() );
        str.insert( pos, s2 );
        pos = str.find( s1, pos + s2.length() );
    }
    new_file << str;
    new_file.close();

}

int main(int argc, char **argv) {

    std::string str;
    char        c;

    if (argc != 4) {
        std::cout << "Usage: ./file <filename> <to_find> <replace>."
                  << std::endl;
        return (2);
    }

    std::ifstream file(argv[1]);
    if (file.fail()) {
        std::cout << "File doesnt exist or cannot open." << std::endl;
        return (2);
    }

    if (argv[2][0] == '\0' || argv[3][0] == '\0') {
        std::cout << "Empty string" << std::endl;
        return (2);
    }

    while (!file.eof() && file >> std::noskipws >> c)
        str += c;

    file.close();
    replaceFile(str, argv[2], argv[3], argv[1]);

    return (0);

}
