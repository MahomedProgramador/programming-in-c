
#include <locale.h> // set locale()
#include <stdlib.h> //System()
#include <iostream> // cin e cout
#include <iomanip> // Setprecision


// Indicar que se est� a usar o espa�o de nomes "std" - STanDard" ou padr�o
using namespace std;



//***************************************
//* Defini��o da classe
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
        // 2. Fun��es-Membro ou m�todos
        //2.1 Fun��es Construtoras
        // Construtor sem argumentos
        Produto()
        {
            codProduto = 0; designacao = ""; quantidadeUnidade = 0;
            unidade = ""; numUnidades = 0; preco = 0; taxaIVA = 0; dataValidade = "";
            seccao = ""; precisaFrio = false;

            // Extra
            cout<<"Cria��o de um novo produto."<<endl;
            numProdutos++;  // Aumento do n�mero de produtos.
            cout<<"N�mero de produtos: " <<numProdutos<<"."<<endl;
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

        // 2.2 Fun��o Destrutora
        // Fun��o chamada antes da elimina��o do objecto. Tem o mesmo nome da classe.
        ~Produto()
        {
            cout<<"Elimina��o de um objecto 'Produto':  ";
            cout<<designacao<<".";
            cout<<endl;
            // Extra
            numProdutos--;
            cout<<"N�mero de produtos: "<<numProdutos<<"."<<endl;
        }


        //2.3 Fun��es "Setters"
        // Fun��es de atribui��o de valores a cada um dos dados do objecto
        // Pode-se inserir c�digo de valida��o

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

        // 2.4 Fun��es "Getters"
        // Fun��es de obten��o de valores de cada um dos dados do objecto.
        // Pode-se inserir c�digo de verifica��o de acesso

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


        // 2.5 Fun��es de leitura
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

            cout<<"Insira a designa��o do produto: ";
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
            cout << "Insira o n�mero de unidades: ";
            cin>>nUnidades; setNumUnidades(nUnidades);
            fflush(stdin);
        }

        void lePreco()
        {
                float p = 0;
                cout<<"Insira o pre�o por unidade de produto: ";
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
            cout<<"Insira a sec��o do produto: ";
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

        //2.6 Fun��es de Escrita
        void mostraCodProduto()
        {
            cout<<"C�digo do Produto: "<<getCodProduto()<<"."<<endl;
        }

        void mostraDesignacao()
        {
            cout<<"Designa��o: "<<getDesignacao()<<"."<<endl;
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
            cout<<"N�mero de unidades: "<<getNumUnidades()<<"."<<endl;
        }

        void mostraPreco()
        {
            cout<<fixed<<setprecision(2)<<"Pre�o: "
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
            cout<<"Sec��o: "<<getSeccao()<<"."<<endl;
        }

        void mostraPrecisaFrio()
        {
            cout<<"Precisa de frio? ";
            if(getPrecisaFrio()) cout<<"Sim.";
            else                         cout<<"N�o.";
            cout<<endl;
        }

        void mostraTudoProduto()
        {
            cout<<"\nApresenta��o dos dados de um produto; "<<endl;
            mostraCodProduto(); mostraDesignacao();
            mostraUnidade(); mostraQuantidadeUnidade();
            mostraNumUnidades(); mostraPreco(); mostraTaxaIVA();
            mostraDataValidade(); mostraSeccao(); mostraPrecisaFrio();
            system("pause");
        }

        // 2.7 Outras fun��es
        float precoComIVA(float preco, float taxaIVA);

        void mostraPrecoComIVA()
        {
            cout<<fixed<<setprecision(2)<<"Pre�o com IVA: "<<precoComIVA(getPreco(), getTaxaIVA())
            <<"euro(s)."<<endl;
        }

    // 3. Redefini��o / Sobrecarga de Operadores
    // Redefini��o do operador soma
    Produto operator+ (const Produto& p)
    {
        Produto produtoResultante;
        //"this" - aponta para o objecto que � o primeiro operando
        // "p" - Objecto que funciona como argumento da fun��o do operador.

        produtoResultante.designacao = this->designacao + " mais " + p.designacao;
        // "+" -> Operador da concatena��o.
        produtoResultante.numUnidades = this -> numUnidades + p.numUnidades;
        return produtoResultante;
    }

    // Redefini��o do operador diferen�a
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

//Defini��o de fun��o externa
float Produto::precoComIVA(float preco, float taxaIVA)
{
    return(1+taxaIVA) * preco;
}

//***************************************
//* Fun��o principal
//***************************************

// A vari�vel "static" deve ser declarada e inicializada tamb�m fora da classe.
int Produto::numProdutos=0;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// 1. Utiliza��o dos Operadores Soma e diferen�a
Produto produto1, produto2, somaProduto, difProduto;
produto1.leTudoProduto(); produto1.mostraTudoProduto();

produto2.leTudoProduto(); produto2.mostraTudoProduto();

somaProduto = produto1 + produto2;
somaProduto.mostraTudoProduto();
difProduto = produto1 - produto2;
difProduto .mostraTudoProduto();

// 2. Utiliza��o dos Operadores Relacionais ou de compara��o
cout<<endl;
if(produto1.getSeccao() == produto2.getSeccao())
{
    if(produto1 > produto2)
    {
        cout<<produto1.getDesignacao()<<"� mais caro que ";
        cout<<produto2.getDesignacao()<<"."<<endl;
    }
    else if(produto2 < produto1)
    {
        cout<<produto2.getDesignacao()<<"� mais caro que ";
        cout<<produto1.getDesignacao()<<"."<<endl;
    }
      else
    {
        cout<<produto1.getDesignacao()<<" tem o mesmo pre�o que ";
        cout<<produto2.getDesignacao()<<"."<<endl;
    }
}
else
{
    cout<<"Os produtos n�o s�o da mesma sec��o!!"<<endl;
}
  cout<<"\n";
    system("pause");
    return 0;

} // Fim da fun��o "main()".
