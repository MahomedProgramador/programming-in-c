
#include <locale.h> // set locale()
#include <stdlib.h> //System()
#include <iostream> // cin e cout
#include <iomanip> // Setprecision


// Indicar que se está a usar o espaço de nomes "std" - STanDard" ou padrão
using namespace std;



//***************************************
//* Definição da classe
//***************************************

class Produto
{
    private:
    //1 - Dados da classe
    int         codProduto;
    string   designacao;
    float      quantidadeUnidade;
    string   unidade;
    int         numUnidades;
    float      preco;
    float      taxaIVA;
    string   dataValidade;
    string   seccao;
    bool precisaFrio;
    // Extra
    static int numProdutos;


    public:
        // 2. Funções-Membro ou métodos
        //2.1 Funções Construtoras
        // Construtor sem argumentos
        Produto()
        {
            codProduto = 0; designacao = ""; quantidadeUnidade = 0;
            unidade = ""; numUnidades = 0; preco = 0; taxaIVA = 0; dataValidade = "";
            seccao = ""; precisaFrio = false;

            // Extra
            cout<<"Criação de um novo produto."<<endl;
            numProdutos++;  // Aumento do número de produtos.
            cout<<"Número de produtos: " <<numProdutos<<"."<<endl;
        }

        //Construtor com 2 argumentos
        Produto(int codP, string d)
        {
            codProduto = codP; designacao = d; quantidadeUnidade = 0;
            unidade = ""; numUnidades = 0; preco = 0; taxaIVA = 0; dataValidade = "";
            seccao = ""; precisaFrio = false;
        }

        //Construtor com 5 argumentos
        Produto(int codP, string d, float qU, string unid, int numU)
        {
            codProduto = codP; designacao = d; quantidadeUnidade = qU;
            unidade = unid; numUnidades = numU; preco = 0; taxaIVA = 0; dataValidade = "";
            seccao = ""; precisaFrio = false;

        }

                //Construtor com 6 argumentos
        Produto(int codP, string d, float qU, string unid, int numU, string dV)
        {
            codProduto = codP; designacao = d; quantidadeUnidade = qU;
            unidade = unid; numUnidades = numU; preco = 0; taxaIVA = 0; dataValidade = dV;
            seccao = ""; precisaFrio = false;
        }

                       //Construtor com 8 argumentos
        Produto(int codP, string d, float qU, string unid, int numU, string dV, float tIVA)
        {
            codProduto = codP; designacao = d; quantidadeUnidade = qU;
            unidade = unid; numUnidades = numU; preco = 0; taxaIVA = tIVA; dataValidade = dV;
            seccao = ""; precisaFrio = false;
        }

                               //Construtor com todos os argumentos
        Produto(int codP, string d, float qU, string unid, int numU, float p, float tIVA,  string dV, string sec, bool pFrio)
        {
            codProduto = codP; designacao = d; quantidadeUnidade = qU;
            unidade = unid; numUnidades = numU; preco = p; taxaIVA = tIVA; dataValidade = dV;
            seccao = sec; precisaFrio = pFrio;
        }

        // 2.2 Função Destrutora
        // Função chamada antes da eliminação do objecto. Tem o mesmo nome da classe.
        ~Produto()
        {
            cout<<"Eliminação de um objecto 'Produto':  ";
            cout<<designacao<<".";
            cout<<endl;
            // Extra
            numProdutos--;
            cout<<"Número de produtos: "<<numProdutos<<"."<<endl;
        }


        //2.3 Funções "Setters"
        // Funções de atribuição de valores a cada um dos dados do objecto
        // Pode-se inserir código de validação

        void setCodProduto (int codP)
        {
            codProduto = codP;
        }

        void setDesignacao (string d)
        {
            designacao = d;
        }

        void setDesignacao (char * d)
        {
            designacao.assign(d);
        }

         void setQuantidadeUnidade(float qU)
        {
            quantidadeUnidade = qU;
        }

         void setUnidade(string u)
        {
            unidade = u;
        }

          void setUnidade(char * u)
        {
            unidade = u;
        }

        void setNumUnidades(int nU)
        {
            numUnidades = nU;
        }

        void setPreco(float p)
        {
            preco = p;
        }

        void setTaxaIVA(float tIVA)
        {
            taxaIVA = tIVA;
        }

        void setDataValidade(string dV)
        {
            dataValidade = dV;
        }

        void setDataValidade(char * dV)
        {
            dataValidade = dV;
        }

        void setSeccao(char * s)
        {
            seccao = s;
        }

