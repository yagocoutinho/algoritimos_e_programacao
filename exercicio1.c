#include <stdio.h>

int main() {
    int ano;
    printf("Insira um ano: ");
    scanf("%d", &ano);

    

    switch(ano){
    case 1896:
        case 1900:
        case 1904:
        case 1908:
        case 1912:
        case 1920:
        case 1924:
        case 1928:
        case 1932:
        case 1936:
        case 1948:
        case 1952:
        case 1956:
        case 1960:
        case 1964:
        case 1968:
        case 1972:
        case 1976:
        case 1980:
        case 1984:
        case 1988:
        case 1992:
        case 1996:
        case 2000:
        case 2004:
        case 2008:
        case 2012:
        case 2016:
        case 2020:
        printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.\n", ano);
        break; 
    
    
     case 1930:
        case 1934:
        case 1938:
        case 1950:
        case 1954:
        case 1958:
        case 1962:
        case 1966:
        case 1970:
        case 1974:
        case 1978:
        case 1982:
        case 1986:
        case 1990:
        case 1994:
        case 1998:
        case 2002:
        case 2006:
        case 2010:
        case 2014:
        case 2018:
        case 2022:
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
        break; 
    

    
    default:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }
    return 0;
}
