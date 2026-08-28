class Solution {
public:
    string reformatDate(string date) {
        string ans;
        int i = 0;
        while(date[i] != ' ')
            i++;

        string day = date.substr(0, i-2);

        if(day.size() == 1)
            day = "0" + day;

        i++;

        string month = date.substr(i, 3);

        i += 4;

        string year = date.substr(i, 4);

        string mon;
        if(month == "Jan"){
            mon = "01";
        }else if(month == "Feb"){
            mon = "02";
        }else if(month == "Mar"){
            mon = "03";
        }else if(month == "Apr"){
            mon = "04";
        }else if(month == "May"){
            mon = "05";
        }else if(month == "Jun"){
            mon = "06";
        }else if(month == "Jul"){
            mon = "07";
        }else if(month == "Aug"){
            mon = "08";
        }else if(month == "Sep"){
            mon = "09";
        }else if(month == "Oct"){
            mon = "10";
        }else if(month == "Nov"){
            mon = "11";
        }else{
            mon = "12";
        }
        ans = year+'-'+mon+'-'+day;
        return ans;
    }
};