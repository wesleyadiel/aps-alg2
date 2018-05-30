#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include "logo.h"
#include <stdio.h>


//Utilizado recursão para não ter que ficar implementando laço de repetição
void inicio();
void fullscreen();
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
    fullscreen();
    char inicia;

    chamaTela();
    setlocale(LC_ALL, "Portuguese");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t   Deseja iniciar o jogo? (S/N)\n\n");
    scanf(" %c", &inicia);

    if(inicia == 'S' || inicia == 's'){
        inicio();
    } else if(inicia == 'N' || inicia == 'n') {
        printf("\n\n\n");
        printf("\t\t\t\t\t\t\t   Obrigado, volte sempre para jogar com a gente!\n");
    } else{
        printf("\n");
        printf("Insira uma resposta válida!\n");
    }
    return 0;
}

void fullscreen(){
    keybd_event ( VK_MENU, 0x36, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
    keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );
}

void imprimeTexto(char palavra[])
{
    int i, j = 0;
    int tam = strlen(palavra);
    printf("\t\t\t");
            for(i=0; i < tam; i++){
                if(j != 120) {
                    j++;
                }
                printf("%c", palavra[i]);
                if(j == 120){
                    if(palavra[i] == ' '){
                        printf("\n");
                        printf("\t\t");
                        j = 0;
                    } else {
                        continue;
                    }
                }
                usleep(50000);
            }
}

void inicio()
{

    //system("START https://www.youtube.com/watch?v=6am1HTYBgZI");
    imprimeTexto("Um ladrao cheio de truques e um clerigo trapaceiro em aventuras desonestas.... Seu nome e Andrus, \"o Aranha\", um renomado ladrao profissional. Depois de uma vida errante de aventuras e grandes assaltos. Voce decidiu estabelecer- se na metropole de Kristophania - um lugar calmo para pessoas de seu ramo. Voce associa-se a Guilda de Ladroes Local, uma especie de sindicato do crime, que detem o monopolio das atividades criminais na cidade. Associar-se a Guilda traz muitas vantagens: garante informacoes valiosas e protecao contra a policia em troca de uma porcentagem do produto de assaltos, sem falar que todos os ladroes agindo fora da sguilda sao cacados - tanto pelas policias como por outros ladroes! Participar da Guilda, contudo, esta mostrando-se mais tedioso do que esperava. Acabaram-se os desafios, as coisas estao faceis demais. Voce chegou mesmo a realizar alguns assaltos \"nao autorizados\", enriquecendo seu tesouro pessoal sem que a diretoria da Guilda ficasse sabendo. Talvez seja a hora de almejar planos mais elevados: a chefia da Guilda! Sim, essa poderia ser uma coroacao digna de sua carreira. Mas como? O chefao atual e fraco e descuidado - mas mesmo voce nao se atreveria a enfrentar seus guardas-costas, assassinos mais perigosos que muitos guardas do palacio do Rei. Seria loucura tentar isso sem... magica. Magica... isso lhe recorda algo sobre suas antigas aventuras, quando voce atuava na companhia de um grupo de herois: um barbaro com um grifo, um monge mascarado, uma donzela gladiadora, um anao malcheiroso e outros tipos bem estranhos, mas otimos quando musculos se faziam necessarios. Naquela epoca voces invadiram a fortaleza do vilao conhecido como Mestre Arsenal - um famigerado colecionardor de armas e armaduras magicas. La voce conseguiu a capa magica que rendeu-lhe seu apelido: a capa permite ao usuario subir pelas paredes como uma aranha, e disparar teias pelas maos. Um artefato util em sua atividade, sem duvida, mas que nao ajudaria muito na conquista da chefia da Guilda. Talvez seja hora de fazer outra visita ao velho Arsenal...");
    printf("\n");
    printf("\n");
    //fum();
}

