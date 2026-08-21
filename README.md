# Projeto RPN
Nesse projeto será explorado como criar uma calculadora simples se utilizando a Notação Polonesa Reversa (RPN do inglês _**r**everse **p**olish **n**otation_ ).
## Motivação
A grande motivação para a concepção desse projeto é a pratica de programação se utilizando dos conceitos utilização de pilhas.
## Ambientação
A seguir será listada o Sistema Operacional (SO), a IDE, o versionador, a linguagem adotada e a nuvem para backup no ambiente de desenvolvimento:

- **SO:** Windows 11 Enterprise versão 24H2 compilação 26100.2605.
- **IDE:** CLion 2026.2.1.
- **Versionador:** Git v2.51.2.
- **Linguagem adotada:** C++ 20.
- **Nuvem adotada:** GitHub, na conta github.com/athilas no repositório com mesmo nome do projeto.

## Como funciona a notação


A RPN é uma notação matemática que se escreve de uma forma que facilita sua utilização na programação por trabalhar basicamente com o mesmo conceito de pilhas. A tabela a seguir compara a notação convencional e a RPN.

|Notação Convencional|Notação Polonesa Reversa|
|---|---|
|a+b|a b +|
|(a+b)/c|a b + c /|
|((a * b)-(c * d))/(e * f)|a b * c d * - e f * /|

### Exemplo de cálculo utilizando pilha

A seguir iremos executar o passo a passo para a solução de uma expressão utilizando a rpn. Para tal tomemos como exemplo a seguinte expressão:

> 5 + ((1 + 2) x 4) - 3

Agora transformemos em rpn:

> 5 1 2 + 4 x + 3 -

Lendo a notação da esquerda para direita, os passos para realizar o cálculo são o seguinte:

1. Leia um caractere da notação.
2. Se for um operando, empilhe-o, isto é, coloque-o no topo da pilha.
3. Mas se ele for um operador, retire o penúltimo e último operando da pilha. Faça a operação que se pede entre eles e coloque o resultado de volta na pilha.
4. Repita todos os passos acima até que toda a notação seja lida.
5. O resultado será o que sobrou na pilha.

<table >
	<thead>
		<tr>
			<th>Notação</th>
			<th>Operação a ser realizada</th>
			<th colspan="3">Pilha</th>
			<th>descrição</th>
		</tr>
	</thead>
	<tbody>
		<tr >
			<td>5</td>
			<td>Colocar 5 na pilha</td>
			<td>5</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>1</td>
			<td>Colocar 1 na pilha</td>
			<td>5</td>
			<td>1</td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>2</td>
			<td>Colocar 2 na pilha</td>
			<td>5</td>
			<td>1</td>
			<td>2</td>
			<td> </td>
		</tr>
		<tr>
			<td>+</td>
			<td>Soma</td>
			<td>5</td>
			<td>3</td>
			<td> </td>
			<td>Pegue os dois últimos valores da pilha(1, 2), faça 1 + 2 e coloque o resultado (3) de volta na pilha.</td>
		</tr>
		<tr>
			<td>4</td>
			<td>Colocar 4 na pilha</td>
			<td>5</td>
			<td>3</td>
			<td>4</td>
			<td> </td>
		</tr>
		<tr>
			<td>x</td>
			<td>Multiplicação</td>
			<td>5</td>
			<td>12</td>
			<td></td>
			<td>Pegue os dois últimos valores da pilha(3, 4), faça 3 x 4 e coloque o resultado (12) de volta na pilha. </td>
		</tr>
		<tr>
			<td>+</td>
			<td>Soma</td>
			<td>17</td>
			<td></td>
			<td></td>
			<td>Pegue os dois últimos valores da pilha(12, 5), faça 12 + 5 e coloque o resultado (17) de volta na pilha. </td>
		</tr>
		<tr>
			<td>3</td>
			<td>Colocar 3 na pilha</td>
			<td>17</td>
			<td>3</td>
			<td></td>
			<td> </td>
		</tr>
		<tr>
			<td>-</td>
			<td>Subtração</td>
			<td>14</td>
			<td></td>
			<td></td>
			<td>Pegue os dois últimos valores da pilha(17, 3), faça 17 - 3 e coloque o resultado (14) de volta na pilha. </td>
		</tr>
		<tr>
			<td>Fim</td>
			<td>Tomar Resultado</td>
			<td>14</td>
			<td></td>
			<td></td>
			<td>A notação foi lida por completo. O resultado é o que sobrou na pilha (14)</td>
		</tr>
	</tbody>
	<caption>Cálculo com pilha na notação RPN</caption>
</table>

