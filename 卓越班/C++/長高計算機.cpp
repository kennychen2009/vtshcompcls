#include <iostream>

using namespace std;

int main()
{
    string name, emo;
    int height, dheight, cale, old;
    cout<<"�����A�ڬO23�@�����C�������H.w."<<endl;
    cout << "�п�J�A���W�l�C" << endl;
    cin>>name;
    cout<<"�١I "<<name<<" �A���~�X���H"<<endl;
    cin>>old;
    /*
    cout<<"\nHow's your day?"<<endl;
    cin>>emo;
    cout<<emo<<"? Great!"<<endl;
    */
    cout<<"\n�A���z�Q�����O�X�����H"<<endl;
    cin>>dheight;
    while (true){
        cout<<"\n�A�{�b�X�����H"<<endl;
        cin>>height;
        if (height >= dheight) {
            cout<<"\n�w�F��z�Q���� \\AWA/ "<<endl;
        }
        else{
            cale = dheight - height;
            cout<<"\n�A���z�Q�����ٮt"<<cale<<"�����C"<<endl;
            if( old<18 ){
                if(cale > 15){
                    cout<<"\n��ĳ���ȮɩʾԳN���ewe"<<endl;
                }
                else if (cale <= 5){
                    cout<<"\n�D�`�����|�I�[�o�I"<<endl;
                }
                else if (cale <= 10){
                    cout<<"\n�h�ܤ����A���I��ı��AWA"<<endl;
                }
                else if (cale <= 15){
                    cout<<"�n�[�o�@�U�� �٬O���i�઺owo"<<endl;
                }
            }
            else{
                cout<<"\n�S�ϤFqwq �ӦѤFqwq"<<endl;
            }

        }
    }


    return 0;
}
