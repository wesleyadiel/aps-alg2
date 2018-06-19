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
void fdois();
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
void fquarenta();

//Criado enum indicar as funções que seram chamadas, dependendo da escolha
enum etapa1 {um = 1, dois, tres, quatro, cinco, seis, sete, oito, nove, dez, onze, doze, treze, quatorze, quinze, dezesseis, dezesete, dezoito,
dezenove, vinte, vinte1, vinte2, vinte3, vinte4, vinte5, vinte6, vinte7, vinte8, vinte9, trinta, trinta1, trinta2, trinta3, trinta4, trinta5,
trinta6, trinta7, trinta8, trinta9, quarenta};

//Criada apenas uma variavel global para fazer validações das escolhas, para evitar lixo de memoria
int choice;

int main()
{
    char inicia;

    chamaTela();
    fullscreen();
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

                if(palavra[i] == '.' || palavra[i] == '!' || palavra[i] == ':'){
                    if(palavra[i+1] == '-'){
                        printf("\n");
                        printf("\t\t");
                        j = 0;
                    }
                }
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
    //imprimeTexto("Um ladrao cheio de truques e um clerigo trapaceiro em aventuras desonestas.... Seu nome e Andrus, \"o Aranha\", um renomado ladrao profissional. Depois de uma vida errante de aventuras e grandes assaltos. Voce decidiu estabelecer- se na metropole de Kristophania - um lugar calmo para pessoas de seu ramo. Voce associa-se a Guilda de Ladroes Local, uma especie de sindicato do crime, que detem o monopolio das atividades criminais na cidade. Associar-se a Guilda traz muitas vantagens: garante informacoes valiosas e protecao contra a policia em troca de uma porcentagem do produto de assaltos, sem falar que todos os ladroes agindo fora da sguilda sao cacados - tanto pelas policias como por outros ladroes! Participar da Guilda, contudo, esta mostrando-se mais tedioso do que esperava. Acabaram-se os desafios, as coisas estao faceis demais. Voce chegou mesmo a realizar alguns assaltos \"nao autorizados\", enriquecendo seu tesouro pessoal sem que a diretoria da Guilda ficasse sabendo. Talvez seja a hora de almejar planos mais elevados: a chefia da Guilda! Sim, essa poderia ser uma coroacao digna de sua carreira. Mas como? O chefao atual e fraco e descuidado - mas mesmo voce nao se atreveria a enfrentar seus guardas-costas, assassinos mais perigosos que muitos guardas do palacio do Rei. Seria loucura tentar isso sem... magica. Magica... isso lhe recorda algo sobre suas antigas aventuras, quando voce atuava na companhia de um grupo de herois: um barbaro com um grifo, um monge mascarado, uma donzela gladiadora, um anao malcheiroso e outros tipos bem estranhos, mas otimos quando musculos se faziam necessarios. Naquela epoca voces invadiram a fortaleza do vilao conhecido como Mestre Arsenal - um famigerado colecionardor de armas e armaduras magicas. La voce conseguiu a capa magica que rendeu-lhe seu apelido: a capa permite ao usuario subir pelas paredes como uma aranha, e disparar teias pelas maos. Um artefato util em sua atividade, sem duvida, mas que nao ajudaria muito na conquista da chefia da Guilda. Talvez seja hora de fazer outra visita ao velho Arsenal...");
    printf("\n");
    printf("\n");
    fum();
}

void fum(){
    system("cls");
    printf("Decidido a penetrar no castelo de Arsenal, voce reune suas \"ferramentas\" de ladrao: as fieis gazuas para forcar fechaduras, a lanterna feita com uma pedra iluminada por magia, e a adaga que ja cortou varias gargantas. Cordas e ganchos de escalada nao sao necessarios ha muito tempo - afinal, voce e o Aranha! Ha ainda um ultimo \"equipamento\" que voce gostaria de ter consigo, e custara apenas algumas canecas de cerveja: indo ao setor de animais treinados por Guilda, voce \"convence\" o adestrador a emprestar-lhe um de seus macacos - bichinhos muito uteis para bater carteiras ou penetrar em lugares protegidos para destrancar portas por dentro. Agora, com o mico sobre seu ombro, voce acredita estar pronto para o desafio. Pronto? Bem, talvez nem tanto. Quando invadiram o castelo de Arsenal, voce contava com a ajuda dos magos poderosos e guerreiros embrutecidos para enfrentar o vilao. Ir sozinho seria uma grande imprudencia. Quem poderia ajuda-lo? Ha tempos nao tem noticias de seus antigos colegas, mas... ainda resta na cidade alguem do grupo original. Parx Methralian, um sacerdote dos Deuses da Trapaca. Por tras da aparencia inofensiva de clerigo, era um assaltante quase tao habilidoso quanto voce - e seus poderes magicos ajudariam bastante. Se voce deseja convidar Parx para participar do roupa, va para 24. Se nao confia no clerigo trapaceiro e prefere agir sozinho, digite 37.");
            scanf("%d", &choice);
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
    imprimeTexto("Voces seguem viagem sem maiores incidentes. Entao, por entre as montanhas, surge a torre que serve de habilitacao ao colecionador de armaas magicas. Voce recorda a apavorante experiencia de lutar com seus guardas zumbis que cairam facilmente diante da investida dos herois. Desta vez, contudo, voces nao contam com barbaros e gladiadores musculosos em seu time. A situacao requer uma aproximacao mais furtiva. Parx sugere um plano: voces podem disfarcar-se e entrar no castelo para verificar o interior, antes de realizae o assalto. Voce acha arriscado demais, e prefere o cair da noite para a invasao. Se quiser seguir o conselho de Parx, digite 32. Prefere usar sua estrategia costumeira, protegido pela escuridao. Digite 26.");
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
    imprimeTexto("A estatueta e de ouro, com quase trinta centimetros de altura. E belissima, representando as formas delicadas de uma fada com precisai impecavel. Pasmo, voce reconhece no pedestal a assinatura do mestre escultor elfo Lorens Lorian. Se for um trabalho original, vale uma fortuna; e, se for uma falsificacao, voce gostaria de conhecer esse genio da arte e contrata-lo para o Guilda. Voce coloca a estatueta na mochila. Se ainda nao investigou o cetro e quer faze-lo agora, digite 8. Se prefere abandonar a sala, digite 20.");
    scanf("%d", &choice);

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
    imprimeTexto("Por mais tentadora que seja a ideia de voltar aos velhos tempos, a prudencia recomenda que deixem o viajante seguir.Afinal, ele usa armadura da guarda real de Thorny - e voce ja encrencas com aquele rei. Voces passam pelo cavaleiro murmurando cumprimentos e cobrindo os rostos. Quando ele esta longe, Parx avisa que desperdicar essa chance vai desagradar os deuses - mas voce prefere contrariar a fe de Parx e enfrentar os exercitos do rei Thormy. Digite 2.");
    scanf("%d", &choice);

    if(choice == dois){
        fdois();
    } else {
        fquatro();
    }
}

