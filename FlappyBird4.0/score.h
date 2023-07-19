#ifndef SCORE_H
#define SCORE_H

#include <QLabel>

class Score
{
public:
    Score(QWidget* mainBody);
    QLabel* curScorePic;
    QLabel* hisScorePic;
    int score;
    int hisScore;
signals:

};

#endif // SCORE_H
