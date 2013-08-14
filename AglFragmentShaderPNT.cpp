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
//  AglShader.cpp
//

#include "AglFragmentShaderPNT.h"

namespace Agl
{
        
    FragmentShaderPNT::FragmentShaderPNT(const std::string& text)
        : Shader(GL_FRAGMENT_SHADER, text)
    {
    }
    
    FragmentShaderPNT::~FragmentShaderPNT()
    {
    }
    
    void FragmentShaderPNT::surfaceAdded(SurfacePNT*)
    {
    }
    
    void FragmentShaderPNT::postLink()
    {
    }
    
    void FragmentShaderPNT::postLink(SurfacePNT*)
    {
    }
    
    void FragmentShaderPNT::preDraw()
    {
    }
    
    void FragmentShaderPNT::preDraw(SurfacePNT* surface)
    {
    }
    
    void FragmentShaderPNT::postDraw()
    {
    }

}