void fcinco(){
    system("cls");
    imprimeTexto("Escutando com atencao, voce abre a porta no instante em que o cao esta trotando no sentido oposto ao de voces. Ele e ainda maior do que voce pensava, e por pouco a surpresa nao trai seus movimentos; com os gestos apropriados, voce estende as maos e invoca o poder da capa: uma massa de fios pegajosos dispara de seus dedos, indo guardar nas paredes do corredor - e prendendo o cao no meio dela. Voce acha estranho como o cao nao late. Entao, quando a luta parece vencida, o horror salta a seus olhos: a pele putefrata do animal comeca a descolar-se da carne, livrando-o da teia. Ele estara livre em segundos. -Um morto-vivo! - diz Parx. - Arsenal invocou um cao zumbi para proteger sua torre. Agora que o clerigo conhece a real natureza da ameaca, pode agir de acordo: ele empunha seu simbolo sagrado, mostrando-o a criatura, que parece apavorar-se com esse gesto. Sem som, o monstro debate-se na teia e tenta fugir. Sua carne comeca a fumegar, sua pele esfarela em cinzas... e logo a abominacao cada verica deixa de existir. Bendito seja o poder dos deuses de Parx, voce pensa. Voces tiveram sorte ate agora. Nao fizeram nenhum barulho que pudesse chamar a atencao de Arsenal, ja que o cao era um morto-vivo - criaturas naturalmente silenciosas. So produziu ruido suficiente para que voce escutasse atraves da porta. Ha uma porta no lado oposto do corredor, e voces atravessam os restos da teia e cinzas para chegar ate ela. E uma grande e solida porta metalica. Pode conter armadilhas de modo que seria melhor dar uma checada - mas, em compensacao, o ruido das ferramentas poderia denuncia-los. Voce deve dicir qual risco tomar: Se quer procurar armadilhas, digite 39. Se quiser ignorar armadilhas e apenas abrir a porta, digite 30.");

    scanf("%d", &choice);

    if(choice == trinta9){
        ftrinta9();
    } else if (choice == trinta){
        ftrinta();
    } else {
        fcinco();
    }
}

void fseis(){
    system("cls");
    imprimeTexto("Voces se decidem pelo caminho da direita. O corredor segue alguns metros, vira novamente a direita e termina em uma porta de madeira. Um porta bem simples, que nao admite a presenca de armadilhas, de modo que voce descarta essa hipotese. Uma olhada no ferrolho revela que esta trancada. Se quiser dar uma escutadela na porta antes tentar arromba-la, leia o 25. Se quiser voltar e pegar o caminho da esquerda, digite 34. Se quiser poupar tempo e meter o pe na porta, digite 31.");

    scanf("%d", &choice);

    if(choice == vinte5){
        fvinte5();
    } else if (choice == trinta4){
        ftrinta4();
    } else if (choice == trinta1){
        ftrinta1();
    } else {
        fseis();
    }
}

void fsete(){
    choice = NULL;
    system("cls");
    imprimeTexto("Arsenal e recluso, mas dificilmente resistiria a uma conversa com negociantes de objetos magicos. Ocultos sob seus disfarces, voces aproximam-se da torre e batem a porta. Sao recebidos por um 'modormo' bem peculiar: parece um guerreiro usando uma couraca completa - mas um olhar atento revela que nao existe ninguem por tras das fendas do elmo. -Quem deseja falar com meu senhor? - diz a armadura vazia, com arrepiante voz metalica. -Ouvimos faalar da magnifica colecao de Arsenal - voce declara - , e viemos negociar artefatos com ele. Por um instante a armadura fica inerte, como se pensar fosse um esforco grande demais. Entao ela coloca-se de lado e, com um gesto, convida-os a entrar. -Meu senhor ira recebe-los. Voces sao instruidos a aguardar em um saguao de entrada, luxuosamente decorado - um contraste violento com o desgaste das paredes externas. Ha varias armaduras perfiladas junto as paredes (inanimadas, voce espera) e uma grande lareira ao norte. Entao um arrepio pavoroso percorre seus ossos: sobre a leitura voce reconhece um tridente magico, aquele que haviia sido levado por Silvius Marithimus, um gladiador que fazia parte do grupo original de herois. Se Arsenal recuperou o tridente, entao... Silvius esta morto! Seus ouvidos percebem passos pesados descendo uma escada proxima. em repentino desespero, voce olha para a propria capa magica e para o cajado de Parx: por certo Arsenal ira reconhecer seus pertences roubados! - Vamos cair fora daqui - voce diz a Parx, enquanto corre para a porta. Movidos por pura adrenalina, voces conseguem abrir a pesada porta e sumir nas montanhas. Escondidos entre as rochas, ficam aliviados quando percebem que nao foram seguidos - mas agora sera duas vezes mais perigoso penetrar na torre, pois Arsenal estara desconfiado. Isso ensina voce a escutar Parx e suas ideias idiotas! Enquanto espera a noite cair, va para 26.");
    printf(" qualquer tecla para continuar...");
    scanf("%d", &choice);

    if(choice != NULL){
        fvinte6();
    } else {
        fsete();
    }
}
void foito(){
    system("cls");
    imprimeTexto("O cetro esta na parede, suspenso na horizontal por dois suportes, como as demais armaas. Olhando mais de perto, voce percebe que o cristal esta preso por uma peca metalica em forma de mao. - E uma arma magica - avisa Parx, ainda em sua forma de macaco. - Ja vi magos utilizando cajados assim para lancar relampagos. Mas acautele-se antes de toca-lo, amigo Andrus: o cajado pode ser uma arma formidavel nas maos da pessoa certa, mas pode mataar a pessoa errada. - Como assim? - E como o cao influenciado pela personalidade do dono. Se o construtor desta arma era maligno, uma pessoa bondosa nao podera toca-la sem sofrer dano; se era bom, queimara as maos de uma pessoa ma. Voce nunca considerouu a si mesmo bom ou mau; sao apenas estados de espirito. Alem disso, nao ha como saber qual seria a tendencia moral do fabricante da arma. Se quiser correr o risco e tocar o cajado, digite 11. Se ainda nao investigou a estatueta e quer faze-lo agora, digite 3. Se quer sair da sala sem tocar em mais nada, digite 20.");

    scanf("%d", &choice);

    if(choice == onze){
        fonze();
    } else if(choice == tres){
        ftres();
    } else if(choice == vinte){
        fvinte();
    } else {
        foito();
    }
}

