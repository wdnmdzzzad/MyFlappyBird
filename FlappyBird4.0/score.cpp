#include "score.h"
#include "bird.h"

Score::Score(QWidget* mainBody){
    curScorePic=new QLabel(mainBody);
    hisScorePic=new QLabel(mainBody);
    score=0;
    hisScore=0;
}
