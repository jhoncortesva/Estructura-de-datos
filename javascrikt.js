// arrays

var frutas = ["Manzana", "Banana"];
let nuevaLongitud = frutas.push("Naranja");
console.log(frutas)

// pilas


class node {
    constructor(value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }

    add(value) {
        if (value < this.value) {
            this.addToTheLeft(value);
        } else {
            this.addToTheRight(value);
        }
    }

    addToTheLeft(value) {
        if (this.left) {
            this.left.add(value);
        } else {
            this.left = new node(value);
        }
    }

    addToTheRight(value) {
        if (this.right) {
            this.right.add(value);
        } else {
            this.right = new node(value);
        }
    }
}

const head = new node(10);
head.add(15);
head.add(9);
head.add(8);
head.add(9);
head.add(10);
head.add(16);
head.add(7);
head.add(20);
console.log(head);


class Stack {
    constructor() {
        this.stack = [];
    }

    push(element) {
        this.stack.push(element);
        return this.stack;
    }

    pop() {
        return this.stack.pop();
    }

    peek() {
        return this.stack[this.stack.lenght -1];
    }

    size() {
        return this.stack.length;
    }

    print() {
        console.log(this.stack);
    }
}

const stack = new Stack();
console.log(stack.size());
console.log(stack.push("jhon cena"));
console.log(stack.push("Goku"));
console.log(stack.size());
stack.print();


