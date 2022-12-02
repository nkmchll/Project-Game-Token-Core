#ifndef TOKEN_H
#define TOKEN_H

#include "Game_token_base.h"
#include "Complex_circle.h"

namespace Grid_game
{
    class Token : public Token_base
    {
        public:
            using Token_base::Token_base;

            protected:
                void move(direction) override;
                void move_special(vector<direction>) override;
                void apply_terrain_effect (const Space::terrain_type) override;
                // 0, 1, 2, 3 l, w, b, e
                //if(b)
                    //restore previous position
                //if(w) hp--
                //if(l) hp = 0, pp =0
                //if(e)

                // 0, 1, 2, 3 for each direction

        // if statements for each direction
        //two varibales x and y 
        //0 move y
        //if 1 is rigt x+1

        //how to determine if the proposed movement will go to an invalid space
//board.getwidth == x
//x == 0
//y == 0
// y == board.getHeight()
//firstcondition



        //if direction left 
        //it should check whether if its gooing to an invalid or valid Space 
        // invalid- position is out of bound and barrier
        // valid -decrement or increment depending on what direction 

    
    };
}

#endif