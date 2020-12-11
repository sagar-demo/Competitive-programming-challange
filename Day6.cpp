// A floppy disk shows f bytes free and u bytes used .in you delete a file of size o bytes and create a new file of size n bytes .how many free bytes will the floppy disk have?
// f u o and n are user entered value

# include<iostream>
using namespace std;
int main()
{
    int f,u, o , n;
    cout<<"Enter free disk size in bytes.."<<endl;
    cin>>f;
    cout<<"Enter used disk size in bytes.."<<endl;
    cin>>u;
    cout<<"Enter old file size in bytes.."<<endl;
    cin>>o;
    cout<<"Enter new file size in bytes.."<<endl;
    cin>>n;
    int totalDiskSize=f+u;
    int currentUsedDisk=u-o;


    currentUsedDisk=currentUsedDisk+n;
    int currentFreeDiskSize=totalDiskSize-currentUsedDisk;
    cout<<"Free spcae Available "<<currentFreeDiskSize<<"bytes";

    return 0;
}