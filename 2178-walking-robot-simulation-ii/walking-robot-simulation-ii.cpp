class Robot {
public:
int w,h;
int x=0,y=0;
int per;
string dir="East";
    Robot(int width, int height) {
       w=width;
       h=height;
       per=2*(w+h)-4;
       
    }
    
    void step(int num) {
        if (per == 0) return;

        num %= per;

        // special case
        if (num == 0 && (x != 0 || y != 0)) return;
        if (num == 0 && x == 0 && y == 0) {
            dir = "South"; 
            return;
        }
        while(num>0){
            if(dir=="East"){
                int move=min(num,w-1-x);
                x+=move;
                num-=move;
                if(num>0){
                    dir="North";
                }
            }
            else if(dir=="North"){
                int move=min(num,h-1-y);
                y+=move;
                num-=move;
                if(num>0){
                    dir="West";
                }
            }
            else if(dir=="West"){
                int move=min(num,x);
                x-=move;
                num-=move;
                if(num>0){
                    dir="South";
                }
            }
            else{
                int move=min(num,y);
                y-=move;
                num-=move;
                if(num>0){
                    dir="East";
                }
            }
        } 
    }
    
    vector<int> getPos() {
       return{x,y}; 
    }
    
    string getDir() {
        return dir;
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */