vector<int> findSchedule(int numCourses, vector<pair<int, int>> &prerequisites)

{

    // Write your code here.

    vector<int>adj[numCourses+1];

    int m = prerequisites.size();

    for(int i=0;i<m;i++)

    {

        int course = prerequisites[i].first;

        int pre = prerequisites[i].second;

        adj[pre].push_back(course);

    }

    int indigree[numCourses+1] = {0};

    for(int i=0;i<numCourses;i++)

    {

        for(auto it:adj[i])

        {

            indigree[it]++;

        }

    }

    queue<int>q;

    for(int i=0;i<numCourses;i++)

    {

        if(indigree[i]==0)

        {

            q.push(i);

        }

    }

    vector<int>ans;

    while(!q.empty())

    {

        int node = q.front();

        

        ans.push_back(node);

        q.pop();

        for(auto it:adj[node])

        {

            indigree[it]--;

            if(indigree[it]==0)

            {

                q.push(it);

            }

        }

    }

    if(ans.size()==numCourses) 

    {

        return ans;

    }

    else{

        return vector<int>();

    }

    

 

}
