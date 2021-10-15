     #1 INTRODUÇÃO

Hoje em dia não percebemos o quão importante é a plantação para nós, mas isso se aplica ao fato de ter se tornado uma coisa comum no dia a dia, todos dia fato ir ao mercado podemos encontrar uma variedades de vegetais, hortaliças e frutas, mas as antigas civilizações não tinham essa facilidade dias atuais por conta do domínio da irrigação, com o passar do tempo eles começaram a dominar a técnica da irrigação, os egípcios foram um dos primeiros a fazerem canais de irrigação, onde também usavam para acumular água para quando o Rio Nilo não estava em suas grandes cheias. De tempos em tempos a humanidade tem avançado na tecnologia, o que possibilita hoje a implementação da tecnologia na agricultura. 
Com isso levando em consideração as condições do tempo (temperatura e umidade do ar) e do solo (umidade), podemos monitorar e irrigar as plantas com uma maior precisão, e com isso foram implantados sensores onde monitoram as condições em que o solo necessita de ser irrigado, ou seja, antes de irrigar é analisado se a planta realmente tá precisando, é analisado a temperatura, umidade do ar e umidade do solo, mas além disso é preciso analisar a hora, primeiro para criar uma constância, e segundo para que haja uma garantia de que a planta vai realmente aproveitar os nutrientes da água, pois se a planta for irrigada em um momento muito quente a água tende a evaporar mais rápido e assim a planta não aproveita os nutrientes. E com isso, é possível economizar água, regular o tipo de irrigação para diferentes tipos de plantas de maneira fácil e evitar a irrigação desnecessária na planta.

     #2 O  TRABALHO PROPOSTO

Foram trabalhadas as seguintes hipóteses, um robô, cujo a tarefa é irrigar plantas, pudesse ser mais eficiente analisando as condições climáticas e o solo, e a partir disso irrigar plantas com uma maior precisão. A partir disso foi construído um robô com um Arduino, que será a parte central da construção, ele efetuará análises sobre qual é o horário ideal, a umidade do ar, umidade do solo, a temperatura ambiente e o quanto de água foi predeterminado, e a partir disso ele usa sensores, são eles: DHT11, fazendo o envio de dados da temperatura e umidade do ar, DS1307 (RTC), fazendo o envio de dados da hora, LM393 e sonda, fazendo o envio de dados da umidade de solo, para acionar a água foi usado dois tipos de motores uma válvula solenóide e um motor que é usado no projeto inicial, para que o usuário não fique de fora de nenhum dos dados apresentados, foi implementado um display de LCD 16X2, onde ele acompanha temperatura, umidade do ar e hora. Com esses sensores é possível evitar o desperdício de água desnecessário, a irrigação desnecessária e regulagem fácil para diferentes tipos de planta, cumprindo assim a necessidade de cada planta.
O fluxograma do projeto pode ser acessado pelo seguinte link:
https://drive.google.com/file/d/1AkSsoaOgtpK2hAixynmBZbx5QJxvESSO/view?usp=sharing

    #3 MATERIAIS E MÉTODOS

Neste trabalho, o projeto geral será separado em partes, que serão nomeadas como testes primários e testes secundários. Nos testes primários, serão testadas se cada parte do projeto está funcionando da forma que é esperada com a análise das diferentes formas de usá-lo, aqui estão separados todos os componentes em relação com o arduino, ou seja, é testado aqui o DHT11 e o arduino, serão impressas as informações no “Serial Monitor”, que é disponibilizado na  IDE (Ambiente de Desenvolvimento Integrado) do arduino, observa-se neste teste a precisão e sensibilidade em relação ao Datasheet. Nos testes secundários, será testada cada peça em conjunto, com resultados mais próximos do real e dessa forma evitando erros para a parte mais completa, onde todas as peças funcionam juntas e o projeto se encontra pronto para o uso, ou seja, testo aqui o DHT11,   DS1307, Display e o arduino, analiso aqui se as informações estão sendo imprimidas de forma esperada no Display, evitando assim erros de código ou de ligação entre este conjunto.

     #4 RESULTADOS E DISCUSSÃO

O projeto é acionado quando todas as variaveis dão como verdadeiras. Veja as fotos a seguir:

![Atualização 1 README png](https://user-images.githubusercontent.com/86723326/137413693-fc784b48-4f3d-454d-b9ec-ac96099735f2.png)

Em uma situação hipotética, contando com o botão acionado, temos uma cidade cujo a temperatura média é de aproximadamente 27.0 graus Celsius, e a umidade relativa do ar de aproximadamente 40%, é considerado estes dados como padrão, é esperado que variem, com isso supondo um dia em que a temperatura de acordo com o sensor está apontando 30.5 graus Celsius e a umidade está abaixo de 40%, em uma época de seca, ou seja, de acordo com a foto 1 temos todas as variaveis verdadeiras e com isso acionará o sistema, mas caso uma destas variaveis estaja falso, sendo temperatura, umidade do ar ou do solo, não acionará o sistema, a menos que seja o acionamento padrão, contando apenas com a variavel hora, e depois disso sistema irá verificar as de acordo com as horas sendo elas, 15:00 ou 16:00 ou 17:00.

![Atualização 2 README](https://user-images.githubusercontent.com/86723326/137413697-4fc887e1-d7d7-46cc-99df-dc57b97e4033.png)

Em uma situação hipotetica, contando com o botão não acionado, temos apenas o acionamento padrão onde não depende de outras variaveis, a não ser a variavel hora, como é mostrado na foto 2.
    
    #5 CONCLUSÕES

Um projeto interessante de ter sido feito e planejado, com ele evitamos o desperdício de água, podemos ter mais plantas sem nos preocupar com a irrigação delas, podemos ter um maior cuidado com nossas plantas, mas ainda tem muito o que aperfeiçoar, por exemplo interligar este sistema a um sistema de casa inteligente, aperfeiçoar esse projeto para grandes escalas, melhorar onde se guarda todo o circuito. Recomendo a todos tentar fazer assim, lutas, desafios, aprendizados, mas no final ver tudo isso funcionando é gratificante, e estude cada vez mais, tem sempre algo para aperfeiçoar.

    #REFERÊNCIAS BIBLIOGRÁFICAS

MANUAL 10 PROJETOS PRÁTICOS 
https://flaviobabos.com.br/wp-content/uploads/2020/11/Manual-10-Projetos-Praticos-para-Aprender-Arduino.pdf?vgo_ee=rqbHcO8hTfuTqCbRdj4IMwA3SuMkJhmkGexv49sZvNU%3D

SISTEMAS DE IRRIGAÇÃO PARA JARDINS E GRAMADOS
https://www.rainbird.com.br/upload/ferramentas-de-trabalho/Artigos/Irrigacao-para-Paisagismo.pdf

Você sabe como regar corretamente suas plantas?
Leia mais em: https://www.gazetadopovo.com.br/haus/paisagismo-jardinagem/voce-sabe-como-regar-corretamente-suas-plantas/

Copyright © 2021, Gazeta do Povo. Todos os direitos reservados.

Monk, Simon. 30 projetos com Arduino [recurso eletrônico]/Simon Monk; tradução: Anatólio Laschuk. - 2.ed. - Dados eletrônicos. - Porto Alegre : Bookman, 2014.

Oliveira, Cláudio Luís Vieira. Aprenda Arduino - Uma abordagem prática/ [texto de Cláudio Luís Vieira Oliveira, Humberto Augusto Piovesana Zanetti, Cristina Becker Matos Nabarro e Júlio Alberto Vansan Gonçalves]. - Duque de Caixas: Katzen Editora, 2018.