# Calculator / Calculadora
# Script para criar uma calculadora no Python
def adicionar(a, b):
    return a + b

def subtrair(a, b):
    return a - b

def multiplicar(a, b):
    return a * b

def dividir(a, b):
    if b != 0:
        return a / b
    else:
        return "Erro: divisão por zero"

print("Calculadora Simples")
print("Operações disponíveis:")
print("1 - Adição")
print("2 - Subtração")
print("3 - Multiplicação")
print("4 - Divisão")

operacao = input("Digite o número da operação desejada: ")

num1 = float(input("Digite o primeiro número: "))
num2 = float(input("Digite o segundo número: "))

if operacao == "1":
    resultado = adicionar(num1, num2)
elif operacao == "2":
    resultado = subtrair(num1, num2)
elif operacao == "3":
    resultado = multiplicar(num1, num2)
elif operacao == "4":
    resultado = dividir(num1, num2)
else:
    resultado = "Operação inválida"

print("Resultado: ", resultado)
