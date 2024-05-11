opcao = "S"
def mostrar(bench):
    if bench >= 30000:
        print("\033[1;32mPontuação show de bola! Estralou no alto desempenho. Vale muito a pena usar esse processador (Ainda mais com uma placa de vídeo forte).\033[0m")
    elif bench >= 17000:
        print("\033[1;92mÉ um processador de alto desempenho. Para aplicativos e jogos pesados ele funciona muito bem (placa de vídeo conta muito também).\033[0m")
    elif bench >= 9000:
        print("\033[1;94mÉ uma pontuação boa, de médio desempenho. É um processador muito bom, vale a pena usar. Dá para tarefas básicas, intermediárias e até jogar alguns jogos. Para ter um bom desempenho, você também precisa ter muita memória RAM, um SSD e uma placa de vídeo.\033[0m")
    elif bench >= 7000:
        print("\033[1;93mÉ um processador de médio desempenho com pontuação muito boa. Ele vai além das tarefas básicas. Dá para rodar programas como SketchUp, AutoCAD, CorelDraw e vários jogos com uma placa de vídeo.\033[0m")
    elif bench >= 5000:
        print("\033[1;33mEle não é um processador muito forte, você não vai conseguir jogar qualquer jogo. Ele está no começo do médio desempenho. Para tarefas do dia a dia, esse processador dá e sobra. Também dá para jogar alguns jogos nele (preferencialmente com uma placa de vídeo para melhor desempenho) como CS:GO.\033[0m")
    elif bench >= 3000:
        print("\033[1;95mEmbora ele seja um processador de baixo desempenho, se você usar para trabalho, estudo... \nAté para jogar alguns jogos como LOL, Roblox e CS:GO dá para usar tranquilamente.\033[0m")
    elif bench >= 1500:
        print("\033[1;31mPara estudar, trabalhar e jogar jogos mais simples você tem um ótimo processador.\033[0m")
    elif bench >= 1000:
        print("\033[0;31mIndicado para tarefas básicas.\033[0m")
    elif bench >= 800:
        print("\033[1;38mEstá no limite da pontuação utilizável. Só é útil para acessar a internet e algumas tarefas corriqueiras.\033[0m")
    else:
        print("\033[1;31mNão compensa usar esse processador.\033[0m")


print("Bem-vindo ao interpretador de pontuação do PassMark (CPU Benchmark)")
print("O compilador do programa só lê caracteres no padrão UTF-8 (sem acentos).")

while opcao == "S":
    pontuacao = int(input("Digite a pontuação do processador: "))
    mostrar(pontuacao)
    opcao = input("Deseja continuar vendo feedbacks (S/N)?")
