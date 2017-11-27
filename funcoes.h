

void menu();
void executaFuncaoMenu(int opcao);
void abreArquivoEntradaDados();
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
          while(opcao < 5){
          switch (opcao) {
            case 1:
                abreArquivoEntradaDados();
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

void abreArquivoEntradaDados(){
  FILE *fp;
  char c;
  int num = 0;
  fp = fopen("dadosEntrada.txt", "r");
  c = fgetc(fp);
  while( (c=fgetc(fp))!= EOF )
      if(c == '\n')
        num++;

  fclose(fp);
  printf("O número de linhas do arquivo é: %d\n\n\n", num);
}
