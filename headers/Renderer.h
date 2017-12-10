#ifndef RENDERER_H
#define RENDERER_H

#include "stdafx.h"
#include "objects/Object.h"

class Engine;

class Renderer {
public:
    Renderer();
    virtual ~Renderer();
    virtual void draw(EnginePtr enginne) = 0;
private:
    
};

#endif /* RENDERER_H */