void fnove(){
    choice = NULL;
    system("cls");
    imprimeTexto("Voce saca suas ferramentas e tenta forcar a fechadura, mas de nada adianta: ela e de excelente qualidade, a prova de arrombadores, e mesmo sua tecnica mostra-se inutil. Depois de mais alguns minutos de tentativas, voce desiste. Agora so resta pegar o corredor da direita. Va para 6.");

    scanf("%d", &choice);

    if(choice != NULL){
        fseis();
    } else {
        fnove();
    }
}

void fdez(){
    system("cls");
    imprimeTexto("Depois de comprar uma carroca e dois bons cavalos (usando disfarces para nao deixar pistas, claro), voces partem para as montanhas onde a fortaleza de Arsenaal esta escondida. O caminho e complicada, e jamais conseguiram encontra-lo se ja nao tivessem estado la anates. Entao, uma surpresa: pela estrada que singra as montanhas, em sentido contrario, surge um viajante. Um cavaleiro de armadura, sobre o dorso de um majestodo cavalo branco. Suas vestes sao luxuosas, e fazem com que voce e Parx troquem olhares de soslaio. - O amigo Andrus gostaria de fazer uma oferenda aos Deuses da Trapaca? - propoe Parx. Apesar de seus poderes, Parx as vezes ague como uma crianca: assaltar ou matar esse cavaleiro seria um ato que chegaria aos ouvidos da Guilda, e isso seria considerado traicao. Um risco elevado. Mas, por outro lado, suas joias parecem muito valiosas... Se voce aceita o convite de Parx para um assalto, digite 21. Se prefere deixar o homem seguir em paz, digite 4.");

    scanf("%d", &choice);

    if(choice == vinte1){
        fvinte1();
    } else if(choice == quatro){
        fquatro();
    } else {
        fdez();
    }
}

void fonze(){
    system("cls");
    imprimeTexto("Uma arma capaz de sisparar relampagos... com ela voce poderia fulminar a diretoria da Guilda, e facilmente assumir seu lugar. E exatamente o que procurava. Sua mao aproxima-se do cetro, vacila um pouco... e fecha-se a volta dele. Seus dedos parecem dormentes, mas pode ser apenas o nervosismo. Abrindo os olhos, para seu horros, voce ve faiscas azuis crepitando sobre seu pulso. Elas ficam maiores e maiores, queimando os pelos de seu braco, deixando manchas negras na pele, calcinando sua carne... e matando voce. Diante do punhado de carvao que havia se chamado Andrus, o Aranha, Parx maneia a cabeca e lamenta: - Sinto muito, amigo Andrus. Os Deuses da Trapaca nao estavam com voce. Uma pena. E o macaquinho foge pela janela, de volta a cidade.");
}

void fdoze(){
    choice = NULL;
    system("cls");
    imprimeTexto("Voce imagina que uma proposta de adesao a Guilda dos Ladroes possa interessar a Arsenal. Nao haveria provlema em apresentar-se como membro da Guilda, porque voce o e de fato. Claro que a atual diretoria nao sabe que Arsenal esta sendo convidado, mas isso nao sera problema quando voce tornar-se chefe. Oculto sob seus disfarces, voces aproximam-se da torre e batem a porta. Sao recebidos por um 'modormo' bem peculiar; parece um guerreiro usando uma couraca completa - mas um olhar atento revela que nao existe ninguem por tras das fendas do elmo. - Quem deseja falar com meu senhor? - diz a armadura vaia, com arrepiante voz metalica. Voce usa sua labia para tentar convencer aquela coisa de que tem uma proposta interessannte para seu patrao, ao mesmo tempo em que tenta espiar o interior. Parece que pouco mudou desde sua ultima visita: ha novas armaduras perfiladas junto as paredes, e uma lareira ao norte. - Meu senhor nao negocia com ladroes - diz a armadura, encerrando a conversa e levando a mao a espada na cintura. Voces fogem correndo e, aliviados, percebem que o guarda de Arsenal nao os perseguiu; apenas fechou a porta novamente. - Voce e seus disfarces idiotas! - voce reclama. - Agora Arsenal sabe que ha ladroes rondando seu castelo. Vamos precisar de cuidado redobrado. -Nao olhe pra mim. Foi sua essa ideia nada sabia de convidar Arsenal para a Guilda. Resmugando, voce espera o anoitecer. Va para 26.");
    printf("Insira qualquer valor para continuar...");
    scanf("%d", &choice);

    if(choice != NULL){
        fvinte6();
    } else {
        fdoze();
    }
}

 void ftreze(){
    system("cls");
    imprimeTexto("Voce cria coragem e puxa a tocha. Ela move-se feito alavanca, e a parede comeca a se mover, revelando uma porta secreta que da acesso ao porao da torre. Voces sobem as escadas sorrateiramente, e chegam ao andar terreo. Atravessam o saguao de entrada e ealcancam mais escadas, rumando para o pavimento superior, de onde vieram. Logo alcancam a sala principal da colecao de Arsenal. Desta vez tomando cuidado para evitar o tapete traicoeiro, voces examinam a colecao. Descobrem sua capa e o cajado de Parx, tratam de pega-los de volta, e comecam a procurar o que vieram buscar. Mas nao tem chance de procurar por muito tempo. a porta explode em lascas, e por tras dela surge Mestre Arsenal - desta vez armado com seu destruidor martelo de guerra. - Malditos ladroes! - ele grita furioso, rodopiando a arma. - Voces querem minhas armas. Todos querem minhas armas. Mas nao vou permitir que me roubem novamente. Eu terei todas as armas magicas do mundo! Desta vez o homem esta meio possesso! Arsenal avanca disposto a esmagar voces dois, e a espada que voce tem em maos nao sera nada contra sua armadura encantada. Voce olha a volta, desesperado para encontrar algo que possa usar contra ele. Tres objetos estao ao seu alcance: Uma espada recurvada dos salteados do deserto. Se quiser pega-la, digite 15. Uma lanca prateda, com dragoes esculpidos no cabo. Se quiser agarra-la, digite 19. Um elmo dourado com a forma de uma concha. Se quiser coloca-lo, digite 27. Um colar de contas vermelhas. Para pega-lo, digite 33.");

    scanf("%d", &choice);

    if(choice == quinze){
        fquinze();
    } else if(choice == dezenove) {
        fdezenove();
    } else if (choice == vinte7){
        fvinte7();
    } else if (choice == trinta3){
        ftrinta3();
    } else {
        ftreze();
    }
}

