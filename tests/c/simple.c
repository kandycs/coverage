int add(int a[], int b[], int c[], int size) {

    int i;
	for (i = 0; i < size/2; i++) {
		c[i] = a[i] + b[2*i+1];
	}

	return 0;
}

int main(int argc, char **argv) {
    return 0;
}
