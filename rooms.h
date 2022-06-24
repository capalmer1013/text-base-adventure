#ifndef ROOMS_H
#define ROOMS_H

enum roomtype{field, forest, castle_ext, castle_int, dungeon};

struct room {
    struct room* up;
    struct room* down;
    struct room* left;
    struct room* right;
    roomtype room_type;
    
};


struct room listOfRooms[100] = {};

#endif