// #include <ctype.h>
// #include <math.h>
// #include <stdio.h>
// #include <string.h>

// typedef struct stack {
//   char st[20];
//   int top;
// } s;
// s s1;
// void push(char x) {
//   if (s1.top == 19)
//     printf("Stack is full!");
//   else {
//     s1.top++;
//     s1.st[s1.top] = x;
//   }
// }
// int pop() {
//   char x;
//   if (s1.top == -1)
//     printf("stack is empty!");
//   else
//     x = s1.st[s1.top];
//   s1.top--;
//   return x;
// }
// void display() {
//   int i;
//   if (s1.top == -1)
//     printf("Stack is empty");
//   else {
//     for (i = s1.top; i >= 0; i--)
//       printf("\n %d", s1.st[i]);
//   }
// }
// int precedence(char symbol) {
//   if (symbol == '*' || symbol == '/') {
//     return (2);
//   } else if (symbol == '+' || symbol == '-') {
//     return (1);
//   } else {
//     return (0);
//   }
// }
// int is_operator(char symbol) {
//   if (symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-') {
//     return 1;
//   } else {
//     return 0;
//   }
// }
// int main() {
//   s1.top = -1;
//   char inf[20];
//   char pFix[20];
//   printf("Enter the infix expression:\n");
//   scanf("%s", inf);
//   int len = strlen(inf);
//   inf[len] = ')';
//   inf[len + 1] = '\0';
//   push('(');
//   int i = 0;
//   int j = 0;
//   char ch = inf[i];
//   while (ch != '\0') {
//     if (ch == '(') {
//       push(ch);
//     } else if (isdigit(ch) || isalpha(ch)) {
//       pFix[j] = ch;
//       j++;
//     } else if (is_operator(ch) == 1) {
//       char x = pop();
//       while (is_operator(x) == 1 && precedence(x) >= precedence(x)) {
//         pFix[j] = x;
//         j++;
//         x = pop();
//       }
//       push(x);
//       push(ch);
//     } else if (ch == ')') {
//       char x = pop();
//       while (x != '(') {
//         pFix[j] = x;
//         j++;
//         x = pop();
//       }
//     }
//     i++;
//     ch = inf[i];
//   }
//   pFix[j] = '\0';
//   printf("The post fix expression is:\n");
//   printf("%s", pFix);
//   return 0;
// }

// #include <ctype.h>
// #include <stdio.h>
// int st[20];
// int top = -1;
// void push(int x) {
//   top++;
//   st[top] = x;
// }
// int pop() { return (st[top--]); }
// void main() {
//   char post[10], ch;
//   int i, opt1, opt2;
//   printf("Please enter the correct postfix expression:\n");
//   scanf("%s", &post);
//   i = 0;
//   ch = post[i];
//   while (ch != '\0') {
//     if (isalnum(ch)) {
//       push(toascii(ch) - 48);
//     } else {
//       opt1 = pop();
//       opt2 = pop();
//       switch (ch) {
//       case '+':
//         push(opt1 + opt2);
//         break;
//       case '-':
//         push(opt1 - opt2);
//         break;
//       case '*':
//         push(opt1 * opt2);
//         break;
//       case '/':
//         push(opt1 / opt2);
//         break;
//       case '%':
//         push(opt1 % opt2);
//         break;
//       default:
//         printf("Invalid Expression");
//       }
//     }
//     i++;
//     ch = post[i];
//   }
//   printf("\n Result of %s is %d", post, st[top]);
// }

// #include <limits.h>
// #include <stdbool.h>
// #include <stdio.h>
// #define V 6

// int minDistance(int dist[], bool sptSet[]) {
//   int min = INT_MAX, min_index;
//   for (int v = 0; v < V; v++)
//     if (sptSet[v] == false && dist[v] <= min)
//       min = dist[v], min_index = v;
//   return min_index;
// }
// void printSolution(int dist[]) {
//   printf("Vertex \t Distance from Source\n");
//   for (int i = 0; i < V; i++)
//     printf("%d \t\t %d\n", i, dist[i]);
// }
// void dijkstra(int graph[V][V], int src) {
//   int dist[V];
//   bool sptSet[V];
//   for (int i = 0; i < V; i++)
//     dist[i] = INT_MAX, sptSet[i] = false;
//   dist[src] = 0;
//   for (int count = 0; count < V - 1; count++) {
//     int u = minDistance(dist, sptSet);
//     sptSet[u] = true;
//     for (int v = 0; v < V; v++)
//       if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX &&
//           dist[u] + graph[u][v] < dist[v])
//         dist[v] = dist[u] + graph[u][v];
//   }
//   printSolution(dist);
// }
// int main() {
//   int graph[V][V] = {{0, 1, 4, 0, 0, 0}, {1, 0, 4, 2, 7, 0},
//                      {4, 4, 0, 3, 5, 0}, {0, 2, 3, 0, 4, 6},
//                      {0, 7, 5, 4, 0, 7}, {0, 0, 0, 6, 7, 0}};
//   dijkstra(graph, 0);
//   return 0;
// }

