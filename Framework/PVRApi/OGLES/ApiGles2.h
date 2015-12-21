/*!*********************************************************************************************************************
\file         PVRApi\OGLES\ApiGles2.h
\author       PowerVR by Imagination, Developer Technology Team
\copyright    Copyright (c) Imagination Technologies Limited.
\brief         Contains function pointer declarations for all OpenGL ES 2 functions.
***********************************************************************************************************************/
#pragma once
#include "PVRApi/OGLES/OpenGLESHeaders.h"

typedef void (PVR_APIENTRY * PROC_ES2_glActiveTexture) (GLenum texture);
typedef void (PVR_APIENTRY * PROC_ES2_glAttachShader) (GLuint program, GLuint shader);
typedef void (PVR_APIENTRY * PROC_ES2_glBindAttribLocation) (GLuint program, GLuint index, const GLchar *name);
typedef void (PVR_APIENTRY * PROC_ES2_glBindBuffer) (GLenum target, GLuint buffer);
typedef void (PVR_APIENTRY * PROC_ES2_glBindFramebuffer) (GLenum target, GLuint framebuffer);
typedef void (PVR_APIENTRY * PROC_ES2_glBindRenderbuffer) (GLenum target, GLuint renderbuffer);
typedef void (PVR_APIENTRY * PROC_ES2_glBindTexture) (GLenum target, GLuint texture);
typedef void (PVR_APIENTRY * PROC_ES2_glBlendColor) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (PVR_APIENTRY * PROC_ES2_glBlendEquation) (GLenum mode);
typedef void (PVR_APIENTRY * PROC_ES2_glBlendEquationSeparate) (GLenum modeRGB, GLenum modeAlpha);
typedef void (PVR_APIENTRY * PROC_ES2_glBlendFunc) (GLenum sfactor, GLenum dfactor);
typedef void (PVR_APIENTRY * PROC_ES2_glBlendFuncSeparate) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (PVR_APIENTRY * PROC_ES2_glBufferData) (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
typedef void (PVR_APIENTRY * PROC_ES2_glBufferSubData) (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
typedef GLenum (PVR_APIENTRY * PROC_ES2_glCheckFramebufferStatus) (GLenum target);
typedef void (PVR_APIENTRY * PROC_ES2_glClear) (GLbitfield mask);
typedef void (PVR_APIENTRY * PROC_ES2_glClearColor) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (PVR_APIENTRY * PROC_ES2_glClearDepthf) (GLfloat d);
typedef void (PVR_APIENTRY * PROC_ES2_glClearStencil) (GLint s);
typedef void (PVR_APIENTRY * PROC_ES2_glColorMask) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (PVR_APIENTRY * PROC_ES2_glCompileShader) (GLuint shader);
typedef void (PVR_APIENTRY * PROC_ES2_glCompressedTexImage2D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (PVR_APIENTRY * PROC_ES2_glCompressedTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (PVR_APIENTRY * PROC_ES2_glCopyTexImage2D) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (PVR_APIENTRY * PROC_ES2_glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef GLuint (PVR_APIENTRY * PROC_ES2_glCreateProgram) (void);
typedef GLuint (PVR_APIENTRY * PROC_ES2_glCreateShader) (GLenum type);
typedef void (PVR_APIENTRY * PROC_ES2_glCullFace) (GLenum mode);
typedef void (PVR_APIENTRY * PROC_ES2_glDeleteBuffers) (GLsizei n, const GLuint *buffers);
typedef void (PVR_APIENTRY * PROC_ES2_glDeleteFramebuffers) (GLsizei n, const GLuint *framebuffers);
typedef void (PVR_APIENTRY * PROC_ES2_glDeleteProgram) (GLuint program);
typedef void (PVR_APIENTRY * PROC_ES2_glDeleteRenderbuffers) (GLsizei n, const GLuint *renderbuffers);
typedef void (PVR_APIENTRY * PROC_ES2_glDeleteShader) (GLuint shader);
typedef void (PVR_APIENTRY * PROC_ES2_glDeleteTextures) (GLsizei n, const GLuint *textures);
typedef void (PVR_APIENTRY * PROC_ES2_glDepthFunc) (GLenum func);
typedef void (PVR_APIENTRY * PROC_ES2_glDepthMask) (GLboolean flag);
typedef void (PVR_APIENTRY * PROC_ES2_glDepthRangef) (GLfloat n, GLfloat f);
typedef void (PVR_APIENTRY * PROC_ES2_glDetachShader) (GLuint program, GLuint shader);
typedef void (PVR_APIENTRY * PROC_ES2_glDisable) (GLenum cap);
typedef void (PVR_APIENTRY * PROC_ES2_glDisableVertexAttribArray) (GLuint index);
typedef void (PVR_APIENTRY * PROC_ES2_glDrawArrays) (GLenum mode, GLint first, GLsizei count);
typedef void (PVR_APIENTRY * PROC_ES2_glDrawElements) (GLenum mode, GLsizei count, GLenum type, const void *indices);
typedef void (PVR_APIENTRY * PROC_ES2_glEnable) (GLenum cap);
typedef void (PVR_APIENTRY * PROC_ES2_glEnableVertexAttribArray) (GLuint index);
typedef void (PVR_APIENTRY * PROC_ES2_glFinish) (void);
typedef void (PVR_APIENTRY * PROC_ES2_glFlush) (void);
typedef void (PVR_APIENTRY * PROC_ES2_glFramebufferRenderbuffer) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (PVR_APIENTRY * PROC_ES2_glFramebufferTexture2D) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (PVR_APIENTRY * PROC_ES2_glFrontFace) (GLenum mode);
typedef void (PVR_APIENTRY * PROC_ES2_glGenBuffers) (GLsizei n, GLuint *buffers);
typedef void (PVR_APIENTRY * PROC_ES2_glGenerateMipmap) (GLenum target);
typedef void (PVR_APIENTRY * PROC_ES2_glGenFramebuffers) (GLsizei n, GLuint *framebuffers);
typedef void (PVR_APIENTRY * PROC_ES2_glGenRenderbuffers) (GLsizei n, GLuint *renderbuffers);
typedef void (PVR_APIENTRY * PROC_ES2_glGenTextures) (GLsizei n, GLuint *textures);
typedef void (PVR_APIENTRY * PROC_ES2_glGetActiveAttrib) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (PVR_APIENTRY * PROC_ES2_glGetActiveUniform) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (PVR_APIENTRY * PROC_ES2_glGetAttachedShaders) (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
typedef GLint (PVR_APIENTRY * PROC_ES2_glGetAttribLocation) (GLuint program, const GLchar *name);
typedef void (PVR_APIENTRY * PROC_ES2_glGetBooleanv) (GLenum pname, GLboolean *data);
typedef void (PVR_APIENTRY * PROC_ES2_glGetBufferParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef GLenum (PVR_APIENTRY * PROC_ES2_glGetError) (void);
typedef void (PVR_APIENTRY * PROC_ES2_glGetFloatv) (GLenum pname, GLfloat *data);
typedef void (PVR_APIENTRY * PROC_ES2_glGetFramebufferAttachmentParameteriv) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void (PVR_APIENTRY * PROC_ES2_glGetIntegerv) (GLenum pname, GLint *data);
typedef void (PVR_APIENTRY * PROC_ES2_glGetProgramiv) (GLuint program, GLenum pname, GLint *params);
typedef void (PVR_APIENTRY * PROC_ES2_glGetProgramInfoLog) (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (PVR_APIENTRY * PROC_ES2_glGetRenderbufferParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef void (PVR_APIENTRY * PROC_ES2_glGetShaderiv) (GLuint shader, GLenum pname, GLint *params);
typedef void (PVR_APIENTRY * PROC_ES2_glGetShaderInfoLog) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (PVR_APIENTRY * PROC_ES2_glGetShaderPrecisionFormat) (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
typedef void (PVR_APIENTRY * PROC_ES2_glGetShaderSource) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
typedef const GLubyte *(PVR_APIENTRY * PROC_ES2_glGetString) (GLenum name);
typedef void (PVR_APIENTRY * PROC_ES2_glGetTexParameterfv) (GLenum target, GLenum pname, GLfloat *params);
typedef void (PVR_APIENTRY * PROC_ES2_glGetTexParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef void (PVR_APIENTRY * PROC_ES2_glGetUniformfv) (GLuint program, GLint location, GLfloat *params);
typedef void (PVR_APIENTRY * PROC_ES2_glGetUniformiv) (GLuint program, GLint location, GLint *params);
typedef GLint (PVR_APIENTRY * PROC_ES2_glGetUniformLocation) (GLuint program, const GLchar *name);
typedef void (PVR_APIENTRY * PROC_ES2_glGetVertexAttribfv) (GLuint index, GLenum pname, GLfloat *params);
typedef void (PVR_APIENTRY * PROC_ES2_glGetVertexAttribiv) (GLuint index, GLenum pname, GLint *params);
typedef void (PVR_APIENTRY * PROC_ES2_glGetVertexAttribPointerv) (GLuint index, GLenum pname, void **pointer);
typedef void (PVR_APIENTRY * PROC_ES2_glHint) (GLenum target, GLenum mode);
typedef GLboolean (PVR_APIENTRY * PROC_ES2_glIsBuffer) (GLuint buffer);
typedef GLboolean (PVR_APIENTRY * PROC_ES2_glIsEnabled) (GLenum cap);
typedef GLboolean (PVR_APIENTRY * PROC_ES2_glIsFramebuffer) (GLuint framebuffer);
typedef GLboolean (PVR_APIENTRY * PROC_ES2_glIsProgram) (GLuint program);
typedef GLboolean (PVR_APIENTRY * PROC_ES2_glIsRenderbuffer) (GLuint renderbuffer);
typedef GLboolean (PVR_APIENTRY * PROC_ES2_glIsShader) (GLuint shader);
typedef GLboolean (PVR_APIENTRY * PROC_ES2_glIsTexture) (GLuint texture);
typedef void (PVR_APIENTRY * PROC_ES2_glLineWidth) (GLfloat width);
typedef void (PVR_APIENTRY * PROC_ES2_glLinkProgram) (GLuint program);
typedef void (PVR_APIENTRY * PROC_ES2_glPixelStorei) (GLenum pname, GLint param);
typedef void (PVR_APIENTRY * PROC_ES2_glPolygonOffset) (GLfloat factor, GLfloat units);
typedef void (PVR_APIENTRY * PROC_ES2_glReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
typedef void (PVR_APIENTRY * PROC_ES2_glReleaseShaderCompiler) (void);
typedef void (PVR_APIENTRY * PROC_ES2_glRenderbufferStorage) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (PVR_APIENTRY * PROC_ES2_glSampleCoverage) (GLfloat value, GLboolean invert);
typedef void (PVR_APIENTRY * PROC_ES2_glScissor) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (PVR_APIENTRY * PROC_ES2_glShaderBinary) (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
typedef void (PVR_APIENTRY * PROC_ES2_glShaderSource) (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
typedef void (PVR_APIENTRY * PROC_ES2_glStencilFunc) (GLenum func, GLint ref, GLuint mask);
typedef void (PVR_APIENTRY * PROC_ES2_glStencilFuncSeparate) (GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (PVR_APIENTRY * PROC_ES2_glStencilMask) (GLuint mask);
typedef void (PVR_APIENTRY * PROC_ES2_glStencilMaskSeparate) (GLenum face, GLuint mask);
typedef void (PVR_APIENTRY * PROC_ES2_glStencilOp) (GLenum fail, GLenum zfail, GLenum zpass);
typedef void (PVR_APIENTRY * PROC_ES2_glStencilOpSeparate) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (PVR_APIENTRY * PROC_ES2_glTexImage2D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (PVR_APIENTRY * PROC_ES2_glTexParameterf) (GLenum target, GLenum pname, GLfloat param);
typedef void (PVR_APIENTRY * PROC_ES2_glTexParameterfv) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (PVR_APIENTRY * PROC_ES2_glTexParameteri) (GLenum target, GLenum pname, GLint param);
typedef void (PVR_APIENTRY * PROC_ES2_glTexParameteriv) (GLenum target, GLenum pname, const GLint *params);
typedef void (PVR_APIENTRY * PROC_ES2_glTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform1f) (GLint location, GLfloat v0);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform1fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform1i) (GLint location, GLint v0);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform1iv) (GLint location, GLsizei count, const GLint *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform2f) (GLint location, GLfloat v0, GLfloat v1);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform2fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform2i) (GLint location, GLint v0, GLint v1);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform2iv) (GLint location, GLsizei count, const GLint *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform3f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform3fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform3i) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform3iv) (GLint location, GLsizei count, const GLint *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform4f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform4fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform4i) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (PVR_APIENTRY * PROC_ES2_glUniform4iv) (GLint location, GLsizei count, const GLint *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniformMatrix2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniformMatrix3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUniformMatrix4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (PVR_APIENTRY * PROC_ES2_glUseProgram) (GLuint program);
typedef void (PVR_APIENTRY * PROC_ES2_glValidateProgram) (GLuint program);
typedef void (PVR_APIENTRY * PROC_ES2_glVertexAttrib1f) (GLuint index, GLfloat x);
typedef void (PVR_APIENTRY * PROC_ES2_glVertexAttrib1fv) (GLuint index, const GLfloat *v);
typedef void (PVR_APIENTRY * PROC_ES2_glVertexAttrib2f) (GLuint index, GLfloat x, GLfloat y);
typedef void (PVR_APIENTRY * PROC_ES2_glVertexAttrib2fv) (GLuint index, const GLfloat *v);
typedef void (PVR_APIENTRY * PROC_ES2_glVertexAttrib3f) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (PVR_APIENTRY * PROC_ES2_glVertexAttrib3fv) (GLuint index, const GLfloat *v);
typedef void (PVR_APIENTRY * PROC_ES2_glVertexAttrib4f) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (PVR_APIENTRY * PROC_ES2_glVertexAttrib4fv) (GLuint index, const GLfloat *v);
typedef void (PVR_APIENTRY * PROC_ES2_glVertexAttribPointer) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
typedef void (PVR_APIENTRY * PROC_ES2_glViewport) (GLint x, GLint y, GLsizei width, GLsizei height);