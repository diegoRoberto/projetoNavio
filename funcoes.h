

void menu();
void executaFuncaoMenu(int opcao);
char abreArquivoEntradaDados();
void menu(){
  int opcao;
  printf("*******************************************************************\n");
  printf("Escolha a opção desejada: \n");
  printf("1 - Carregar arquivo para simulação\n");
  printf("2 - Iniciar Simulação\n");
  printf("3 - Resultados\n");
  printf("4 - Sair\n");
  printf("Opção: ");
  scanf("%d", &opcao);
  executaFuncaoMenu(opcao);
};

void executaFuncaoMenu(int opcao){
          char conteudo[1000];
          while(opcao < 5){
          switch (opcao) {
            case 1:
                printf("%s",abreArquivoEntradaDados);
                break;
            case 2:
                printf("Iniciando a simulação\n");
                break;
            case 3:
                printf("Mostrando resultados\n");
                break;
            case 4:
                printf("Saindo\n");
                exit(0);
            default:
                printf("Opção invalida\n");
                break;
          }
          menu();
        }

}

char abreArquivoEntradaDados(){
  FILE *fp;
  char c;
  char conteudoArquivo[1000];
  int i = 0;
  fp = fopen("dadosEntrada.txt", "r");
  c = fgetc(fp);
  while( (c=fgetc(fp))!= EOF ){
    conteudoArquivo[i] = c;
    i++;
}
  fclose(fp);
  return conteudoArquivo;
}
