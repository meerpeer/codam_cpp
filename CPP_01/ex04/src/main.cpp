#include <string>
#include <fstream>
#include <iostream>

std::string	copy_replaced_line(std::string line, std::string search, std::string replace) {
	int	start_position = 0;
	int	position = line.find(search, start_position);

	while (position != std::string::npos)
	{
		line.erase(position, search.length());
		line.insert(position, replace);
		start_position = position + replace.length();
		position = line.find(search, start_position);
	}
	return (line);
}

int	main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << "incorrect number of arguments" << std::endl;
		exit (1);
	}

	// open the file
	std::ifstream	file(argv[1]);
	if (!file) {
		std::cout << "couldn't open file" << std::endl;
		exit (1);
	}

	// create or open the fileCopy file to write in
	std::string addedFileName = ".replace";
	std::ofstream fileCopy(argv[1] + addedFileName);
	if (!fileCopy) {
		std::cout << "failed to create or open file copy" << std::endl;
		exit (1);
	}

	//read through the file and copy the lines with replaced words to fileCopy
	std::string	search = argv[2];
	std::string	replace = argv[3];
	std::string	readLine;
	while (getline(file, readLine)) {
		fileCopy << copy_replaced_line(readLine, search, replace);
		if (file.eof())
			break;
		fileCopy << std::endl;
	}
}