
class add{
    int a = 90, b = 90;
    public void sum(){
        System.out.println(a+b);
    }
}

class hello {
    public static void main(String[] args) {
        int arr[][] = new int[4][4], n=1;
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                arr[i][j] = n;
                System.out.print(arr[i][j]+" ");
                n++;
            }
            System.out.println();
        }
        add ref = new add();
        ref.sum();
    }
}  