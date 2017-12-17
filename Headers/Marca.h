#ifndef MARCA_H_
#define MARCA_H_

#include <string>


class Marca {
private:
	const std::string nomeMarca;
public:
	Marca(const std::string & nomeMarca);
	~Marca();

	std::string getNomeMarca() const;
};


#endif /* MARCA_H_ */
