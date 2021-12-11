#include <iostream>

using namespace std;

int main()
{
    string name, emo;
    int height, dheight, cale, old;
    cout<<"尼豪，我是23世紀的低階機器人.w."<<endl;
    cout << "請輸入你的名子。" << endl;
    cin>>name;
    cout<<"嗨！ "<<name<<" 你今年幾歲？"<<endl;
    cin>>old;
    /*
    cout<<"\nHow's your day?"<<endl;
    cin>>emo;
    cout<<emo<<"? Great!"<<endl;
    */
    cout<<"\n你的理想身高是幾公分？"<<endl;
    cin>>dheight;
    while (true){
        cout<<"\n你現在幾公分？"<<endl;
        cin>>height;
        if (height >= dheight) {
            cout<<"\n已達到理想身高 \\AWA/ "<<endl;
        }
        else{
            cale = dheight - height;
            cout<<"\n你離理想身高還差"<<cale<<"公分。"<<endl;
            if( old<18 ){
                if(cale > 15){
                    cout<<"\n建議先暫時性戰術放棄ewe"<<endl;
                }
                else if (cale <= 5){
                    cout<<"\n非常有機會！加油！"<<endl;
                }
                else if (cale <= 10){
                    cout<<"\n多喝牛奶，早點睡覺喔AWA"<<endl;
                }
                else if (cale <= 15){
                    cout<<"要加油一下喔 還是有可能的owo"<<endl;
                }
            }
            else{
                cout<<"\n沒救了qwq 太老了qwq"<<endl;
            }

        }
    }


    return 0;
}