void fquatorze(){
    system("cls");
    imprimeTexto("Depois de procurar um pouco, voce chega a conclusao de que nao ha armadilhas na porta. Se quiser tentar abri-la, digite 28. Se quiser tentar o outro corredor, digite 6.");

    scanf("%d", &choice);

    if(choice == vinte8){
        fvinte8();
    } else if(choice == seis) {
        fseis();
    } else {
        fquatorze();
    }
}

void fquinze(){
    system("cls");
    imprimeTexto("Agarrando a espada, voce descobre que sua lamina desprende faiscas quando corta o ar. E uma arma magica poderosa, e voce poderia derrotar muitos inimigos com ela - mas nao Mestre Arsenal. Em segundos voce e Parx sao reduzidos a dois punhados de carne moida...");
}

void fdezesseis(){
    system("cls");
    imprimeTexto("Pelo que voce se lembra da disposicao dos quartos da torre de Arsenal, aquela porta deve levar a um corredor. Colando a madeira seu ouvido treinando, voce tenta perceber os sons do outro lado. A principio o silencio parece total, mas logo percebe um familiar clique-clique - que so poderia ser o rocar de garras sobre pedra: ha um cao de guarda no outro lado. E bem grande. Sera questao de tempo ate que o animal ouca ou fareje voces. Precisam dar um jeito nele o quanto antes. -Posso solicitar aos deuses que lancem sobre a fera um feitico paralisante - sussurra Parx. E uma boa ideia, mas voce tem seus proprios metodos para imobilizar os inimigos: a magia de sua capa permite que voce dispare pelas maos uma teia magica, com fios viscosos que prenderao o mais forte guerreiro. Se quiser deixar a tarefa para Parx, digite 38. Se quiser usar seu proprio poder, digite 5.");

    scanf("%d", &choice);

    if(choice == trinta8){
        ftrinta8();
    } else if(choice == cinco) {
        fcinco();
    } else {
        fdezesseis();
    }
}

void fdezessete(){
    system("cls");
    imprimeTexto("Sua mao desliza na direcao do cabo da adaga. No exato momento em que ia toca-la, um punho fecha-se veloz sobre seu pulso e aperta com a forca de um gigante. -Ah, lapario! - esbraceja o cavaleiro, enquanto desembainha a espada com a mao livre. - Agora percebo, sua descricao combina com a do famigerado Aranha. Pagara por seus crimes, bandido. A lamina desce com forca, e voce sucumbe a explosao de dor. So volta a abrir os olhos no dia seguinte, e descobre-se em um acampamento, aquecido por uma fogueira. Parx esta ao seu lado, entoando as preces de cura que voce viu-o usar tantas vezes. -Que aconteceu? - voce consegue dizer. -Voce abusou da providencia dos deuses, foi o que aconteceu. Meu cajado esmigalhou o cranio do ignobil pecador antes que o pior acontecesse, mas o estrago ja esta feito. Acho que e o fim de seus dias como o Aranha, velho amigo. - De que voce esta falando...? Voce entenda a terrivel verdade quando tenta segurar o braco de Parx - e descobre um toco enrolado em ataduras onde antes havia uma mao. Sim, sua carreira esta mesmo terminada...");
}
void fdezoito(){
    system("cls");
    imprimeTexto("Voce acha mais prudente nao abusar da sorte tentando roubar a adaga. Pode ser que desta vez ele perceba. Afastando-se com discricao, voce deixa que Parx continue distraindo o cavaleiro ate que ele resolva partir. Quando ele esta longe, voce investiga o conteudo da bolsa: um generoso punhado de pecas de ouro, uma perola valiosa, e um pergaminho com o selo real - contendo ordens do rei Thormy para que 'o Aranha' seja capturado vivo ou morto (preferencialmente morto). Voce gargalha, imaginando os problemas que o cavaleiro tera se propor as autoridades de Kristophania uma cacada ao Aranha, sem aquele documento. Parx aceita as moedas como 'donativo para os deuses', e voce fica com a perola. digite 2.");
    scanf("%d", &choice);

    if(choice == dois){
        fdois();
    }
}

void fdezenove(){
    system("cls");
    imprimeTexto("A lanca, infelizmente, nao foi uma escolha sabia: e uma arma magica especialmente criada para matar dragoes, e mostra-se desajeitada contra Arsenal. Ele vence a luta, e esmaga voces com seu martelo...");
}
void fvinte(){
    system("cls");
    imprimeTexto("Voce volta sua atencao para a unica porta do aposento, perguntando-se o que havera alem dela. Se voce quiser colar o ouvido a porta e escutar, digite 16. Se acha que pode haver uma armadilha na porta, digite 29.");

    scanf("%d", &choice);

    if(choice == dezesseis){
        fdezesseis();
    } else if(choice == vinte9){
        fvinte9();
    } else {
        fvinte();
    }
}

