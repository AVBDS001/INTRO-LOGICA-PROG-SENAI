<html>
  <head></head>
  <body>
    <header>
    <h1>Anotações Siistemas operacionais</h1>
      <p><strong>André Vinicius / Data: 31/08/2022</strong></p>
    </header>
    <hr>
    <p><strong>O que é um sistema operacional</strong></p>
    <ul>
      <li>O sistema operacional é o elo entre o hardware do computador e as aplicações instaladas no seu computador.</li>
      <li>O sistema operacional é um conjunto de softwares capaz de realizar a comunicação entre o computador e o usuário, permitindo que você execute vários aplicativos simultaneamente e realize diversas tarefas.</li>
    </ul>
    <hr>
    <p><strong>Tipos de Sistemas Operacionais</strong></p>
    <ul>
      <li><b>Sistema operacional de rede</b></li>
         <ul>
           <li>Sistemas que compartilham dados e periféricos, implementados com o uso de usuário e senha para acesso, tem como objetivo o compartlhamento entre computadores ligados em rede.</li>
         </ul>
         <br>
      <li><b>Sistemas de tempo real</b></li>
         <ul>
           <li>possibilitam o atendimento das solicitações de forma rápida, e em tempo real, por exemplo: o sistema de uma UTI ou de um avião.</li>
         </ul>
         <br>
      <li><b>Sistemas embarcados</b></li>
         <ul>
           <li>Sua principal característica é o tamanho reduzido e o gerenciamento de meória na CPU.</li>
           <li>programas e sistemas embutidos em microprocessadores, que executam tarefas específicas em um aparelho.</li>
         </ul>
         <br>
    </ul>
    <hr>
    <p><strong>Estruturas dos sistemas operacionais</strong></p>
    <ul>
      <li><b>Sistema Monolítico</b></li>
         <ul>
             <li>Esta estrutura foi a primeira adotada pelos sistemas operacionais. Sabe-se que os sistemas operacionais são escritos formando um conjunto de rotinas, desta forma cada rotina pode chamar outra rotina ou se comunicar.</li>
         </ul>
      <li><b>Sistema Microkernel ou hibrido</b></li>
         <ul>
              <li>No microkernel encontram-se somente os programa essenciais. Os demais devem ser implementados pelo usuário. Ampliar o sistema opercional torna-se simples, por que você não altera o microkernel.</li>
         </ul>
         <br>
    </ul>
    <hr>
    <p><strong>Classificação quanto execução de tarefas</strong></p>
     <ul>
         <li><b>Sistemas Monotarefa</b></li>
             <ul>
                 <li>Foram os primeiros sistemas, executam uma tarefa de cada vez. Um sistema monotarefa bastante conhecido é o MS-DOS</li>
             </ul>
       <li><b>Sistema Multitarefa</b></li>
           <ul>
                <li>Permite execução de várias tarefas simultâneas, uma coisa bastante interessante que acontece nestes sistemas é a elevação da utilização da CPU, que pode chegar a 90% de utilização</li>
                <li>A memória RAM é alocada de forma mais eficiente, ou seja, vários programas estão alocados na memória e revezando o tempo de utilização da CPU, a RAM fica dividida em partes para cada programa em execução no computador</li>
                <li>Com o advento das CPUs de vários núcleos, o multitarefa ficou ainda melhor, pois é possível ter o benefício extra de processamento paralelo, onde cada tarefa pode ser executada paralelamente.</li>
           </ul>
           <br>
     </ul>
    <hr>
    <p><strong>Classificação quanto a quantidade de usuários</strong></p>
    <ul>
      <li><b>Sistemas monousuário</b></li>
          <ul>
             <li>Nos primeiros sistemas operacionais da primeira geração, apenas um usuário podia usar o sistema por vez.Na verdade, mais de um usuário poderia usar o sistema, porém interpretaria como se fora um único usuário, fazendo com que o trabalho de um pudesse ser lido ou alterado por outro.</li>
          </ul>
      <li><b>Sistemas multiusuário</b></li>
          <ul>
            <li>Com o surgimento da multitarefa veio o sistema que permite o uso compartilhado do computador por dois ou mais usuários. Este tipo de sistema controla o compartilhamento de recursos entre os usuários, não permitindo que um usuário interfira nas atividades dos deamis.</li>
          </ul>
    </ul>
    <hr>
    <p><strong>Arquitetura 32 bits e 64 bits</strong></p>
    <ul>
      <li>Os termos 32 bits e 64 bits fazem referência ao tamanho do seu registro, ou seja, local onde são armazenados os dados(endereços) que precisam ser acessados mais rapidamente.</li>
       <li>Estes endereços ficam armazenados na memória do computador, por este motivo computadores com processador de 32 bits conseguem aproveitar no máximo 4GB de RAM mesmo que o computador possua mais memória.</li>
      <li>Cada dispositivo instalado no computador possui um <b>DRIVE</b> específico para o funcioanmento perfeito deste dispositivo. Os DRIVES possuem informações importantes para a comunicação do dispositivo e o sistema operacional.</li>
    </ul>
    <hr>
    <p><strong>Formatação</strong></p>
    <ul>
      <li><b>Formatação física:</b> formatação realizada na criação do disco, ou seja, na fábrica. Está formatação cria setores, cilindros, trilhas e ainda separa as trilhas defeituosas (bad Block).</li>
      <li><b>Formatação lógica:</b> necessária para o reconhecimento do sistema operacional, não altera a estrutura criada pela formatação física e pode ser realizada quantas vezes você quiser.</li>
    </ul>
    <hr>
    <p><strong>Tipos de Sistemas de Arquivo</strong></p>
    <ul>
      <li><b>Sistemas de arquivo:</b> são recipientes que contêm dados, ou seja, são unidades de armazenamento lógico. Os sistemas de arquivos são uma maneira de armazenar informações em disco físico e de lê-las posteriormente.</li>
      <li><b>FAT16:</b> é um sistema ultrapassado mas foi utilizado nos antigos sistemas operacionais da Microsoft, cartões SD e em pen drives. Possuia um gerenciamento máximo de 2GB</li>
      <li><b>FAT32:</b> Surgiu para corrigir os problemas de segurança do seu antecessor. Possui capacidade de gerenciamento de 32 bits, fazendo com que pudesse gerenciar discos de até 2TB. Outra mudança significativa foi o aumento de nomes dos aruivos passando para até 256 caracteres. A segurança do FAT32 também não é muito eficiente, arquivo padrão de pen drives, por isso a facilidade com que estes discos pegam vírus.</li>
      <li><b>NFTS:</b> Surgiu por conta da falta de segurança do FAT. É mais seguro que o FAT. Permite auditoria dos arquivos, cota de disco, criptografia dos dados, recuperação de arquivos e é tolerante a falhas.</li>
      <li><b>EXT:</b> sistema de arquivo estendido, primeiro sistema utilizado pelos sistemas operacionais Linux.</li>
      <li><b>EXT2:</b> atualização do sistema EXT, corrige as falhas do antecessor, nome dos arquivos passou a ter 255 caracteres, passou a reconhecer discos de 2TB, partições podem ser de até 32TB.</li>
      <li><b>Existe também o EXT3 e o EXT4 que são atualizações do EXT, o EXT4 é utilizado no armazenamento das arquiteturas de computadores de 64 bits.</b.<li>
    </ul>  
  </body>
</html>
