# Defina a string binária
binario = "0010 01 11 111 001 000 11 01 10 1 0000 01 1 1010 111 11 0 000 011 00 1 0000 1 0000 0 01 0100 1 0 010 10 01 1 0 0001 0 010 000 00 111 10 111 0010 001100 001100 001100"

# Separe os números binários
numeros_binarios = binario.split()

# Converta os números binários em caracteres
caracteres = ''.join([chr(int(numero, 2)) for numero in numeros_binarios])

# Escolha o nome do arquivo de saída
nome_arquivo_saida = 'arquivo_convertido.txt'

# Escreva os caracteres em um arquivo de texto
with open(nome_arquivo_saida, 'w') as arquivo_saida:
    arquivo_saida.write(caracteres)

print(f'O arquivo binário foi convertido para {nome_arquivo_saida}.')