void fvinte1(){
    system("cls");
    imprimeTexto("Voces descem da carroca para falar com o homem. Agora reparam que sua armadura o identifica como oficial da guarda real. -Que os deuses o abencoem, viajante - cumprimenta Parx. - O que faz um oficial real tao distante do palacio? -Salve, sacerdote - responde ele, que sem duvida teria uma reacao diferente se reconhecesse os Deuses da Trapaca no medalhao usado por Parx. - Venho a procura de um famigerado gatuno, procurado por grande recompensa por informacoes sobre o vilao. Por acaso conhece a criatura perfida conhecida como 'o Aranha'? -Nunca ouvi falar de tal fascinora - diz Parx, lutando para disfarcar o sorriso, enquanto voce se recorda da agradavel visao da princesa em seus transparentes trajes noturnos. Foi ha bastante tempo; pelo visto, o rei Thormy ainda estava zangado. A conversa entre Parx e o cavaleiro prossegue, enquanto a bolsa de moedas do oficial desliza com facilidade para o inteiror de sua capa. Entao voce nota no cinto dele uma adaga cravejada de joias, e com simbolos estranhos gravados na bainha: talvez seja magica! Valeria o risco de uma segunda tentariva? Se quiser roubar a adaga, digite 17. Se esta satisfeito com a bolsa de moedas, digite 18.");
    scanf("%d", &choice);

    if(choice == dezesete){
        fdezessete();
    } else if(choice == dezoito){
        fdezoito();
    } else {
        fvinte1();
    }
}
void fvinte2(){
    system("cls");
    imprimeTexto("Convencido de que nao ha ninguem no aposento, voce comeca a trabalhar com suas ferramentas. Mas nao consegue dedicar-se a fechadura por muito tempo: a porta abre-se de repente - pelo lado de dentro! Infelizmente, seus ouvidos o trairam. Havia alguem no aposento, um zumbi descarnado que aguardava ordens de seu mestre. O silencio dos mortos-vivos enganou-o, e voce paga com a vida quando as garras do monstro enterram-se em sua garganta antes que Parx consiga esconjura-lo...");
}

void fvinte3(){
    system("cls");
    imprimeTexto("Abrindo a porta, voces entram em uma pequena sala vazia. com outra porta na parede oposta - exatamente igual a anterior, mas desta vez destrancada. A nova porta conduz a um corredor que segue em frente ate terminar em uma parede com uma tocha sobre um suporte. Aparentemente nao ha saida deste pequeno labirinto. Ou ha?Tochas costumam servir de alavancas para salas secretas - mas tambem podem ativar armadilhas para espertinhos que pensarem nisso. Se quiser mexer na tocha, digite 13. Se acha melhor procurar armadilhas antes de mexer na tocha, digite 36.");

    scanf("%d", &choice);

    if(choice == dezesete){
        fdezessete();
    } else if(choice == trinta6){
        ftrinta6();
    } else {
        fvinte3();
    }
}

void fvinte4(){
    system("cls");
    choice = NULL;
    imprimeTexto("Voce ruma para o templo escondido onde Parx realiza seus cultos aos Deuses da Trapaca, certo de que vai encontra-lo tentando convencer seus seguidores a livrarem-se dos 'bens materiais', doando-os a igreja. Chegando la, contudom nao encontra ninguem. - Procurando por mim, Andrus? - diz uma voz sobre seu ombro. Voce vira-se veloz, e descobre o clerigo bem atras de voce. Como o maldito era matreiro! Apenas um ladrao muito experiente podia aproximar-se daquele jeito, pelas costas, de um outro ladrao. Voce olha para seu cajado de aparencia inofensiva, mas sabe que e so aparencia mesmo: tambem foi roubado da colecao de Arsenal, e e uma arma magica poderosa - podendo transformar-se em uma destruidora maca de duas maos. Voce ja viu-a em acao, transformando cranios de ogres em pure. Voce explica seus planos a Parx. Ele sorri e afaga o simbolo sagrado, dizendo: - Certamente os deuses vao nos ajudar nessa empreitada, amigo Andrus. Mas tenho plena certeza de que a ajuda seria maior se o futuro chefe da Guilda fizesse certos votos de devocao a causa da Trapaca... Entendendo o que o matreiro Parx tenta dizer, voce garante que o culto de Parx ganhara um novo templo e maiores contribuicoes da Guilda quando a chefia mudar de maos. Ele aceita o trato e voces partem em viagem. Entao voce percebe que seu mico fugiu. Que diabos! Sob os efeitos da cerveja, o maldito adestrador deve ter escolhido um animal ainda sem treinamento. Voce sabera o que fazer com ele quando tornar-se o chefe. Mas, pensando bem, talvez o macaco nao tenha fugido. Uma possibilidade atravessa sua mente, mas e tao assustadora que voce acha melhor nem pensar nela. Va para 10.");
    printf("Insira qualquer valor para continuar...");

    scanf("%d", &choice);

    if(choice != NULL){
        fdez();
    } else {
        fvinte4();
    }
}

void fvinte5(){
    system("cls");
    imprimeTexto("No estilo dos ladroes, voce aproxima o ouvido da porta e concentra-se. Nao consegue ouvir absolutamente nada. Voce nao tem duvidas de que o aposento esta vazio. Se quer forcar a fechadura com suas ferramentas, digite 22. Se quiser voltar e pegar o caminho da esquerda, digite 34.");

    scanf("%d", &choice);

    if(choice == vinte2){
        fvinte2();
    } else if(choice == trinta4){
        ftrinta4();
    } else {
        fvinte5();
    }
}

void fvinte6(){
    system("cls");
    imprimeTexto("Ocultos entre as rochas, voces esperam a chegada da noite. Com a pericia dos ladroes, protegidos pela escuridao, aproximam-se da torre de Arsenal. Decidem que a melhor maneira de entrar e por uma das janelas do segundo pavimento. Voce vai primeiro. A capa magica permite que suas maos e pes grudem a pedra, e voce escala como se fosse uma aranha. Parx faz uso de seu proprio e incomum metodo de escalada, transformando-se em macaco e subindo facilmente pela parede. Chegando a janela, voces se desanimam ao descobrir que e protegida por grossas barrass de ferro: seria necessaria a forca de um poderoso guerreiro para dobra-las. Ou magia. -E entao, Parx? Tem ai algum feitico que possa ajudar? -Nao sou um mago, amigo Andrus - retruca o macaquinho. - Meus poderes sao um presente dos deuses por minha devocao. Mas sim, creio que posso ajudar... E engracado ver o mico unindo as maos e rezando, ate que o resultado de suas preces comece a surgir: as barras brilham como uma luz fantasmagorica, e voce assiste o metal se desmanchar diante de seus olhos! - Como fez isso? - voce pergunta. - Nada fiz, amigo. Foram os deuses que, a meu pedido, envelheceram as grades mil anos. Contente por ter aquele clerigo do seu lado, voce entra no aposento. Tira da mochila sua pequena pedra magica luminosa, que lhe serve de lanterna, e dirige seu facho a volta: parece que parte da colecao de Arsenal esta guardada aqui. As paredes estao forradas com lancas, alabardas, tridentes e outras armas de grande porte. Devem ser destruidoras nas maos de um guerreiro, mas nao interessam a voce ou a Parx. Procurando algo que valha a pena levar, sua atencao volta-se para dois objetos: Uma estatueta metalica sobre uma mesinha, no canto do quarto. Se quiser pega-la, digite 3. Um cetro, suspenso na parede, tendo em sua ponta um cristal transparente. Se quiser pega-lo, digite 8. Se prefere deixar tudo onde esta, digite 20.");

    scanf("%d", &choice);

    if(choice == oito){
        foito();
    } else if(choice == tres){
        ftres();
    } else if(choice == vinte){
        fvinte();
    } else {
        fvinte6();
    }
}

