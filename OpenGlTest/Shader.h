#ifndef Shader_h
#define Shader_h

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#ifdef __APPLE__
	#include <OpenGL/gl3.h>
#elif _WIN32
	#include <GL/glew.h>
#endif

class Shader
{
public:
	// the program ID
	unsigned int ID;

	// constructor reads and builds the shader
	Shader(const char* vertexPath, const char* fragmentPath);
	// use/activate the shader
	void use();
	// utility uniform functions
	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string &name, float value) const;
private:
	void checkCompileErrors(unsigned int shader, std::string type);
};

#endif