        void setSeccao(string s)
        {
            seccao = s;
        }

        void setPrecisaFrio(bool pF)
        {
            precisaFrio = pF;
        }

        // 2.4 Funções "Getters"
        // Funções de obtenção de valores de cada um dos dados do objecto.
        // Pode-se inserir código de verificação de acesso

        int getCodProduto ()
        {
            return codProduto;
        }

        string getDesignacao ()
        {
            return designacao;
        }

        float getQuantidadeUnidade ()
        {
            return quantidadeUnidade;
        }

        string getUnidade()
        {
            return unidade;
        }

        int getNumUnidades()
        {
            return numUnidades;
        }

        float getPreco()
        {
            return preco;
        }

        float getTaxaIVA()
        {
            return taxaIVA;
        }

         string getDataValidade()
        {
            return dataValidade;
        }

        string getSeccao()
        {
            return seccao;
        }

        bool getPrecisaFrio()
        {
            return precisaFrio;
        }
        int getNumProdutos()
        {
            return numProdutos;
        }


        // 2.5 Funções de leitura
        void leCodProduto()
        {
            int cp = 0;
            setCodProduto(cp);
            fflush(stdin);
        }

        void leDesignacao()
        {
            const int MAXNOME = 100;
            char texto[MAXNOME];
            for(int cLetra = 0; cLetra < MAXNOME; cLetra++)
                texto[cLetra] = '\n';

            cout<<"Insira a designação do produto: ";
            cin.getline(texto, MAXNOME, '\n');
            setDesignacao(texto);
        }

        void leUnidade()
        {
            const int MAXNOME = 100;
            char texto[MAXNOME];

            for(int cLetra = 0; cLetra < MAXNOME; cLetra++)
                texto[cLetra] = '\0';

            cout<<"Insira a unidade de medida por produto (litro, kilo, metro):";
            cin.getline(texto, MAXNOME, '\n');
            setUnidade(texto);
        }
        void leQuantidadeUnidade()
        {
            float qUnidade = 0;
            cout <<"Insira a quantidade por unidade de produto: ";
            cin >>qUnidade;
            setQuantidadeUnidade(qUnidade);
            fflush(stdin);
        }

        void leNumUnidades()
        {
            int nUnidades = 0;
            cout << "Insira o número de unidades: ";
            cin>>nUnidades; setNumUnidades(nUnidades);
            fflush(stdin);
        }

        void lePreco()
        {
                float p = 0;
                cout<<"Insira o preço por unidade de produto: ";
                cin>>p; setPreco(p);
                fflush(stdin);
        }

        void leTaxaIVA()
        {
            float tIVA = 0;
            cout <<"Insira a taxa de IVA do produto(%): ";
            cin >> tIVA; setTaxaIVA(tIVA);
            fflush(stdin);
        }
        void leDataValidade()
        {
            const int MAXNOME = 100; char texto[MAXNOME];
            for(int cLetra = 0; cLetra < MAXNOME; cLetra ++)
            {
                texto[cLetra] = '\0';
            }
            cout<<"Insira a data de validade do produto: ";
            cin.getline(texto, MAXNOME, '\n');
            setDataValidade(texto);
        }

        void leSeccao()
        {
            const int MAXNOME = 100; char texto[MAXNOME];
            for(int cLetra = 0; cLetra < MAXNOME; cLetra ++)
            {
                texto[cLetra] = '\0';
            }
            cout<<"Insira a secção do produto: ";
            cin.getline(texto, MAXNOME, '\n');
            setSeccao(texto);
        }
        void lePrecisaFrio()
        {
            char letra = '\0';
            cout<<"O produto precisa de frio (S/N)? ";
            cin>>letra;
            if(letra == 'S' || letra == 's')
                setPrecisaFrio(true);
            else
                setPrecisaFrio(false);
        }

        void leTudoProduto()
        {
            cout <<"\nRecolha dos dados de um produto: "<<endl;
            leCodProduto(); leDesignacao();
            leUnidade(); leQuantidadeUnidade(); leNumUnidades();
            lePreco(); leTaxaIVA(); leDataValidade(); leSeccao(); lePrecisaFrio();
        }

        //2.6 Funções de Escrita
        void mostraCodProduto()
        {
            cout<<"Código do Produto: "<<getCodProduto()<<"."<<endl;
        }

        void mostraDesignacao()
        {
            cout<<"Designação: "<<getDesignacao()<<"."<<endl;
        }

