const mongooes = require("mongoose");
const validator = require("validator");


const studentSchema = new mongooes.Schema({
    name: {
        type: String,
        require: true,
        minlength: 3
    },

    email: {
        type: String,
        require: true,
        unique: [true, "Email id already present"],
        validator(value) {
            if (!validator.isEmail(value)) {
                throw new Error("invilade email");
            }
        }
    },
    phone: {
        type: Number,
        require: true,
        unique: true

    },
    address: {
        type: String,
        require: true
    }

})


// we will create a new collection

const student = new mongooes.model('Student', studentSchema);

module.exports = student;