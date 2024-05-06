(printf "%.2f\n" (double (reduce + (map #(/ 1 %) (range 1 101)))))
