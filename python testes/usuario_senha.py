print("cargo")

usuario= str(input("usuario: "))
senha= str(input("senha: "))

# resultado="acesso liberado" if (usuario=="admin" and senha=="admin123") else "acesso negado"
# print(resultado)

if(usuario== "admin" and senha=="admin123"):
    print(f"Bem vindo {usuario}")

elif(usuario=="funcionario" and senha== "funcionario123"):
    print("acesso liberado")
    
elif(usuario=="convidado" and senha=="convidado123"):
    print("acesso liberado")

else:
    print("acesso negado, tente novamente")   
        