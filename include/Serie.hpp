#include "Video.hpp"

class Serie : public Video {
    private:
        int n_temp, total_ep;

    public:
        Serie(std::string nome, int ano, std::string genero, int n_temp, int total_ep) : 
            Video(nome, ano, genero), n_temp(n_temp), total_ep(total_ep) {}
        
        void print_info(int id);
};