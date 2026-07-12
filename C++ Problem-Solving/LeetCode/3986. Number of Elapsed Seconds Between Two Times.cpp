class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {

    string sh = {} , sm ={} , ss = {}; 
    string eh = {} , em ={} , es = {};

    sh+=startTime[0];
    sh+=startTime[1];
    int SH = stoi(sh); 

    sm+=startTime[3];
    sm+=startTime[4];
    int SM = stoi(sm); 

    ss+=startTime[6];
    ss+=startTime[7];
    int SS = stoi(ss); 

    eh+=endTime[0];
    eh+=endTime[1];
    int EH = stoi(eh); 

    em+=endTime[3];
    em+=endTime[4];
    int EM = stoi(em); 

    es+=endTime[6];
    es+=endTime[7];
    int ES = stoi(es); 

    int ts = ( SH * 3600 )  + ( SM * 60 )  + SS;
    int te = ( EH * 3600 )  + ( EM * 60 )  + ES;


    return te - ts;
        
    }
};