void fvinte7(){
    system("cls");
    imprimeTexto("Voce coloca o elmo, e nada acontece. Esse elmo seria bem util debaixo d'agua, pois sua magia permite ao usuario respirar como se fosse um peixe - mas de nada adianta agora. Serve apenas para que Arsenal esmague suas pernas com o martelo, esperando poupar o precioso elmo...");
}

void fvinte8(){
    system("cls");
    imprimeTexto("A porta esta bem trancada. Se quiser sar suas ferramentas para destranca-la, digite 9. Se quiser tentar o outro corredor, digite 6.");

    scanf("%d", &choice);

    if(choice == nove){
        fnove();
    } else if(choice == seis){
        fseis();
    } else{
        fvinte8();
    }
}

void fvinte9(){
    system("cls");
    imprimeTexto("Voce examina a fechadura e comeca a cutuca-la com se estojo de ferramentas. Ao seu lado, Parx retorna a forma humana com um desabafo: -Nao acredito em meus olhos!Por onde anda sua antiga astucia, amigo Andrus? Por que esta procurando armadilhas no lado de dentro de uma porta? Francamente... Irritado com sua momentanea incomperencia para o ramo, Parx avana e mete o pe na porta, escancarando-a, sem preocupar-se com o que ha no outro lado. E logo se arrepende. A porta leva para um corredor, que a principio parece vazio. Apenas a principio, porque da escuridao surge um cao enorme, um mastim realmente assustador, com presas demoniacas curvando-se para fora da boca. Um cao estranhamente silencioso. Voce saca o punhal e prepara-se para a luta, mas... seria sua imaginacao, ou as costelas da criatura estavam expostas? Infelizmente, nao era imaginacao. Aquilo nao era um cao de guarda comum, mas sim um cadaver animado - certamente invocado por Arsenal para proteger sua torre nesta noite tao suspeita. Despreparados para uma batalha contra um morto-vivo, voce e Parx nao conseguem sobreviver ao toque pestilento das garras da fera...");
}

void ftrinta(){
    system("cls");
    imprimeTexto("Decidindo que as ferramentas para procurar armadilhas fariam barulho demais, voce resolve arriscar. Segura a macaneta, prende a respiracao e comeca a puxar a porta. Um calafrio percorre suas costas quando voce ve um arame esticando-se da porta ao batente, e ouve um 'clique'. Voce e Parx nao tem tempo de gritar quando spuzias de lancas mergulham do teto, perfurando seus corpos...");
}

void ftrinta1(){
    system("cls");
    choice = NULL;
    imprimeTexto("Cansados de sutilezas, voce se arma com a espada que pegou dos guardas e derruba a porta com um chute. A visao do interior e aterradora: um cadaver ossudo que parece jogado em um canto olha para voce e levanta-se, avancando para lutar. Parx segura seu medalhao e prepara-se para esconjurar a criatura, mas voce o detem: esta farto desses monstros, e quer destruir pelo menos um deles com as proprias maos. Veloz em suas maos, a espada decepa a cabeca do morto-vivo, e depois um braco, e outro... ate que restem apenas pedacos. Voce examina a sala em busca de algo importante, e encontra: uma chave pendurada na parede oposta. Com certeza o zumbi estava ali para guarda-lo. Pegando a chave, voce e Parx decidem que nao ha mais nada a fazer aqui e retorna a bifurcacao, pegando o corredor da esquerda. O corredor leva a uma porta trancada. Voce experimenta a chave, e ela funciona: a porta se abre. Va para 23.");
    printf("Insira qualquer valor para continuar...");


    scanf("%d", &choice);

    if(choice != NULL){
        fvinte6();
    } else {
        ftrinta1();
    }
}

void ftrinta2(){
    system("cls");
    imprimeTexto("As ideias de Parx scao divertidas, e ele e bom com disfarces. Cabera a voce inventar uma historia convincente antes de bater a porta de Arsenal. Se quiser apresentar-se como negociante de artefatos magicos, digite 7. Se prefere agir sob o disfarce de emissario da Guilda, digite 12.");

    scanf("%d", &choice);

    if(choice == sete){
        fsete();
    } else if(choice == doze){
        fdoze();
    } else {
        ftrinta2();
    }
}

void ftrinta3(){
    system("cls");
    choice = NULL;
    imprimeTexto("Voce agarra o colar de contas, reconhecendo-o como sendo parecido com aquele usado por um ranger amigo seu. As contas do colar sao explosivas. Voce arranca a maior delas e arremessa contra Arsenal, cobrindo os olhos para proteger-se da explosao. Quando olha novamente, descobre Arsenal ainda de pe, com o peito fumegando. -Pobre tolo! - diz ele. - E preciso muito mais do que isso para acabar comigo. -Sera mesmo? - voce pergunta, sorrindo, quando uma ideia traicoeira atravessa sua mente. Voce toma outra conta do colar e arremessa... mas nao contra Arsenal. Desta vez voce faz pontaria no chao, entre seus pes. Como voce planejou, o chao nao resiste e desaba - levando Arsenal consigo. -Muito engenheso, amigo Andrus - diz Parx, aproximando-se da beirada do buraco e olhando la embaixo. Isso provavelmente nao vai matar Arsenal, mas ira dete-lo ate que estejamos longe. E melhor irmos logo, contudo. Ele esta certo. Va para 35.");
    printf("Insira qualquer valor para continuar...");

    scanf("%d", &choice);

    if(choice != NULL){
        ftrinta5();
    } else {
        ftrinta3();
    }
}