// //* Chaining
// #include <stdio.h>
// #include <stdlib.h>
// #define size 11
// struct node {
//   int data;
//   struct node *next;
// };
// struct node *array[size];
// void init() {
//   int i;
//   for (i = 0; i < size; i++)
//     array[i] = NULL;
// }
// void insert(int value) {
//   struct node *newNode = malloc(sizeof(struct node));
//   newNode->data = value;
//   newNode->next = NULL;
//   int key = value % size;
//   if (array[key] == NULL)
//     array[key] = newNode;
//   else {
//     struct node *temp = array[key];
//     while (temp->next) {
//       temp = temp->next;
//     }
//     temp->next = newNode;
//   }
// }
// void display() {
//   int i;
//   for (i = 0; i < size; i++) {
//     struct node *temp = array[i];
//     printf("array[%d]-->", i);
//     while (temp) {
//       printf("%d -->", temp->data);
//       temp = temp->next;
//     }
//     printf("NULL\n");
//   }
// }
// int main() {
//   init();
//   insert(55);
//   insert(77);
//   insert(15);
//   insert(66);
//   insert(18);
//   insert(20);
//   insert(8);
//   insert(30);
//   insert(44);
//   insert(11);
//   display();
//   return 0;
// }

// //* Linear probing
// #include <stdio.h>
// #include <stdlib.h>
// #define TABLE_SIZE 11
// int h[TABLE_SIZE] = {NULL};
// void insert(int key) {
//   int index, i, flag = 0, hkey;
//   hkey = key % TABLE_SIZE;
//   for (i = 0; i < TABLE_SIZE; i++) {
//     index = (hkey + i) % TABLE_SIZE;
//     if (h[index] == NULL) {
//       h[index] = key;
//       break;
//     }
//   }
//   if (i == TABLE_SIZE)
//     printf("\nelement cannot be inserted\n");
// }
// void display() {
//   int i;
//   printf("\nHash Table : ");
//   for (i = 0; i < TABLE_SIZE; i++)
//     printf("\n array[%d] = %d", i, h[i]);
// }
// int main() {
//   insert(55);
//   insert(77);
//   insert(15);
//   insert(66);
//   insert(18);
//   insert(20);
//   insert(8);
//   insert(30);
//   insert(44);
//   insert(11);
//   display();
//   return 0;
// }

// //* Quadratic Probing
// #include <stdio.h>
// #include <stdlib.h>
// #define TABLE_SIZE 11
// int h[TABLE_SIZE] = {NULL};
// void insert(int key) {
//   int index, i, flag = 0, hkey;
//   hkey = key % TABLE_SIZE;
//   for (i = 0; i < TABLE_SIZE; i++) {
//     index = (hkey + i * i) % TABLE_SIZE;
//     if (h[index] == NULL) {
//       h[index] = key;
//       break;
//     }
//   }
//   if (i == TABLE_SIZE)
//     printf("\n element cannot be inserted\n");
// }
// void display() {
//   int i;
//   printf("\nHash Table : ");
//   for (i = 0; i < TABLE_SIZE; i++)
//     printf("\n array[%d] = %d", i, h[i]);
// }
// int main() {
//   insert(55);
//   insert(77);
//   insert(15);
//   insert(66);
//   insert(18);
//   insert(20);
//   insert(8);
//   insert(30);
//   insert(44);
//   insert(11);
//   display();
//   return 0;
// }

// //* Double Hashing
// #include <stdio.h>
// #include <stdlib.h>
// #define TABLE_SIZE 11
// int h[TABLE_SIZE] = {NULL};
// void insert(int key) {
//   int index, i, flag = 0, hkey, hash2;
//   hkey = key % TABLE_SIZE;
//   hash2 = 7 - (key % 7);
//   for (i = 0; i < TABLE_SIZE; i++) {
//     index = (hkey + i * hash2) % TABLE_SIZE;
//     if (h[index] == NULL) {
//       h[index] = key;
//       break;
//     }
//   }
//   if (i == TABLE_SIZE)
//     printf("\nelement cannot be inserted\n");
// }
// void display() {
//   int i;
//   printf("\nHash Table : ");
//   for (i = 0; i < TABLE_SIZE; i++)
//     printf("\n array[%d] = %d", i, h[i]);
// }
// int main() {
//   insert(55);
//   insert(77);
//   insert(15);
//   insert(66);
//   insert(18);
//   insert(20);
//   insert(8);
//   insert(30);
//   insert(44);
//   insert(11);
//   display();
//   return 0;
// }