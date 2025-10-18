print("===================================")
print("         MOTO RUSSAS")
print("===================================")

motos = {
    'start': {'vista': 2500, 'parcelado': 3000},
    'pop 100': {'vista': 1000, 'parcelado': 1200},
    'bros': {'vista': 4000, 'parcelado': 4500},
    'biz': {'vista': 1200, 'parcelado': 1900},
    'cg 150': {'vista': 1700, 'parcelado': 2200}
}

def listar_motos():
    print("\n=== TABELA DE MOTOS ===")
    for nome, valores in motos.items():
        print(f"{nome.title()} - À vista: R${valores['vista']:.2f} | Parcelado: R${valores['parcelado']:.2f}")

def vendas():
    listar_motos()
    n = input('\nQual moto você irá querer? ').lower()
    if n in motos:
        a = input('À vista ou em parcelas? ').lower()
        if a == 'a vista':
            print(f'A vista sai: R${motos[n]["vista"]:.2f}')
        elif a == 'parcelas':
            vltotal = motos[n]['parcelado']
            parcelas = int(input('Em quantas vezes você irá parcelar? '))
            vlparcelado = vltotal / parcelas
            print(f'Parcelado em {parcelas}x ficará em R${vlparcelado:.2f} (total R${vltotal:.2f})')
        else:
            print('Opção de pagamento inválida!')
    else:
        print('Moto não encontrada!')

def adicionar_moto():
    nome = input('Digite o nome da moto: ').lower()
    vista = float(input('Digite o valor à vista: '))
    parcelado = float(input('Digite o valor parcelado: '))
    motos[nome] = {'vista': vista, 'parcelado': parcelado}
    print(f'Moto "{nome}" adicionada com sucesso!')

def simulacao_parcelamento():
    listar_motos()
    n = input('\nQual moto você quer simular? ').lower()
    if n in motos:
        preco = motos[n]['parcelado']
        parcelas = int(input('Em quantas vezes quer parcelar? '))
        juros = float(input('Taxa de juros ao mês (%): '))
        juros_decimal = juros / 100

        
        parcela = preco * (juros_decimal * (1 + juros_decimal) ** parcelas) / ((1 + juros_decimal) ** parcelas - 1)
        total = parcela * parcelas

        print(f"\nSimulação para {n.title()}:")
        print(f"{parcelas}x de R${parcela:.2f} com juros de {juros:.2f}% ao mês")
        print(f"Total a pagar: R${total:.2f}")
    else:
        print("Moto não encontrada!")

while True:
    print("\nOpções:")
    print("1 - Vendas")
    print("2 - Adicionar moto")
    print("3 - Simulação de parcelamento (com juros)")
    print("4 - Sair")
    opcao = input("Escolha uma opção: ")

    if opcao == '1':
        vendas()
    elif opcao == '2':
        adicionar_moto()
    elif opcao == '3':
        simulacao_parcelamento()
    elif opcao == '4':
        print("Saindo... Até logo!")
        break
    else:
        print("Opção inválida!")
