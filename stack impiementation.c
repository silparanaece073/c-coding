#include <stdio.h>

struct stack {
    int a[10];
    int top;
};

int main() {
    struct stack st;
    int choice, x, i;

    st.top = -1;

    while (1) {
        printf("\n1. Push  2. Pop  3. Display  4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (st.top == 9) {
                printf("Stack Overflow\n");
            } else {
                printf("Enter value: ");
                scanf("%d", &x);
                st.top++;
                st.a[st.top] = x;
            }
        }

        else if (choice == 2) {
            if (st.top == -1) {
                printf("Stack Underflow\n");
            } else {
                printf("Popped element: %d\n", st.a[st.top]);
                st.top--;
            }
        }

        else if (choice == 3) {
            if (st.top == -1) {
                printf("Stack is empty\n");
            } else {
                printf("Stack elements:\n");
                for (i = st.top; i >= 0; i--) {
                    printf("%d\n", st.a[i]);
                }
            }
        }

        else if (choice == 4) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
