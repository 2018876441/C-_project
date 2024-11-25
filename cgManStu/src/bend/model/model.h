#ifndef MODEL_H
#define MODEL_H
#include <QString>
struct stuScore{
    QString lessonId;
    QString lessonName;
    QString score;
    QString term;
    QString tea;
};

struct stuMessage{
    QString StuId;
    QString name;
    QString password;
    QString sex;
    QString college;
    QString major;
    QString classId;
};

struct teaClass{
    QString classId;
    QString name;
    QString number;
};

struct teaManStu{
    QString stuId;
    QString name;
    QString score;
    QString classId;
    QString college;
    QString major;
    QString term;
    QString lessonId;
};



#endif // MODEL_H
