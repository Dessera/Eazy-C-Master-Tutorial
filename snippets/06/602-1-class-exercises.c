#include <stdio.h>

struct Student {
  char name;
  int gender;
  int id;
};

// 如果继续学习，你可能会把这里的参数更换为指针
void print_student(struct Student stu) {
  printf("name: %c, gender: %d, id: %d\n", stu.name, stu.gender, stu.id);
}

int main() {
  struct Student stu = {'X', 0, 123456};

  print_student(stu);
}