void ftrinta4(){
    system("cls");
    imprimeTexto("O caminho da esquerda conduz voces por um corredor que, mais adiante, termina em uma pesada porta melatica. Parece grossa demais, e nao adiantaria tentar ouvir algo atras dela. Se quiser procurar armadilhas na porta, digite 14. Se quiser tentar abrir a porta, digite 28. Se quiser tentar o outro corredor, digite 6.");

    scanf("%d", &choice);

    if(choice == quatorze){
        fquatorze();
    } else if(choice == vinte8){
        fvinte8();
    } else if(choice == seis){
        fseis();
    } else {
        ftrinta4();
    }
}

void ftrinta5(){
    system("cls");
    choice = NULL;
    imprimeTexto("Tendo vencido Arsenal, voce pode examinar sua colecao com mais calma. Dentre uma infinidade de itens, voce encontra o que parece ser um chapeu vulgar - mas e exatamente o que procurava... va para 40.");
    printf("Insira qualquer valor para continuar...");

    scanf("%d", &choice);

    if(choice != NULL){
        fquarenta();
    } else {
        ftrinta5();
    }
}

void ftrinta6(){
    system("cls");
    choice = NULL;
    imprimeTexto("A torre de Arsenal esta mesmo deixando voce paranoico - mas cuidado nunca e demais neste lugar. Com suas ferramentas, voce fuca a base da tocha. Descobre de fato um macanismo, mas nao sabe dizer se vai ativar uma armadilha ou uma porta secreta. Voce tera que arriscar. Va para 13.");
    printf("Insira qualquer valor para continuar...");

    scanf("%d", &choice);

    if(choice != NULL){
        ftreze();
    } else{
        ftrinta6();
    }
}

void ftrinta7(){
    system("cls");
    choice = NULL;
    imprimeTexto("Talvez nao seja uma boa ideia confiar em Methralian. ele tem uma posicao de prestigio dentro da Guilda, e uma mudanca da diretoria pode nao ser de seu agrado. Achando mais prudente agir sem o clerigo, voce parte na direcao do castelo de Arsenal. Quando voce comeca sua viagem, uma vozinha soa perto de seu ouvido: - Partindo para uma aventura sem seu colega, Aranha? A mencao de seu apelido no submundo, voce se vira com a adaga em punho - mas nao encontra ninguem. Olha a volta, consufo, e descobre que esta mesmo sozinho. Sozinho, exceto por... Voce olha para o mico em seu ombro. Ele traz um sorriso no pequeno rosto. - Parx! - voce grita, tentando acertar um tabefe no bicho. Ele se esquiva e pula para o chao, sendo logo envolvido por uma luz magica e distorcida; aos poucos, as formas do macaco desaparecem para dar lugar ao sacerdote Parx Methralian. Agora voce se lembra: seus deuses concedem a ele o poder de transformar-se em macaco. -Seu trapaceiro dos infernos! Quantas vezes tive voce sobre meu ombro, pensando tratar-se de um mico comum? -Muitas, garanto. Mas nao se enfureca tanto, velho amigo; se eu realmente quisesse atraicoa-lo, ja teria denunciado a diretoria suas atividades clandestinas. Acalmando-se, voce percebe que aquilo pode muito bem ser verdade. Parx era assim mesmo: trapaceava por simples devocao aos deuses, sem grandes ambicoes materiais ou sociais. Se quisesse trair voce para conquistar mais prestigio dentro da Guilda, ja teria feito. Voce resolve que pode confiar nele, afinal. Revela seu plano, e assiste-o acariciar o cajado magico que conseguiu no castelo de Arsenal. - Um convite tentador, amigo Andrus. Este sacerdote anda um pouco saudoso dos bons tempos de batalha. E sera bom ter um velho amigo como chefe da Guilda. Vamos, pois, a procura do bom Mestre Arsenal. Va para 10.");
    printf("Insira qualquer valor para continuar...");

    scanf("%d", &choice);

    if(choice != NULL){
        fdez();
    } else {
        ftrinta7();
    }
}

void ftrinta8(){
    system("cls");
    imprimeTexto("Escutando com atencao, voce abre a porta no instante em que o cao esta trotando no sentido oposto ao de voces. Ele e imenso, e silenciosos demais para uma criatura do seu tamanho. Parx faz suas preces silenciosas. Voce ja viu seu feitico de paralisia em acao: a vitima fica esoremida contra o solo, como se prensada por uma mao gigante e invisivel, incapaz de mover-se ou falar. Contra aquele mastim, devia ser mais que suficiente. O feitio, entretando, nao surtiu efeito. Seria sua imaginacao, ou as costelas da criatura estavam expostas? Infelizmente, nao era imaginacao. Aquilo nao era um cao de guarda comum, mas sim um cadaver animado - certamente invocado por Arsenal para proteger sua torre nesta noite tao suspeita. Despreparados para uma batalha contra um morto-vivo, voce e Parx nao conseguem sobreviver ao toque pestilento das guarras da fera...");
}

