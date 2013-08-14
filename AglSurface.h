// Copyright (c) 2013 Philip M. Hubbard
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// http://opensource.org/licenses/MIT

//
//  AglSurface.h
//

#ifndef __AglSurface__
#define __AglSurface__

#include <OpenGL/gl3.h>
#include <memory>

namespace Agl
{
    class ShaderProgram;
    
    class Surface
    {
    public:
        Surface();
        virtual ~Surface();
        
        void            setVertexArrayObject(GLuint vao, ShaderProgram*);
        GLuint          vertexArrayObject(ShaderProgram*) const;
        
        void            buildElementBufferObject();
        GLuint          elementBufferObject() const;
        
        virtual GLsizei elementsSize() const = 0;
        virtual GLenum  primitiveMode() const = 0;
        
        void            drawElementBuffer(ShaderProgram*);
        
    protected:
        virtual GLuint* elements() const = 0;
        
        GLuint          elementRestart() const;
        
    private:
        class Imp;
        std::unique_ptr<Imp> _m;
        
        // Instances cannot be copied, because copies would share OpenGL resource
        // that would get released when one instance is deleted.
    };

}

#endif