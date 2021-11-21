//
int main()
{
    int n;
    int se;  
    cout<<" Enter size of array.."<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<" What number you want to search in array.."<<endl;
    cin>>se;
    int foundindex = BinarySearch(arr, se, n);
    cout<<" Search element found at index number.."<<foundindex<<endl;

    return 0;
}