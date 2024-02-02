int pop(vector<int> &heap)

{

    // Write you code here.

 

    if (heap.empty()) {

      return -1;

    }

 

    int ans = heap[0];

    int size = heap.size()-1;

    heap[0] = heap[size];

    heap.pop_back();

    int size1 = heap.size()-1;

 

    int i = 0;

    while(i <= size1){

 

        int largest = i;

        int lc = 2*i+1;

        int rc = 2*i+2;

 

        if(heap[lc] > heap[largest] && lc <= size1){

            largest = lc;

        }

 

        if(heap[rc] > heap[largest] && rc <= size1){

            largest = rc;

        }

 

        if(largest == i){

          return ans;

        }

        if(largest != i){

            swap(heap[largest],heap[i]);

            i = largest;

        }

 

    }

    return ans;

    

}
