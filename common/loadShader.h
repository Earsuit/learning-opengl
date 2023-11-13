#ifndef COMMON_LOAD_SHADER_H
#define COMMON_LOAD_SHADER_H

// Include GLEW. Always include it before gl.h and glfw3.h, since it's a bit magic.
#include <GL/glew.h>

GLuint loadShaders(const char * vertex_file_path,const char * fragment_file_path);

#endif
