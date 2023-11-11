#pragma once

struct coordinate {
    double x;
    double y;
};

coordinate scalpel_start;
coordinate scalpel_finish;
coordinate suture_start;
coordinate suture_finish;

void enter_coord_scp () {
    double user_x1, user_y1, user_x2, user_y2;
    std::cout<<"Enter the coordinate of the beginning of the cut:"<<std::endl;
    std::cin>>user_x1>>user_y1;
    scalpel_start.x=user_x1;
    scalpel_start.y=user_y1;
    std::cout<<"Enter the coordinate of the end of the section:"<<std::endl;
    std::cin>>user_x2>>user_y2;
    scalpel_finish.x=user_x2;
    scalpel_finish.y=user_y2;
}

void enter_coord_str () {
    double user_x1, user_y1, user_x2, user_y2;
    std::cout<<"Enter the coordinate of the beginning of the seam:"<<std::endl;
    std::cin>>user_x1>>user_y1;
    suture_start.x=user_x1;
    suture_start.y=user_y1;
    std::cout<<"Enter the coordinate of the end of the seam:"<<std::endl;
    std::cin>>user_x2>>user_y2;
    suture_finish.x=user_x2;
    suture_finish.y=user_y2;
}

void enter_coord() {
    std::cout<<"Enter the coordinates of the clamp location."<<std::endl;
    double user_x1, user_y1;
    std::cin>>user_x1>>user_y1;
    coordinate one;
    one.x=user_x1;
    one.y=user_y1;
}

void check(int* count) {
    if ((scalpel_start.x == suture_start.x) && (scalpel_start.y == suture_start.y) && (scalpel_finish.x == suture_finish.x) &&
        (scalpel_finish.y == suture_finish.y)) {
        *count = 1;
        std::cout << "The seam is completed." << std::endl;
    } else
        std::cout << "The coordinates of the incision and the seam do not match. The patient died of blood loss."
                  << std::endl;
}