        void mostraUnidade()
        {
            cout<<"Unidade: "<<getUnidade()<<"."<<endl;
        }
        void mostraQuantidadeUnidade()
        {
            cout<<fixed<<setprecision(2)<<"Quantidade por unidade: "
            <<getQuantidadeUnidade()<<" "<<getUnidade()<<"s."<<endl;
        }

        void mostraNumUnidades()
        {
            cout<<"Número de unidades: "<<getNumUnidades()<<"."<<endl;
        }

        void mostraPreco()
        {
            cout<<fixed<<setprecision(2)<<"Preço: "
            <<getPreco()<<" euro(s). "<<endl;
        }

        void mostraTaxaIVA()
        {
            cout<<fixed<<setprecision(2)<<"Taxa de IVA: "
            <<getTaxaIVA()<<"%."<<endl;
        }

        void mostraDataValidade()
        {
            cout<<"Data de validade; "<<getDataValidade()<<"."<<endl;
        }

        void mostraSeccao()
        {
            cout<<"Secção: "<<getSeccao()<<"."<<endl;
        }

        void mostraPrecisaFrio()
        {
            cout<<"Precisa de frio? ";
            if(getPrecisaFrio()) cout<<"Sim.";
            else                         cout<<"Não.";
            cout<<endl;
        }

        void mostraTudoProduto()
        {
            cout<<"\nApresentação dos dados de um produto; "<<endl;
            mostraCodProduto(); mostraDesignacao();
            mostraUnidade(); mostraQuantidadeUnidade();
            mostraNumUnidades(); mostraPreco(); mostraTaxaIVA();
            mostraDataValidade(); mostraSeccao(); mostraPrecisaFrio();
            system("pause");
        }

        // 2.7 Outras funções
        float precoComIVA(float preco, float taxaIVA);

        void mostraPrecoComIVA()
        {
            cout<<fixed<<setprecision(2)<<"Preço com IVA: "<<precoComIVA(getPreco(), getTaxaIVA())
            <<"euro(s)."<<endl;
        }

    // 3. Redefinição / Sobrecarga de Operadores
    // Redefinição do operador soma
    Produto operator+ (const Produto& p)
    {
        Produto produtoResultante;
        //"this" - aponta para o objecto que é o primeiro operando
        // "p" - Objecto que funciona como argumento da função do operador.

        produtoResultante.designacao = this->designacao + " mais " + p.designacao;
        // "+" -> Operador da concatenação.
        produtoResultante.numUnidades = this -> numUnidades + p.numUnidades;
        return produtoResultante;
    }

    // Redefinição do operador diferença
    Produto operator- (const Produto& p)
    {
        Produto produtoResultante;
        produtoResultante.designacao = this->designacao + "menos" +p.designacao;
        produtoResultante.preco = this -> preco - p.preco;
        return produtoResultante;
    }

    bool operator> (const Produto& p)
    {
        return (this->preco > p.preco);
    }

        bool operator< (const Produto& p)
    {
        return (this->preco < p.preco);
    }

        bool operator== (const Produto& p)
    {
        return (this->preco == p.preco);
    }
}; // Fim da classe.

//Definição de função externa
float Produto::precoComIVA(float preco, float taxaIVA)
{
    return(1+taxaIVA) * preco;
}

//***************************************
//* Função principal
//***************************************

// A variável "static" deve ser declarada e inicializada também fora da classe.
int Produto::numProdutos=0;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// 1. Utilização dos Operadores Soma e diferença
Produto produto1, produto2, somaProduto, difProduto;
produto1.leTudoProduto(); produto1.mostraTudoProduto();

produto2.leTudoProduto(); produto2.mostraTudoProduto();

somaProduto = produto1 + produto2;
somaProduto.mostraTudoProduto();
difProduto = produto1 - produto2;
difProduto .mostraTudoProduto();

// 2. Utilização dos Operadores Relacionais ou de comparação
cout<<endl;
if(produto1.getSeccao() == produto2.getSeccao())
{
    if(produto1 > produto2)
    {
        cout<<produto1.getDesignacao()<<"é mais caro que ";
        cout<<produto2.getDesignacao()<<"."<<endl;
    }
    else if(produto2 < produto1)
    {
        cout<<produto2.getDesignacao()<<"é mais caro que ";
        cout<<produto1.getDesignacao()<<"."<<endl;
    }
      else
    {
        cout<<produto1.getDesignacao()<<" tem o mesmo preço que ";
        cout<<produto2.getDesignacao()<<"."<<endl;
    }
}
else
{
    cout<<"Os produtos não são da mesma secção!!"<<endl;
}
  cout<<"\n";
    system("pause");
    return 0;

} // Fim da função "main()".
