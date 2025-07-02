#ifndef RECIPEFILEHANDLER_H
#define RECIPEFILEHANDLER_H

#include "../BL/Recipe.h"

class RecipeFileHandler {
public:
    static bool addRecipeToFile(const Recipe& recipe);
};

#endif
