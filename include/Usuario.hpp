#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <string>
#include <vector>

class Usuario {
private:
    std::string nome;
    std::string senha;

public:
    Usuario(const std::string& nome, const std::string& senha);

    std::string criarUsuario() const;
    static void salvarUsuario(const std::string& dados, const std::string& caminho);
    static std::vector<std::string> carregarUsuarios(const std::string& caminho);
    static bool validarUsuario(const std::string& nome, const std::string& senha, const std::vector<std::string>& usuarios);
    static bool usuarioExistente(const std::string& nome, const std::vector<std::string>& usuarios);
};

#endif
