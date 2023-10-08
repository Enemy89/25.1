#pragma once

struct coordinate {
    double x1_scp;
    double y1_scp;
    double x2_scp;
    double y2_scp;

    double x1_str;
    double y1_str;
    double x2_str;
    double y2_str;

    double x1_one;
    double y1_one;
};

coordinate scalpel;
coordinate suture;

void enter_coord_scp () {
    std::cout<<"Enter the coordinates of the beginning and end of the section."<<std::endl;
    double user_x1, user_y1, user_x2, user_y2;
    std::cin>>user_x1>>user_y1>>user_x2>>user_y2;
    scalpel.x1_scp=user_x1;
    scalpel.y1_scp=user_y1;
    scalpel.x2_scp=user_x2;
    scalpel.y2_scp=user_y2;
}

void enter_coord_str () {
    std::cout<<"Enter the coordinates of the beginning and end of the section."<<std::endl;
    double user_x1, user_y1, user_x2, user_y2;
    std::cin>>user_x1>>user_y1>>user_x2>>user_y2;
    suture.x1_str=user_x1;
    suture.y1_str=user_y1;
    suture.x2_str=user_x2;
    suture.y2_str=user_y2;
}

void enter_coord() {
    std::cout<<"Enter the coordinates of the clamp location."<<std::endl;
    double user_x1, user_y1;
    std::cin>>user_x1>>user_y1;
    coordinate one;
    one.x1_one=user_x1;
    one.y1_one=user_y1;
}

void check(int* count) {
    if ((scalpel.x1_scp == suture.x1_str) && (scalpel.y1_scp == suture.y1_str) && (scalpel.x2_scp == suture.x2_str) &&
        (scalpel.y2_scp == suture.y2_str)) {
        *count = 1;
        std::cout << "The seam is completed." << std::endl;
    } else
        std::cout << "The coordinates of the incision and the seam do not match. The patient died of blood loss."
                  << std::endl;
}