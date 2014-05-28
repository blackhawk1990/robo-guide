#include "magnetic_anomalies.cpp" 

//ustalamy nowy kierunek polnocny po przejechaniu ustalonej ilosci taktow,
inline int next_north_direction(Comm::NXTComm comm,int x_goal,int y_goal,int actual_x_pos,int actual_y_pos, int direction,int **new_north_direction_all); 

inline int emergency_north_direction(double **mapa, int **new_north_direction_all, int il_wierszy, int il_kolumn);

//wykrywamy, czy robot jest aktualnie przenoszony
inline bool is_robot_moved(Comm::NXTComm comm);

//Basic version (18-05-2014) developed by artem@matman.uwm.edu.pl,
//Update (22-05-2014) is_robot_moved() developed by �ukasz Traczewski (ltraczewski@gmail.com), Mateusz Kalinowski (m.k.kalinowski@gmail.com)