#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include "logo.h"

//Utilizado recursão para não ter que ficar implementando laço de repetição
void inicio();
void imprimeTexto(char[]);
//Funções declaradas com 'f' na frente, pois estava dando conflito com o enum.
void fum();
/*void fdois();
void ftres();
void fquatro();
void fcinco();
void fseis();
void fsete();
void foito();
void fnove();
void fdez();
void fonze();
void fdoze();
void fquinze();
void fdezesseis();
void fdezessete();
void fdezoito();
void fdezenove();
void fvinte();
void fvinte1();
void fvinte2();
void fvinte3();
void fvinte4();
void fvinte5();
void fvinte6();
void fvinte7();
void fvinte8();
void fvinte9();
void ftrinta();
void ftrinta1();
void ftrinta2();
void ftrinta3();
void ftrinta4();
void ftrinta5();
void ftrinta6();
void ftrinta7();
void ftrinta8();
void ftrinta9();
void fquarenta();*/

//Criado enum indicar as funções que seram chamadas, dependendo da escolha
enum etapa1 {um = 1, dois, tres, quatro, cinco, seis, sete, oito, nove, dez, onze, doze, treze, uqatorze, quinze, dezesseis, dezesete, dezoito,
dezenove, vinte, vinte1, vinte2, vinte3, vinte4, vinte5, vinte6, vinte7, vinte8, vinte9, trinta, trinta1, trinta2, trinta3, trinta4, trinta5,
trinta6, trinta7, trinta8, trinta9, quarenta};

//Criada apenas uma variavel global para fazer validações das escolhas, para evitar lixo de memoria
char choice;

int main()
{

    char inicia;

    chamaTela();
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t   Deseja iniciar o jogo? (S/N)\n\n");
    scanf(" %c", &inicia);

    if(inicia == 'S' || inicia == 's')
    {
        inicio();

    }
    else if(inicia == 'N' || inicia == 'n')
    {
        printf("\n\n\n");
        printf("\t\t\t\t\t\t\t   Obrigado, volte sempre para jogar com a gente!\n");
    }
    else
    {
        printf("\n");
        printf("Insira uma resposta válida!\n");
    }
    return 0;
}

void imprimeTexto(char palavra[])
{
    int i;
    int tam = strlen(palavra);

            for(i=0; i < tam; i++)
            {
                printf("%c", palavra[i]);
                usleep(50000);
            }
}

void inicio()
{

    system("START https://www.youtube.com/watch?v=6am1HTYBgZI");
    imprimeTexto("\t\t\tUm ladrao cheio de truques e um clerigo trapaceiro em aventuras desonestas....\n"
                 "\t\t\tSeu nome e Andrus, \"o Aranha\", um renomado ladrao profissional. Depois de uma vida errante de aventuras e grandes assaltos.\n"
                 "\t\t\tVoce decidiu estabelecer-se na metropole de Kristophania - um lugar calmo para pessoas de seu ramo. Voce associa-se a Guilda\n"
                 "\t\t\tde Ladroes Local, uma especie de sindicato do crime, que detem o monopolio das atividades criminais na cidade. Associar-se\n"
                 "\t\t\ta Guilda traz muitas vantagens: garante informacoes valiosas e protecao contra a policia em troca de uma porcentagem do produto\n"
                 "\t\t\tde assaltos, sem falar que todos os ladroes agindo fora da sguilda sao cacados - tanto pelas policias como por outros ladroes!\n"
                 "\t\t\tParticipar da Guilda, contudo, esta' mostrando-se mais tedioso do que esperava. Acabaram-se os desafios, as coisas estao faceis\n"
                 "\t\t\tdemais. Voce chegou mesmo a realizar alguns assaltos \"nao autorizados\", enriquecendo seu tesouro pessoal sem que a diretoria\n"
                 "\t\t\tda Guilda ficasse sabendo. Talvez seja a hora de almejar planos mais elevados: a chefia da Guilda! Sim, essa poderia ser uma\n"
                 "\t\t\tcoroacao digna de sua carreira. Mas como? O chefao atual eh fraco e descuidado - mas mesmo voce nao se atreveria a enfrentar\n"
                 "\t\t\tseus guardas-costas, assassinos mais perigosos que muitos guardas do palacio do Rei. Seria loucura tentar isso sem... magica.\n"
                 "\t\t\tMagica... isso lhe recorda algo sobre suas antigas aventuras, quando voce atuava na companhia de um grupo de herois: um barbaro\n"
                 "\t\t\tcom um grifo, um monge mascarado, uma donzela gladiadora, um anao malcheiroso e outros tipos bem estranhos, mas otimos quando\n"
                 "\t\t\tmusculos se faziam necessarios. Naquela epoca voces invadiram a fortaleza do vilao conhecido como Mestre Arsenal - um famigerado\n"
                 "\t\t\tcolecionardor de armas e armaduras magicas. La voce conseguiu a capa magica que rendeu-lhe seu apelido: a capa permite ao usuario\n"
                 "\t\t\tsubir pelas paredes como uma aranha, e disparar teias pelas maos. Um artefato util em sua atividade, sem duvida, mas que nao\n"
                 "\t\t\tajudaria muito na conquista da chefia da Guilda.\n"
                 "\t\t\tTalvez seja hora de fazer outra visita ao velho Arsenal...\n");


    printf("\n");
    printf("\n");
    fum();
}

