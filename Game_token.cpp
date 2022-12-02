#include "Game_token_base.h"
#include "Game_token.h"

namespace Grid_game
{
    //previousPostion
    void Token::move(direction dir){

        //up 
        if (dir == 0){
            if (y == 0 || y == board.height())
                y -= 1;
            else
                return;
        }

        // right
        else if (dir == 1){
            if (x == 0 || x == board.width())
                x += 1;
            else
                return;
        }

        //down
        else if (dir == 2){
            if (y == 0 || y == board.height())
                y += 1;
            else
                return;
        }

        //left
        else if (dir == 3){
            if (x == 0 || x == board.width()){
                x -= 1;
            }
            else
                return;
            
        } 
    }

    //void Token::move(direction dir){
    void Token::move_special(vector<direction> vecDir){
        move(vecDir[0]);
    }

//void apply_terrain_effect (const Space::terrain_type) override;
    void Token::apply_terrain_effect(const Space::terrain_type terrainType){

        // empty: should not doing anything
        // barrier: shouldnt enter the space
        // water: reduce hit points and power points by one
        // lava: set hit points and power points to zero; 

        if (terrainType == 0){
            return;
        }

        // else if (terrainType == 1){
        //     return;
        //     //should not enter or not move
        // }

        else if (terrainType == 2){
            hp -= 1;
            pp -= 1;
        }

        else if (terrainType == 3){
            hp = 0;
            pp = 0;
        }
    }

}