void ftrinta9(){
    system("cls");
    imprimeTexto("Com o maximo cuidado para nao fazer ruido, voce usa suas ferramentas para tentar localizar armadilhas. Procura pelas costumeiras agulhas envenenadas que saltam das macanetas, mas nao encontra nenhuma. Depois de longos minutos, quando voce esta quase acreditando que a porta e inofensiva, percebe a existencia de um mecanismo que seria ativado pelo abrir da porta; nao ha como saber exatamente o que ele faria, mas e claramente uma armadilha. Com uma tesoura apropriada, voce corta o arame que serviria de gatilho - e agora a porta e segura. A porta leva a um grande aposento, que voce e Parx reconhecem de imediato: e a sala onde Arsenal guarda as pecas principais de sua colecao - e ela cresceu desde quando estiveram aqui. Espadas magnificas adornam as paredes, armaduras reluzentes descansam em seus pedestais, escudos exibem seus brasoes orgulhosos... mas nada disso interessa a voce. Precisa de alguma coisa especial, alguma coisa diferente... - Tudo nessa sala e magico - comenta Parx, maravilhado. - Ate mesmo aquele tapete. Voces voltam a atencao para um grande tapete, finalmente trabalhando, cem no centro da sala. Seria um dos tais tapetes voadores? Vale a pena investigar: voce e Parx se aproximam para sentar-se no tapete.. e caem. A consciencia retorna dolorosa. Voce acorda em uma cela no calabouco da torre de Arsenal. Parx esta ajoelhado ao seu lado, entoando canticos para curar os ferimentos causados pela queda. - O que foi desta vez? - voce pergunta. - Uma armadilha. O tapete nunca existiu. Era uma ilusao que escondia um alcapao. Voce olha para o teto e ve o alcapao por onde devem ter caido, agora fechado. Malditas armadilhas magicas! Passos denunciam a aproximacao de alguem. A porta da cela se abre, e por ela entram o que parecem ser dois guardas com armaduras completas. Mas basta um olhar mais cuidadoso para notar que nao ha seres humanos ali: sao armaduras magicas. Elas posicionam-se nos lados da porta, espadas em punho, e abrem passagem para... Arsenal. Sim, Mestre Arsenal em pessoa. O habilidoso guerreiro, cujo nome verdadeiro foi esquecido ha muito tempo, e que passou grande parte de sua vida percorrendo o mundo em busca de armas e armaduras encantadas. Aquele cuja a torre voce e seus companheiros invadiram para recuperar o artefato roubado, aproveitando para levar consigo muitas pecas de sua colecao. Sera que ele ainda esta zangado? Arsenal usa suas pecas favoritas: a couraca completa, a capa orgulhosa e o rosto oculto pelo elmo de aspecto ameacador. Desta vez nao traz martelo de guerra - capaz de derrubar paredes, pelo que voce se lembra. Tem nas maos sua capa magica e o cajado de Parx. - Surpreendem-me com sua audacia, seus ratos ladroes - diz a voz abafada pelo elmo. - Invadir minha torre no passado foi, por si so, um atrevimento desmedido. Retornar aqui, entao, e algo que so posso classificar como pura loucura. Ele agita a capa e o cajado diante de voces, talvez esperando que tentem recupera-los. Nem voce e nem Parx sao tolos o bastante para tentar: Arsenal usa objetos magicos que ampliam sua forca, e mesmo sem armas poderiaa mata-los sem esforco. - A recompensa por sua tolice sera a morte - anuncia ele. - Mas nao agora. Voces interromperam meu sono, e desejo estar descansado para saborear seu sofrimento. Aproveitem seu ultimo alvorecer. Arsenal deixa a cela, instruindo as armaduras para montar guardar do lado de fora. Voce e Parx entreolham-se: -Reparou como os viloes sempre dao uma chance para a gente escapar? -Nao alimente falsas esperancas, amigo Andrus. Como a maioria dos usuarios de feiticos, Arsenal precisa estar plenamente descansado para renovar seus poderes pela manha. Por certo ele planeja matar-nos com magia, de maneiras tao horriveis que eu mal poderia descrever... Diante dessa perspectiva nada agradavel, voce saca o estojo de ferramentas - que, felizmente, escapou a revista de Arsenal. -Como vamos sair daqui? Posso cuidar da fechadura, mas e os guardas? -Apenas abra a porta, e deixe o resto comigo. Voce lida com a fechadura da cela, ofendido com sua simplicidade. Destranca-a em poucos momentos. Entao, de posse de seu simbolo sagrado, Parx salta para o corredor e enfrenta os guardas. - Voltem para o reino dos mortos, criatura das trevas! Parece que Parx perdeu o juizo. Ele pode esconjurar mortos - vivos, mas como espera fazer o mesmo com armaduras magicas? Para sua surpresa, entretando, voce assiste uma cena impossivel: as armaduras estremecem e caem em pedacos. - Nao eram armaduras encantadas - explica Parx -, e sim fastasmas invisiveis, invocados por Arsenal. -E bom ver voce mostrar um pouco de esperteza, para variar! Rindo baixo, voce agarra uma das espadas caidas no chao e oferece outra a Parx. Ele recusa, afirmando que seus deuses nao aprovam o uso de armas daquele tipo. Meneando a cabeca, voces seguem por um corredor mal iluminado e chegam a uma bifurcacao. Se quiser pegar o caminho da direita, digite 6. Se prefere o da esquerda, digite 34.");

    scanf("%d", &choice);

    if(choice == seis){
        fseis();
    } else if(choice == trinta4){
        ftrinta4();
    } else{
        ftrinta9();
    }
}

void fquarenta(){
    system("cls");
    imprimeTexto("Dias depois, os grandes chefes da quadrilha de Kristophania foram convocados para uma reunoao extraordinaria pelo chefao da Guilda. Ele tem um anuncio surprendente a fazer. - Estou cansado de estar no comando - declara ele. - Convoquei esta reuniao para anunciar o novo chefe geral da Guilda de Kristophania. Andrus, o Aranha, sera o novo diretor. Os chefes agiram-se, indignados, com a entrada de Andrus no recinto. Cada um esperava ser indicado para o cargo supremo... mas naoe stavam preparados para aquilo! -Muito obrigado, chefe! - voce diz. - Vou cuidar bem das coisas por aqui. - Conto com voce, Andrus. Estarei me retirando para meu esconderijo, onde vou gozar de uma aposentadoria merecida, longe das autoridades. Adeus. E a reuniao termina com a saida dos chefes furiosos. Andrus tera alguns problemas para impor sua autoridade a eles, mas nao sera nada dificil demais. Com a autorizacao pessoal do chefao, e os assassinos da Guilda ao seu lado, ninguem ira se opor a sua lideranca. -Muito bom este chapeu de disfarce - revela Parx, sob o disfarce magico de chefe da guilda. - Suas ilusoes poderiam enganar qualquer um. -Nao precisam enganar mais ninguem - voce explica. - Se o corpo do chefe for encontrado, nao fara mais diferenca. Agora 'ele' ja passou o cargo para mim, certo? Sim, foi um bom plano matar o chefe e usar o chapeu magico de Arsenal para criar a ilusao de que Parx era ele, transferindo toda a autoridade para voce. Parabens, voce conseguiu. E o novo chefao da Guilda dos Ladroes - pelo menos ate que alguem apareca com um plano mais matreiro que o seu!");
}
