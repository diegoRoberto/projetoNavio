struct Navio {
    int id;
    char nome[50];
    int idMinerio;
    float volumeMinerio;
};

struct Minerio{
    int id;
    char nomeMinerio[50];
} ;

struct Empilhadeira{
    int id;
    int posicao;
    int trilho;
    double volume;
};

struct Estoque{
    int id;
    double volume;
    double comprimento;
    struct Minerio minerio[50]; //definir a quantidade exata de lota��o
};

struct Patio{
    int id;
    double comprimento;
    struct Estoque estoque[50]; //definir a quantidade exata da lota��o
};

struct PlanoDeChegada{//cada navio estar� relacionado com o plano de chegada.
    struct Navio navio;
    float horaPartida;
    float horaChegada;

};
