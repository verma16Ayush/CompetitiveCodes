int n = sc.nextInt();
        int m=sc.nextInt();
        ArrayList<int []>row=new ArrayList<>();
        ArrayList<int []>col=new ArrayList<>();
        HashMap<Integer,Integer>hm=new HashMap<>();
        for (int i = 0; i < n; i++) {
          int arr[]=new  int[m];
          for (int j = 0; j < m ; j++) {
            int ele=sc.nextInt();
            if(j==0)
            {
              hm.put(ele,i);
            }
            arr[j]=ele;
          }
          row.add(arr);
        }
        int first=row.get(0)[0];
        int firsti=0;
       // System.out.println(first);
 
        for (int i = 0; i < m; i++) {
          int arr[]=new  int[n];
          for (int j = 0; j < n ; j++) {
            int ele=sc.nextInt();
            if(first==ele)
            {
              firsti=col.size();
            }
            arr[j]=ele;
          }
          col.add(arr);
        }
 
       // ArrayList<int []>mat=new ArrayList<>();
        int colf[]=col.get(firsti);
        for (int i = 0; i < n ; i++) {
          int index=hm.get(colf[i]);
         // mat.add(row.get(index));
          out.println(Arrays.toString(row.get(index)).replaceAll("[\\[|\\]|,]",""));
        }