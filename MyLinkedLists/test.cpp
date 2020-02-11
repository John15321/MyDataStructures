class Funcionario{
    string nome;
public:
    Funcionario(const string & n): nome(n){}
    string getNome()const {
        return nome;
    }
    virtual void cumprimentar(){};
};




class Doutor : public Funcionario{
public:
    Doutor(const string & n): Funcionario(n){}
    void cumprimentar(){
        cout << "Bom dia Doutor "<< this->getNome() << endl;
    }
};





class Engenheiro : public Funcionario{
public:
    Engenheiro(const string & n): Funcionario(n){}
    void cumprimentar(){
        cout << "Bom dia Engenheiro "<< this->getNome() << endl;
    }
};






class Empresa {
    vector<Funcionario> funcionarios;
public:
    Empresa(){
        funcionarios.push_back(Doutor("D1"));
        funcionarios.push_back(Doutor("D2"));
        funcionarios.push_back(Engenheiro("E1"));
        funcionarios.push_back(Engenheiro("E2"));
    }

    void cumprimentar(){
        for (auto & f : funcionarios){
            f.cumprimentar();
        }
    }
};