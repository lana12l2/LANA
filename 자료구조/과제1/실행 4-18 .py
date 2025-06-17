class Sym:
    OPEN_B = 1
    CLOSE_B = 2
    PLUS = 3
    MINUS = 4
    TIMES = 5
    DIVIDE = 6
    MOD = 7
    OPERAND = 8

class Expression:
    def __init__(self, expr):
        self.stack = []
        self.size = 100
        self.expr = expr
        self.output = []
        self.top = -1

    def push(self, item):
        self.top += 1
        self.stack.append(item)

    def pop(self):
        if self.top > -1:
            self.top -= 1
            return self.stack.pop()

    def getSymtype(self, sym):
        if sym == '(':
            return Sym.OPEN_B
        elif sym == ')':
            return Sym.CLOSE_B
        elif sym == '+':
            return Sym.PLUS
        elif sym == '-':
            return Sym.MINUS
        elif sym == '*':
            return Sym.TIMES
        elif sym == '/':
            return Sym.DIVIDE
        elif sym == '%':
            return Sym.MOD
        else:
            return Sym.OPERAND

    def eval_postfix(self):
        for sym in self.expr:
            sym_type = self.getSymtype(sym)
            if sym_type == Sym.OPERAND:
                self.push(float(sym))
            else:
                op2 = self.pop()
                op1 = self.pop()
                if sym_type == Sym.PLUS:
                    self.push(op1 + op2)
                elif sym_type == Sym.MINUS:
                    self.push(op1 - op2)
                elif sym_type == Sym.TIMES:
                    self.push(op1 * op2)
                elif sym_type == Sym.DIVIDE:
                    self.push(op1 / op2)
                elif sym_type == Sym.MOD:
                    self.push(op1 % op2)
            print(self.stack)
        return self.pop()

    def infix_postfix(self):
        for token in self.expr:
            if token.isdigit() or '.' in token:
                self.output.append(token)
            elif token == '(':
                self.push(token)
            elif token == ')':
                sym = self.pop()
                while sym != '(':
                    self.output.append(sym)
                    sym = self.pop()
            else:
                while self.top > -1 and self.precedence(self.stack[-1]) >= self.precedence(token):
                    self.output.append(self.pop())
                self.push(token)
            print(self.stack)
        while self.top > -1:
            self.output.append(self.pop())

    def precedence(self, op):
        if op == '(':
            return 0
        elif op in ['+', '-']:
            return 1
        elif op in ['*', '/', '%']:
            return 2

def match_b(string):
    stack = []
    for ch in string:
        if ch == '(':
            stack.append(ch)
        elif ch == ')':
            if not stack:
                print("=> 괄호 매칭 오류")
                return False
            stack.pop()
    if stack:
        print("=> 괄호 매칭 오류")
        return False
    return True

def segment(exp):
    exp2 = []
    number = ''
    for ch in exp:
        if ch.isdigit() or ch == '.':
            number += ch
        else:
            if number:
                exp2.append(number)
                number = ''
            if ch in '+-*/()%':
                exp2.append(ch)
    if number != '':
        exp2.append(number)
    return exp2

# 실행
test = input("중위수식을 입력하세요: ")

if match_b(test):
    expr = segment(test)
    e = Expression(expr)
    print("중위수식 =", expr)
    e.infix_postfix()
    print("후위수식 =", e.output)
    e.stack = []
    e.top = -1
    e.expr = e.output
    print("값 =", e.eval_postfix())