void fum(){
    printf("Decidido a penetrar no castelo de Arsenal, voce reune suas \"ferramentas\" de ladrao: as fieis gazuas para forcar fechaduras, a lanterna feita com uma pedra iluminada por magia, e a adaga que ja cortou varias gargantas. Cordas e ganchos de escalada nao sao necessarios ha muito tempo - afinal, voce e o Aranha! Ha ainda um ultimo \"equipamento\" que voce gostaria de ter consigo, e custara apenas algumas canecas de cerveja: indo ao setor de animais treinados por Guilda, voce \"convence\" o adestrador a emprestar-lhe um de seus macacos - bichinhos muito uteis para bater carteiras ou penetrar em lugares protegidos para destrancar portas por dentro. Agora, com o mico sobre seu ombro, voce acredita estar pronto para o desafio. Pronto? Bem, talvez nem tanto. Quando invadiram o castelo de Arsenal, voce contava com a ajuda dos magos poderosos e guerreiros embrutecidos para enfrentar o vilao. Ir sozinho seria uma grande imprudencia. Quem poderia ajuda-lo? Ha tempos nao tem noticias de seus antigos colegas, mas... ainda resta na cidade alguem do grupo original. Parx Methralian, um sacerdote dos Deuses da Trapaca. Por tras da aparencia inofensiva de clerigo, era um assaltante quase tao habilidoso quanto voce - e seus poderes magicos ajudariam bastante. Se voce deseja convidar Parx para participar do roupa, va para 24. Se nao confia no clerigo trapaceiro e prefere agir sozinho, digite 37.");
            scanf(" %c", &choice);
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
    printf("Voces seguem viagem sem maiores incidentes. Entao, por entre as montanhas, surge a torre que serve de habilitacao ao colecionador de armaas magicas. Voce recorda a apavorante experiencia de lutar com seus guardas zumbis que cairam facilmente diante da investida dos herois. Desta vez, contudo, voces nao contam com barbaros e gladiadores musculosos em seu time. A situacao requer uma aproximacao mais furtiva. Parx sugere um plano: voces podem disfarcar-se e entrar no castelo para verificar o interior, antes de realizae o assalto. Voce acha arriscado demais, e prefere o cair da noite para a invasao. Se quiser seguir o conselho de Parx, digite 32. Prefere usar sua estrategia costumeira, protegido pela escuridao. Digite 26.");
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
    printf("A estatueta e de ouro, com quase trinta centimetros de altura. E belissima, representando as formas delicadas de uma fada com precisai impecavel. Pasmo, voce reconhece no pedestal a assinatura do mestre escultor elfo Lorens Lorian. Se for um trabalho original, vale uma fortuna; e, se for uma falsificacao, voce gostaria de conhecer esse genio da arte e contrata-lo para o Guilda. Voce coloca a estatueta na mochila. Se ainda nao investigou o cetro e quer faze-lo agora, digite 8. Se prefere abandonar a sala, digite 20.");
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
    printf("Por mais tentadora que seja a ideia de voltar aos velhos tempos, a prudencia recomenda que deixem o viajante seguir.Afinal, ele usa armadura da guarda real de Thorny - e voce ja encrencas com aquele rei. Voces passam pelo cavaleiro murmurando cumprimentos e cobrindo os rostos. Quando ele esta longe, Parx avisa que desperdicar essa chance vai desagradar os deuses - mas voce prefere contrariar a fe de Parx e enfrentar os exercitos do rei Thormy. Digite 2.");
    scanf(" %c", &choice);

    if(choice == dois){
        fdois();
    } else {
        fquatro();
    }
}

void fcinco(){
    system("cls");
    printf("Escutando com atencao, voce abre a porta no instante em que o cao esta trotando no sentido oposto ao de voces. Ele e ainda maior do que voce pensava, e por pouco a surpresa nao trai seus movimentos; com os gestos apropriados, voce estende as maos e invoca o poder da capa: uma massa de fios pegajosos dispara de seus dedos, indo guardar nas paredes do corredor - e prendendo o cao no meio dela. Voce acha estranho como o cao nao late. Entao, quando a luta parece vencida, o horror salta a seus olhos: a pele putefrata do animal comeca a descolar-se da carne, livrando-o da teia. Ele estara livre em segundos. -Um morto-vivo! - diz Parx. - Arsenal invocou um cao zumbi para proteger sua torre. Agora que o clerigo conhece a real natureza da ameaca, pode agir de acordo: ele empunha seu simbolo sagrado, mostrando-o a criatura, que parece apavorar-se com esse gesto. Sem som, o monstro debate-se na teia e tenta fugir. Sua carne comeca a fumegar, sua pele esfarela em cinzas... e logo a abominacao cada verica deixa de existir. Bendito seja o poder dos deuses de Parx, voce pensa. Voces tiveram sorte ate agora. Nao fizeram nenhum barulho que pudesse chamar a atencao de Arsenal, ja que o cao era um morto-vivo - criaturas naturalmente silenciosas. So produziu ruido suficiente para que voce escutasse atraves da porta. Ha uma porta no lado oposto do corredor, e voces atravessam os restos da teia e cinzas para chegar ate ela. E uma grande e solida porta metalica. Pode conter armadilhas de modo que seria melhor dar uma checada - mas, em compensacao, o ruido das ferramentas poderia denuncia-los. Voce deve dicir qual risco tomar: Se quer procurar armadilhas, digite 39. Se quiser ignorar armadilhas e apenas abrir a porta, digite 30.");

    scanf(" %c", &choice);

    if(choice == trinta9){
        ftrinta9();
    } else if (choice == trinta){
        ftrinta();
    } else {
        fcinco();
    }
}



