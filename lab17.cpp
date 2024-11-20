// Definition of findHigh function goes here
template <typename A, typename B, typename C, typename D>

 void findHigh(A data[], B size, C &position, D &maxvalue) {
    for (int i = 0; i < size; i++) {
        if (data[i] > maxvalue) {
            maxvalue = data[i];
            position = i;
        }
    }
    }
