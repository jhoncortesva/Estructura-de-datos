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
 console.log(head);