void fum(){
    printf("\t\t\tDecidido a penetrar no castelo de Arsenal, voce reune suas \"ferramentas\" de ladrao: as fieis gazuas para forcar fechaduras,\n"
           "\t\t\ta lanterna feita com uma pedra iluminada por magia, e a adaga que ja' cortou varias gargantas. Cordas e ganchos de escalada\n"
           "\t\t\tnao sao necessarios ha' muito tempo - afinal, voce e' o Aranha!\n"
           "\t\t\tHa ainda um ultimo \"equipamento\" que voce gostaria de ter consigo, e custara' apenas algumas canecas de cerveja: indo ao\n"
           "\t\t\tsetor de animais treinados por Guilda, voce \"convence\" o adestrador a emprestar-lhe um de seus macacos - bichinhos muito\n"
           "\t\t\tuteis para bater carteiras ou penetrar em lugares protegidos para destrancar portas por dentro. Agora, com o mico sobre seu\n"
           "\t\t\tombro, voce acredita estar pronto para o desafio.\n"
           "\t\t\tPronto? Bem, talvez nem tanto. Quando invadiram o castelo de Arsenal, voce contava com a ajuda dos magos poderosos e guerreiros\n"
           "\t\t\tembrutecidos para enfrentar o vilao. Ir sozinho seria uma grande imprudencia. Quem poderia ajuda'-lo? Ha' tempos nao tem noticias\n"
           "\t\t\tde seus antigos colegas, mas... ainda resta na cidade alguem do grupo original. Parx Methralian, um sacerdote dos Deuses da Trapaca.\n"
           "\t\t\tPor tras da aparencia inofensiva de clerigo, era um assaltante quase tao habilidoso quanto voce -  e seus poderes magicos ajudariam\n"
           "\t\t\tbastante.\n"
           "\t\t\tSe voce deseja convidar Parx para participar do roupa, digite 24.\n"
           "\t\t\tSe nao confia no clerigo trapaceiro e prefere agir sozinho, digite 37.\n");
}
            /*scanf(" %c", &choice);

            if(choice == vinte4){
                fvinte4();
            } else if (choice == trinta7){
                ftrinta7();
            } else {
                system("cls");
                fum();
            }
}

void fdois(){
    system("cls");
    printf("Vocês seguem viagem sem maiores incidentes. Então, por entre as montanhas, surge a torre que serve de habilitação ao colecionador de armaas mágicas. Você recorda a apavorante experiência de lutar com seus guardas zumbis que caíram facilmente diante da investida dos heróis. Desta vez, contudo, vocês não contam com bárbaros e gladiadores musculosos em seu time. A situação requer uma aproximação mais furtiva.\n"
           "Parx sugere um plano: vocês podem disfarçar-se e entrar no castelo para verificar o interior, antes de realizae o assalto. Você acha arriscado demais, e prefere o cair da noite para a invasão.\n"
           "Se quiser seguir o conselho de Parx, dígite 32.\n"
           "Prefere usar sua estratégia costumeira, protegido pela escuridão. Dígite 26.\n");
    scanf("%c", &choice);

    if(choice == (char) trinta2){
        ftrinta2();
    } else if(choice == vinte6){
        ftrinta6();
    } else {
        fdois();
    }
}

void ftres(){
    system("cls");
    printf("A estatueta é de ouro, com quase trinta centímetros de altura. É belíssima, representando as formas delicadas de uma fada com precisãi impecável. Pasmo, você reconhece no pedestal a assinatura do mestre escultor elfo Lorens Lorian. Se for um trabalho original, vale uma fortuna; e, se for uma falsificação, você gostaria de conhecer esse gênio da arte e contratá-lo para o Guilda. Você coloca a estatueta na mochila. \n"
           "Se ainda não investigou o cetro e quer fazê-lo agora, dígite 8.\n"
           "Se prefere abandonar a sala, dígite 20.\n");
    scanf(" %c", &choice);

    if(choice == oito){
        foito();
    } else if(choice == vinte){
        fvinte();
    } else {
        ftres();
    }
}

void fquatro(){
    system("cls");
    printf("Por mais tentadora que seja a ideia de voltar aos velhos tempos, a prudência recomenda que deixem o viajante seguir.Afinal, ele usa armadura da guarda real de Thorny - e você já encrencas com aquele rei.\n"
           "Vocês passam pelo cavaleiro murmurando cumprimentos e cobrindo os rostos. Quando ele está longe, Parx avisa que desperdiçar essa chance vai desagradar os deuses - mas você prefere contrariar a fé de Parx e enfrentar os exércitos do rei Thormy.\n"
           "Dígite 2.\n");

    scanf(" %c", &choice);

    if(choice == dois){
        fdois();
    } else {
        fquatro();
    }
}

void fcinco(){
    system("cls");
    printf("Escutando com atenção, você abre a porta no instante em que o cão está trotando no sentido oposto ao de vocês. Ele é ainda maior do que você pensava, e por pouco a surpresa não trai seus movimentos; com os gestos apropriados, você estende as mãos e invoca o poder da capa: uma massa de fios pegajosos dispara de seus dedos, indo guardar nas paredes do corredor - e prendendo o cão no meio dela.\n"
           "Você acha estranho como o cão não late. Então, quando a luta parece vencida, o horror salta a seus olhos: a pele putefrata do animal começa a descolar-se da carne, livrando-o da teia. Ele estará livre em segundos.\n"
           "-Um morto-vivo! - diz Parx. - Arsenal invocou um cão zumbi para proteger sua torre.\n"
           "Agora que o clérigo conhece a real natureza da ameaça, pode agir de acordo: ele empunha seu símbolo sagrado, mostrando-o á criatura, que parece apavorar-se com esse gesto. Sem som, o monstro debate-se na teia e tenta fugir. Sua carne começa a fumegar, sua pele esfarela em cinzas... e logo a abominação cada vérica deixa de existir.\n"
           "Bendito seja o poder dos deuses de Parx, você pensa. Vocês tiveram sorte até agora. Não fizeram nenhum barulho que pudesse chamar a atenção de Arsenal, já que o cão era um morto-vivo - criaturas naturalmente silenciosas. Só produziu ruído suficiente para que você escutasse atráves da porta.\n"
           "Há uma porta no lado oposto do corredor, e vocês atravessam os restos da teia e cinzas para chegar até ela. É uma grande e sólida porta metálica. Pode conter armadilhas de modo que seria melhor dar uma checada - mas, em compensação, o ruído das ferramentas poderia denunciá-los.\n"
           "Você deve dicir qual risco tomar:\n"
           "Se quer procurar armadilhas, dígite 39.\n"
           "Se quiser ignorar armadilhas e apenas abrir a porta, dígite 30.\n");

    scanf(" %c", &choice);

    if(choice == trinta9){
        ftrinta9();
    } else if (choice == trinta){
        ftrinta();
    } else {
        fcinco();
    }*/


