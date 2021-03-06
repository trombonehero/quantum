// types
// doc

// system variables

#define NEURAL_ARRAY 1000000
#define NEURAL_DIMENSION 20
#define NEURAL_DIRECTION "up"


typedef struct _neural_node NODE;
typedef struct _neural OPERATIONS;
typedef struct _neural SQL;
typedef struct _neural TEST;
typedef struct _neural DOC;
typedef double long ID;

struct _neural {
  ID id;
  DOC description;
  NODE *dimension[NEURAL_ARRAY]; 
};

struct _neural_node {
  ID id;
  DOC description;
  NODE *up;
  NODE *down;
  NODE *left;
  NODE *right;
  NODE dimension[NEURAL_DIMENSION];
};


