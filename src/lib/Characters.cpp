class position
{
private:
  bool on_vertex; //If ghost is on the vertex, then on_vertex=True
  vertex *nearby_vertex;
  int *length_to_nearby_vertex;
public:
  position()
  {/* Implementation of the Constructor of position*/};
//Manupilating Fuctions:
  /*return value*/get_nearby_vertex();
  /*return value*/get_length_to_nearby_vertex();
  void move_position/*implementaion*/ 
};

class ghost
{
private:
  position ghost_position;
  const int Ghost_EAT;//Ghost_EAT=1; if Person_EAT>Ghost_EAT people can eat ghost; else ghost eat people
  bool Ghost_Fear;//Ghost_EAT>People
  bool direction;//Ghost will automatically walk along one direction on each edge;
public:
  ghost();
//Functions of ghost:
  /*return values*/get_ghost_position();
  /*return values*/change_ghost_position();
  /*return values*/get_ghost_fear();
  /*return values*/Ghost_get_human_position();
  /*return values*/Ghost_move();
  /*return values*/Ghost_Fear();
  /*return values*/Ghost_Eat_Eaten();              
};

class human
{
private:
  position human_position();
  const int Human_EAT;//Human_EAT=0 at normal times; When human gets invincible humans
public:
  human();
  /*return values*/get_human_poition();
  /*return values*/change_human_position();
  /*return values*/Human_eat_eaten();
  /*return values*/Human_move(/*Player Manipulation*/);
  /*return values*/Convert_human_manipulation();//convert player input to choices of the path
}
