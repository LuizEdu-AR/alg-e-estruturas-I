29/01/2024

INTRODUÇÃO
{   
    Um aquivo pode ser visto de duas maneiras:
        -Modo texto
        -Modo Binario
}

AQUITETURA BASICA DE UM ARQUIVO 
{
    Nomedoaquivo.tipodeextenção;
}   

FUNÇOES DE ENTRADA E SAIDA
{
    -A função fopen abre um arquivo em disco para gravar ou ler, e cria uma estrutura de dados especial - FILE - que C utiliza internamente para descrever o arquivo.
    -A função fprintf grava itens de informação em um arquivo aberto, seguindo as especificações de formato que você fornece em um argumento para a função.
    -A função fgets lê uma string de caracteres de um arquivo aberto.
    -A função fclose fecha o arquivo quando as operações de entrada e saída estão completas.
}

FUNÇÕES PARA LER DADOS EM C
{
    -int fscanf(FILE* fp, char* formato);
    -int fgetc(FILE* fp);
    -char* fgets(char* s,int n, FILE* fp);
}