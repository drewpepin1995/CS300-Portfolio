// printing list in alphaneumerical order
void printCourseList(vector<Course> courses)

{

int n=courses.size();

//bubble sorting course list

for(int i=0;i<n-1;i++)

{

for(int j=0;j<n-i-1;j++)

{

if(courses[j].courseNumber > courses[j+1].courseNumber)

{

swap(courses[j+1],courses[j]);

}

}

}

// printing all courses in list 

for(int i=0;i<n;i++)

{

printCourse(courses[i]);

}

}